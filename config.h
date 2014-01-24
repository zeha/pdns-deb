/* config.h.  Generated from config.h.in by configure.  */
/* config.h.in.  Generated from configure.ac by autoheader.  */

/* Define if building universal (internal helper macro) */
/* #undef AC_APPLE_UNIVERSAL_BUILD */

/* Skip gcc locking */
/* #undef GCC_SKIP_LOCKING */

/* Defined if the requested minimum BOOST version is satisfied */
#define HAVE_BOOST 1

/* Define to 1 if you have <boost/archive/text_oarchive.hpp> */
#define HAVE_BOOST_ARCHIVE_TEXT_OARCHIVE_HPP 1

/* Define to 1 if you have <boost/foreach.hpp> */
#define HAVE_BOOST_FOREACH_HPP 1

/* Define to 1 if you have <boost/program_options.hpp> */
#define HAVE_BOOST_PROGRAM_OPTIONS_HPP 1

/* Define to 1 if you have <boost/test/unit_test.hpp> */
#define HAVE_BOOST_TEST_UNIT_TEST_HPP 1

/* If we have botan 1.10 */
/* #undef HAVE_BOTAN110 */

/* If we have botan 1.8 */
/* #undef HAVE_BOTAN18 */

/* Define to 1 if you have the <dlfcn.h> header file. */
#define HAVE_DLFCN_H 1

/* Define to 1 if you have the <fcntl.h> header file. */
#define HAVE_FCNTL_H 1

/* Define to 1 if you have the `gethostname' function. */
#define HAVE_GETHOSTNAME 1

/* Define to 1 if you have the <getopt.h> header file. */
#define HAVE_GETOPT_H 1

/* Define to 1 if you have the `gettimeofday' function. */
#define HAVE_GETTIMEOFDAY 1

/* Define to 1 if you have the <inttypes.h> header file. */
#define HAVE_INTTYPES_H 1

/* If the host operating system understands IPv6 */
#define HAVE_IPV6 1

/* Define to 1 if you have the <lber.h> header file. */
#define HAVE_LBER_H 1

/* Define to 1 if you have the <ldap.h> header file. */
#define HAVE_LDAP_H 1

/* Define to 1 if you have ldap_initialize */
#define HAVE_LDAP_INITIALIZE 1

/* Define to 1 if you have ldap_sasl_bind */
#define HAVE_LDAP_SASL_BIND 1

/* Define to 1 if you have the `crypt' library (-lcrypt). */
#define HAVE_LIBCRYPT 1

/* If we have libcurl */
#define HAVE_LIBCURL 1

/* Define to 1 if you have the `dl' library (-ldl). */
#define HAVE_LIBDL 1

/* Have -lldap */
/* #undef HAVE_LIBLDAP */

/* Have -lldap_r */
#define HAVE_LIBLDAP_R 1

/* Have -lopendbx */
#define HAVE_LIBOPENDBX 1

/* Define to 1 if you have the <limits.h> header file. */
#define HAVE_LIMITS_H 1

/* liblua */
#define HAVE_LUA 1

/* lua.h */
#define HAVE_LUA_H 1

/* Define to 1 if you have the <memory.h> header file. */
#define HAVE_MEMORY_H 1

/* Define to 1 if you have the `mkdir' function. */
#define HAVE_MKDIR 1

/* Define to 1 if you have the `mktime' function. */
#define HAVE_MKTIME 1

/* Define to 1 if you have the <odbx.h> header file. */
#define HAVE_ODBX_H 1

/* Define to 1 if you have the `select' function. */
#define HAVE_SELECT 1

/* Define to 1 if you have the `socket' function. */
#define HAVE_SOCKET 1

/* If we have sqlite3 */
#define HAVE_SQLITE3 1

/* Define to 1 if you have the <stdint.h> header file. */
#define HAVE_STDINT_H 1

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the `strcasestr' function. */
#define HAVE_STRCASESTR 1

/* Define to 1 if you have the `strerror' function. */
#define HAVE_STRERROR 1

/* Define to 1 if you have the <strings.h> header file. */
#define HAVE_STRINGS_H 1

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <syslog.h> header file. */
#define HAVE_SYSLOG_H 1

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/time.h> header file. */
#define HAVE_SYS_TIME_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <unistd.h> header file. */
#define HAVE_UNISTD_H 1

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#define LT_OBJDIR ".libs/"

/* If your OS is so broken that it needs an additional prototype */
/* #undef NEED_INET_NTOP_PROTO */

/* If POSIX typedefs need to be defined */
/* #undef NEED_POSIX_TYPEDEF */

/* If host OS misses RTLD_NOW */
/* #undef NEED_RTLD_NOW */

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
/* #undef NO_MINUS_C_MINUS_O */

/* Name of package */
#define PACKAGE "pdns"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT ""

/* Define to the full name of this package. */
#define PACKAGE_NAME "pdns"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "pdns 3.3.1"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "pdns"

/* Define to the home page for this package. */
#define PACKAGE_URL ""

/* Define to the version of this package. */
#define PACKAGE_VERSION "3.3.1"

/* If we want HTTP connector */
#define REMOTEBACKEND_HTTP 1

/* Define as the return type of signal handlers (`int' or `void'). */
#define RETSIGTYPE void

/* Define to 1 if you have the ANSI C header files. */
#define STDC_HEADERS 1

/* Define to 1 if you can safely include both <sys/time.h> and <time.h>. */
#define TIME_WITH_SYS_TIME 1

/* Define to 1 if your <sys/time.h> declares `struct tm'. */
/* #undef TM_IN_SYS_TIME */

/* If verbose logging should be enabled */
/* #undef VERBOSELOG */

/* Version number of package */
#define VERSION "3.3.1"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
/* #  undef WORDS_BIGENDIAN */
# endif
#endif

/* Define to 1 if `lex' declares `yytext' as a `char *' by default, not a
   `char[]'. */
#define YYTEXT_POINTER 1

/* Define to `unsigned int' if <sys/types.h> does not define. */
/* #undef size_t */
