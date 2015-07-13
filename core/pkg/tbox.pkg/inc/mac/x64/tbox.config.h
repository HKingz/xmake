#ifndef TB_CONFIG_H
#define TB_CONFIG_H

// version
#define TB_CONFIG_VERSION "1.5.0"
#define TB_CONFIG_VERSION_MAJOR 1
#define TB_CONFIG_VERSION_MINOR 5
#define TB_CONFIG_VERSION_ALTER 0
#define TB_CONFIG_VERSION_BUILD 201507131129

// defines
#define TB_CONFIG_OS_MACOSX
#define TB_CONFIG_TYPE_HAVE_FLOAT
#define TB_CONFIG_MODULE_HAVE_XML
#define TB_CONFIG_MODULE_HAVE_ZIP
#define TB_CONFIG_MODULE_HAVE_ASIO
#define TB_CONFIG_MODULE_HAVE_OBJECT
#define TB_CONFIG_MODULE_HAVE_CHARSET
#define TB_CONFIG_MODULE_HAVE_DATABASE
#define TB_CONFIG_LIBC_HAVE_MEMCPY
#define TB_CONFIG_LIBC_HAVE_MEMSET
#define TB_CONFIG_LIBC_HAVE_MEMMOVE
#define TB_CONFIG_LIBC_HAVE_MEMCMP
#define TB_CONFIG_LIBC_HAVE_STRCAT
#define TB_CONFIG_LIBC_HAVE_STRNCAT
#define TB_CONFIG_LIBC_HAVE_STRCPY
#define TB_CONFIG_LIBC_HAVE_STRNCPY
#define TB_CONFIG_LIBC_HAVE_STRLCPY
#define TB_CONFIG_LIBC_HAVE_STRLEN
#define TB_CONFIG_LIBC_HAVE_STRNLEN
#define TB_CONFIG_LIBC_HAVE_STRSTR
#define TB_CONFIG_LIBC_HAVE_STRCASESTR
#define TB_CONFIG_LIBC_HAVE_STRCMP
#define TB_CONFIG_LIBC_HAVE_STRCASECMP
#define TB_CONFIG_LIBC_HAVE_STRNCMP
#define TB_CONFIG_LIBC_HAVE_STRNCASECMP
#define TB_CONFIG_LIBC_HAVE_WCSCAT
#define TB_CONFIG_LIBC_HAVE_WCSNCAT
#define TB_CONFIG_LIBC_HAVE_WCSCPY
#define TB_CONFIG_LIBC_HAVE_WCSNCPY
#define TB_CONFIG_LIBC_HAVE_WCSLCPY
#define TB_CONFIG_LIBC_HAVE_WCSLEN
#define TB_CONFIG_LIBC_HAVE_WCSNLEN
#define TB_CONFIG_LIBC_HAVE_WCSSTR
#define TB_CONFIG_LIBC_HAVE_WCSCMP
#define TB_CONFIG_LIBC_HAVE_WCSCASECMP
#define TB_CONFIG_LIBC_HAVE_WCSNCMP
#define TB_CONFIG_LIBC_HAVE_WCSNCASECMP
#define TB_CONFIG_LIBC_HAVE_WCSTOMBS
#define TB_CONFIG_LIBC_HAVE_MBSTOWCS
#define TB_CONFIG_LIBC_HAVE_GMTIME
#define TB_CONFIG_LIBC_HAVE_MKTIME
#define TB_CONFIG_LIBC_HAVE_LOCALTIME
#define TB_CONFIG_LIBC_HAVE_GETTIMEOFDAY
#define TB_CONFIG_LIBC_HAVE_SIGNAL
#define TB_CONFIG_LIBC_HAVE_SETJMP
#define TB_CONFIG_LIBC_HAVE_SIGSETJMP
#define TB_CONFIG_LIBC_HAVE_BACKTRACE
#define TB_CONFIG_LIBC_HAVE_SYSTEM
#define TB_CONFIG_LIBM_HAVE_LOG2
#define TB_CONFIG_LIBM_HAVE_LOG2F
#define TB_CONFIG_POSIX_HAVE_POLL
#define TB_CONFIG_POSIX_HAVE_PTHREAD_MUTEX_INIT
#define TB_CONFIG_POSIX_HAVE_PTHREAD_CREATE
#define TB_CONFIG_POSIX_HAVE_SOCKET
#define TB_CONFIG_POSIX_HAVE_OPENDIR
#define TB_CONFIG_POSIX_HAVE_DLOPEN
#define TB_CONFIG_POSIX_HAVE_OPEN
#define TB_CONFIG_POSIX_HAVE_GETHOSTNAME
#define TB_CONFIG_POSIX_HAVE_GETIFADDRS
#define TB_CONFIG_POSIX_HAVE_SEM_INIT
#define TB_CONFIG_POSIX_HAVE_GETPAGESIZE
#define TB_CONFIG_POSIX_HAVE_SYSCONF
#define TB_CONFIG_POSIX_HAVE_SCHED_YIELD
#define TB_CONFIG_SYSTEMV_HAVE_SEMGET

// undefines
#undef TB_CONFIG_TRACE_INFO_ONLY
#undef TB_CONFIG_EXCEPTION_ENABLE
#undef TB_CONFIG_MEMORY_UNALIGNED_ACCESS_ENABLE

#endif
