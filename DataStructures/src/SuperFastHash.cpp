#include "SuperFastHash.h"
#include <assert.h>
#include <stdlib.h>
#include "CommonTypeDefines.h"

#if !defined(_WIN32)
#include <stdint.h>
#endif

#undef get16bits
#if (defined(__GNUC__) && defined(__i386__)) || defined(__WATCOMC__) \
  || defined(_MSC_VER) || defined (__BORLANDC__) || defined (__TURBOC__)
#define get16bits(d) (*((const __u16 *) (d)))
#endif

#if !defined (get16bits)
#define get16bits(d) ((((__u32)(((const uint8_t *)(d))[1])) << 8)\
                       +(__u32)(((const uint8_t *)(d))[0]) )
#endif

static const int INCREMENTAL_READ_BLOCK=65536;

unsigned int SuperFastHash (const char * data, int length)
{
	// All this is necessary or the hash does not match SuperFastHashIncremental
	int bytesRemaining=length;
	unsigned int lastHash = length;
	int offset=0;
	while (bytesRemaining>=INCREMENTAL_READ_BLOCK)
	{
		lastHash=SuperFastHashIncremental (data+offset, INCREMENTAL_READ_BLOCK, lastHash );
		bytesRemaining-=INCREMENTAL_READ_BLOCK;
		offset+=INCREMENTAL_READ_BLOCK;
	}
	if (bytesRemaining>0)
	{
		lastHash=SuperFastHashIncremental (data+offset, bytesRemaining, lastHash );
	}
	return lastHash;

//	return SuperFastHashIncremental(data,len,len);
}

unsigned int SuperFastHashIncremental (const char * data, int len, unsigned int lastHash )
{
	__u32 hash = (__u32) lastHash;
	__u32 tmp;
	int rem;

	if (len <= 0 || data == NULL) return 0;

	rem = len & 3;
	len >>= 2;

	/* Main loop */
	for (;len > 0; len--) {
		hash  += get16bits (data);
		tmp    = (get16bits (data+2) << 11) ^ hash;
		hash   = (hash << 16) ^ tmp;
		data  += 2*sizeof (__u16);
		hash  += hash >> 11;
	}

	/* Handle end cases */
	switch (rem) {
		case 3: hash += get16bits (data);
			hash ^= hash << 16;
			hash ^= data[sizeof (__u16)] << 18;
			hash += hash >> 11;
			break;
		case 2: hash += get16bits (data);
			hash ^= hash << 11;
			hash += hash >> 17;
			break;
		case 1: hash += *data;
			hash ^= hash << 10;
			hash += hash >> 1;
	}

	/* Force "avalanching" of final 127 bits */
	hash ^= hash << 3;
	hash += hash >> 5;
	hash ^= hash << 4;
	hash += hash >> 17;
	hash ^= hash << 25;
	hash += hash >> 6;

	return (unsigned int) hash;

}

unsigned int SuperFastHashFile (const char * filename)
{
	FILE *fp = fopen(filename, "rb");
	assert(fp);	
	if (fp==0)
		return 0;
	unsigned int hash = SuperFastHashFilePtr(fp);
	fclose(fp);
	return hash;
}

unsigned int SuperFastHashFilePtr (FILE *fp)
{
	fseek(fp, 0, SEEK_END);
	int length = (int)ftell(fp);
	fseek(fp, 0, SEEK_SET);
	int bytesRemaining=length;
	unsigned int lastHash = length;
	char readBlock[INCREMENTAL_READ_BLOCK];
	while (bytesRemaining>=(int) sizeof(readBlock))
	{
		fread(readBlock, sizeof(readBlock), 1, fp);
		lastHash=SuperFastHashIncremental (readBlock, (int) sizeof(readBlock), lastHash );
		bytesRemaining-=(int) sizeof(readBlock);
	}
	if (bytesRemaining>0)
	{
		fread(readBlock, bytesRemaining, 1, fp);
		lastHash=SuperFastHashIncremental (readBlock, bytesRemaining, lastHash );
	}
	return lastHash;
}
