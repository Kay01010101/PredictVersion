#ifndef _GCC_WIN_STRINGS
#define _GCC_WIN_STRINGS

#if (defined(__GNUC__)  || defined(__GCCXML__)) && !defined(_WIN32)
int _stricmp(const char *s1, const char *s2);
int _strnicmp(const char *s1, const char *s2, size_t n);

#ifndef _vsnprintf
#define _vsnprintf vsnprintf
#endif

#endif

#endif
