/* include/fcgi_config.h.  Generated automatically by configure.  */
/* include/fcgi_config.h.in.  Generated automatically from configure.in by autoheader.  */

/* Define if on AIX 3.
   System headers sometimes define this.
   We just want to avoid a redefinition error message.  */
#ifndef _ALL_SOURCE
/* #undef _ALL_SOURCE */
#endif

/* Define if you have the ANSI C header files.  */
/* #undef STDC_HEADERS */

/* Define to type of ssize_t, if not on this platform.  */
/* #undef ssize_t */

/* Define if you have the <sys/select.h> include file */
/* #undef HAVE_SYS_SELECT_H */

/* Define if you don't have fd_set */
/* #undef NO_FD_SET */

/* Define if want to compile with ASSERT() statements */
/* #undef WITH_ASSERT */

/* Define if want to compile with additional debugging code */
/* #undef WITH_DEBUG */

/* Define if want to compile with hooks for testing */
/* #undef WITH_TEST */

/* Define if sockaddr_un in <sys/un.h> contains the sun_len component */
/* #undef HAVE_SOCKADDR_UN_SUN_LEN */

/* Define if <sys/socket.h> defines socklen_t */
#define HAVE_SOCKLEN 1

/* Define if we have f{set,get}pos functions */
#define HAVE_FPOS 1

/* Define if we have strerror */
#define HAVE_STRERROR 1

/* Define if we have strtol */
#define HAVE_STRTOL 1

/* Define if we need cross-process locking */
/* #undef USE_LOCKING */

/* Define if va_arg(arg, long double) crashes the compiler. */
/* #undef HAVE_VA_ARG_LONG_DOUBLE_BUG */

/* Don't know what this stuff is for */
/* #undef HAVE_MATHLIB */
/* #undef WITH_DOMESTIC */
/* #undef WITH_EXPORT */
/* #undef WITH_GLOBAL */

/* The number of bytes in a int.  */
/* #undef SIZEOF_INT */

/* The number of bytes in a long.  */
/* #undef SIZEOF_LONG */

/* The number of bytes in a off_t.  */
/* #undef SIZEOF_OFF_T */

/* The number of bytes in a size_t.  */
/* #undef SIZEOF_SIZE_T */

/* The number of bytes in a unsigned int.  */
/* #undef SIZEOF_UNSIGNED_INT */

/* The number of bytes in a unsigned long.  */
/* #undef SIZEOF_UNSIGNED_LONG */

/* The number of bytes in a unsigned short.  */
/* #undef SIZEOF_UNSIGNED_SHORT */

/* Define if you have the <limits.h> header file.  */
/* #undef HAVE_LIMITS_H */

/* Define if you have the <unistd.h> header file.  */
/* #undef HAVE_UNISTD_H */

/* Define if you have the <netdb.h> header file.  */
#define HAVE_NETDB_H 1

/* Define if you have the <netinet/in.h> header file.  */
#define HAVE_NETINET_IN_H 1

/* Define if you have the <windows.h> header file.  */
/* #undef HAVE_WINDOWS_H */

/* Define if you have the <winsock.h> header file.  */
/* #undef HAVE_WINSOCK_H */

/* Define if you have the <sys/socket.h> header file.  */
#define HAVE_SYS_SOCKET_H 1

/* Define if you have the <strings.h> header file.  */
#define HAVE_STRINGS_H 1

/* Define if you have the <sys/time.h> header file.  */
#define HAVE_SYS_TIME_H 1
