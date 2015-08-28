dnl
dnl Meta-HTML specific tests
dnl
dnl Check wether `sig_t' is a typedef.
AC_DEFUN(AC_HAVE_TYPE_SIG_T,
[AC_REQUIRE([AC_DIAGNOSE([obsolete],[your code may safely assume C89 semantics that RETSIGTYPE is void.
Remove this warning and the `AC_CACHE_CHECK' when you adjust the code.])dnl
AC_CACHE_CHECK([return type of signal handlers],[ac_cv_type_signal],[AC_COMPILE_IFELSE(
[AC_LANG_PROGRAM([#include <sys/types.h>
#include <signal.h>
],
		 [return *(signal (0, 0)) (0) == 1;])],
		   [ac_cv_type_signal=int],
		   [ac_cv_type_signal=void])])
AC_DEFINE_UNQUOTED([RETSIGTYPE],[$ac_cv_type_signal],[Define as the return type of signal handlers
		    (`int' or `void').])
])
AC_MSG_CHECKING(whether sig_t is defined)
AC_CACHE_VAL(ac_cv_have_type_sig_t,
    [
      AC_LINK_IFELSE([AC_LANG_PROGRAM([[
#include <sys/types.h>
#include <signal.h>

static void foo (void) { }
static void bar (void) { signal (SIGINT, (sig_t)foo); }
]], [[]])],[ac_cv_have_type_sig_t=yes],[ac_cv_have_type_sig_t=no ])
    ])
AC_MSG_RESULT($ac_cv_have_type_sig_t)
if test "$ac_cv_have_type_sig_t" = yes; then
AC_DEFINE(HAVE_TYPE_SIG_T)
fi
])
dnl
dnl Check for `time_t' as a type.
AC_DEFUN(AC_HAVE_TYPE_TIME_T,[
AC_MSG_CHECKING(whether time_t is defined)
AC_CACHE_VAL(ac_cv_have_type_time_t,
    [
      AC_LINK_IFELSE([AC_LANG_PROGRAM([[
	#include <sys/types.h>
	#include <time.h>
	time_t foo; ]], [[]])],[ac_cv_have_type_time_t=yes],[ac_cv_have_type_time_t=no ])
    ])
AC_MSG_RESULT($ac_cv_have_type_time_t)
if test "$ac_cv_have_type_time_t" = yes; then
AC_DEFINE(HAVE_TYPE_TIME_T)
fi
])
