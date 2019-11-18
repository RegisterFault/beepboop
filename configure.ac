AC_INIT([bepboop], [1.0])
AM_INIT_AUTOMAKE([foreign])
LT_PREREQ([2.2])
LT_INIT()
LT_OUTPUT()
AC_PROG_CC
AC_CHECK_HEADER([ncurses.h],
                AC_CHECK_LIB([ncurses],[initscr],,AC_MSG_ERROR([no  ncurses])),
                AC_MSG_ERROR([no ncurses]))
AC_CONFIG_HEADERS([config.h])
AC_CONFIG_FILES([Makefile])
AC_OUTPUT
