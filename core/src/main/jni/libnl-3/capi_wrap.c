/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 3.0.8
 *
 * This file is not intended to be easily readable and contains a number of
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG
 * interface file instead.
 * ----------------------------------------------------------------------------- */


#ifndef SWIGJAVA
#define SWIGJAVA
#endif


/* -----------------------------------------------------------------------------
 *  This section contains generic SWIG labels for method/variable
 *  declarations/attributes, and other compiler dependent labels.
 * ----------------------------------------------------------------------------- */

/* template workaround for compilers that cannot correctly implement the C++ standard */
#ifndef SWIGTEMPLATEDISAMBIGUATOR
# if defined(__SUNPRO_CC) && (__SUNPRO_CC <= 0x560)
#  define SWIGTEMPLATEDISAMBIGUATOR template
# elif defined(__HP_aCC)
/* Needed even with `aCC -AA' when `aCC -V' reports HP ANSI C++ B3910B A.03.55 */
/* If we find a maximum version that requires this, the test would be __HP_aCC <= 35500 for A.03.55 */
#  define SWIGTEMPLATEDISAMBIGUATOR template
# else
#  define SWIGTEMPLATEDISAMBIGUATOR
# endif
#endif

/* inline attribute */
#ifndef SWIGINLINE
# if defined(__cplusplus) || (defined(__GNUC__) && !defined(__STRICT_ANSI__))
#   define SWIGINLINE inline
# else
#   define SWIGINLINE
# endif
#endif

/* attribute recognised by some compilers to avoid 'unused' warnings */
#ifndef SWIGUNUSED
# if defined(__GNUC__)
#   if !(defined(__cplusplus)) || (__GNUC__ > 3 || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4))
#     define SWIGUNUSED __attribute__ ((__unused__))
#   else
#     define SWIGUNUSED
#   endif
# elif defined(__ICC)
#   define SWIGUNUSED __attribute__ ((__unused__))
# else
#   define SWIGUNUSED
# endif
#endif

#ifndef SWIG_MSC_UNSUPPRESS_4505
# if defined(_MSC_VER)
#   pragma warning(disable : 4505) /* unreferenced local function has been removed */
# endif
#endif

#ifndef SWIGUNUSEDPARM
# ifdef __cplusplus
#   define SWIGUNUSEDPARM(p)
# else
#   define SWIGUNUSEDPARM(p) p SWIGUNUSED
# endif
#endif

/* internal SWIG method */
#ifndef SWIGINTERN
# define SWIGINTERN static SWIGUNUSED
#endif

/* internal inline SWIG method */
#ifndef SWIGINTERNINLINE
# define SWIGINTERNINLINE SWIGINTERN SWIGINLINE
#endif

/* exporting methods */
#if (__GNUC__ >= 4) || (__GNUC__ == 3 && __GNUC_MINOR__ >= 4)
#  ifndef GCC_HASCLASSVISIBILITY
#    define GCC_HASCLASSVISIBILITY
#  endif
#endif

#ifndef SWIGEXPORT
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   if defined(STATIC_LINKED)
#     define SWIGEXPORT
#   else
#     define SWIGEXPORT __declspec(dllexport)
#   endif
# else
#   if defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
#     define SWIGEXPORT __attribute__ ((visibility("default")))
#   else
#     define SWIGEXPORT
#   endif
# endif
#endif

/* calling conventions for Windows */
#ifndef SWIGSTDCALL
# if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
#   define SWIGSTDCALL __stdcall
# else
#   define SWIGSTDCALL
# endif
#endif

/* Deal with Microsoft's attempt at deprecating C standard runtime functions */
#if !defined(SWIG_NO_CRT_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_CRT_SECURE_NO_DEPRECATE)
# define _CRT_SECURE_NO_DEPRECATE
#endif

/* Deal with Microsoft's attempt at deprecating methods in the standard C++ library */
#if !defined(SWIG_NO_SCL_SECURE_NO_DEPRECATE) && defined(_MSC_VER) && !defined(_SCL_SECURE_NO_DEPRECATE)
# define _SCL_SECURE_NO_DEPRECATE
#endif

/* Deal with Apple's deprecated 'AssertMacros.h' from Carbon-framework */
#if defined(__APPLE__) && !defined(__ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES)
# define __ASSERT_MACROS_DEFINE_VERSIONS_WITHOUT_UNDERSCORES 0
#endif

/* Intel's compiler complains if a variable which was never initialised is
 * cast to void, which is a common idiom which we use to indicate that we
 * are aware a variable isn't used.  So we just silence that warning.
 * See: https://github.com/swig/swig/issues/192 for more discussion.
 */
#ifdef __INTEL_COMPILER
# pragma warning disable 592
#endif


/* Fix for jlong on some versions of gcc on Windows */
#if defined(__GNUC__) && !defined(__INTEL_COMPILER)
  typedef long long __int64;
#endif

/* Fix for jlong on 64-bit x86 Solaris */
#if defined(__x86_64)
# ifdef _LP64
#   undef _LP64
# endif
#endif

#include <jni.h>
#include <stdlib.h>
#include <string.h>


/* Support for throwing Java exceptions */
typedef enum {
  SWIG_JavaOutOfMemoryError = 1, 
  SWIG_JavaIOException, 
  SWIG_JavaRuntimeException, 
  SWIG_JavaIndexOutOfBoundsException,
  SWIG_JavaArithmeticException,
  SWIG_JavaIllegalArgumentException,
  SWIG_JavaNullPointerException,
  SWIG_JavaDirectorPureVirtual,
  SWIG_JavaUnknownError
} SWIG_JavaExceptionCodes;

typedef struct {
  SWIG_JavaExceptionCodes code;
  const char *java_exception;
} SWIG_JavaExceptions_t;


static void SWIGUNUSED SWIG_JavaThrowException(JNIEnv *jenv, SWIG_JavaExceptionCodes code, const char *msg) {
  jclass excep;
  static const SWIG_JavaExceptions_t java_exceptions[] = {
    { SWIG_JavaOutOfMemoryError, "java/lang/OutOfMemoryError" },
    { SWIG_JavaIOException, "java/io/IOException" },
    { SWIG_JavaRuntimeException, "java/lang/RuntimeException" },
    { SWIG_JavaIndexOutOfBoundsException, "java/lang/IndexOutOfBoundsException" },
    { SWIG_JavaArithmeticException, "java/lang/ArithmeticException" },
    { SWIG_JavaIllegalArgumentException, "java/lang/IllegalArgumentException" },
    { SWIG_JavaNullPointerException, "java/lang/NullPointerException" },
    { SWIG_JavaDirectorPureVirtual, "java/lang/RuntimeException" },
    { SWIG_JavaUnknownError,  "java/lang/UnknownError" },
    { (SWIG_JavaExceptionCodes)0,  "java/lang/UnknownError" }
  };
  const SWIG_JavaExceptions_t *except_ptr = java_exceptions;

  while (except_ptr->code != code && except_ptr->code)
    except_ptr++;

  (*jenv)->ExceptionClear(jenv);
  excep = (*jenv)->FindClass(jenv, except_ptr->java_exception);
  if (excep)
    (*jenv)->ThrowNew(jenv, excep, msg);
}


/* Contract support */

#define SWIG_contract_assert(nullreturn, expr, msg) if (!(expr)) {SWIG_JavaThrowException(jenv, SWIG_JavaIllegalArgumentException, msg); return nullreturn; } else


#include <net/if.h>
#include <netlink/netlink.h>
#include <netlink/socket.h>
#include <netlink/errno.h>

#include <netlink/route/tc.h>
#include <netlink/route/qdisc.h>
#include <netlink/route/class.h>
#include <netlink/route/classifier.h>
#include <netlink/route/cls/u32.h>
#include <netlink/route/qdisc/htb.h>


#include <stdint.h>		// Use the C99 official header


        uint32_t tc_str2handle(const char *name)
        {
                uint32_t result;

                if (rtnl_tc_str2handle(name, &result) < 0)
                        return 0;

                return result;
        }


        struct rtnl_tc *qdisc2tc(struct rtnl_qdisc *qdisc)
        {
                return TC_CAST(qdisc);
        }

        struct rtnl_tc *class2tc(struct rtnl_class *cl)
        {
                return TC_CAST(cl);
        }

        struct rtnl_tc *cls2tc(struct rtnl_cls *cls)
        {
                return TC_CAST(cls);
        }


#ifdef __cplusplus
extern "C" {
#endif

SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_if_1nametoindex(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  unsigned int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (unsigned int)if_nametoindex((char const *)arg1);
  jresult = (jlong)result; 
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_netlink_swig_capiJNI_nl_1geterror(JNIEnv *jenv, jclass jcls, jint jarg1) {
  jstring jresult = 0 ;
  int arg1 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = (int)jarg1; 
  result = (char *)nl_geterror(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_nl_1connect(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)nl_connect(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_nl_1close(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  nl_close(arg1);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_nl_1socket_1alloc(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct nl_sock *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct nl_sock *)nl_socket_alloc();
  *(struct nl_sock **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_nl_1socket_1free(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  nl_socket_free(arg1);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_tc_1str2handle(JNIEnv *jenv, jclass jcls, jstring jarg1) {
  jlong jresult = 0 ;
  char *arg1 = (char *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = 0;
  if (jarg1) {
    arg1 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg1, 0);
    if (!arg1) return 0;
  }
  result = (uint32_t)tc_str2handle((char const *)arg1);
  jresult = (jlong)result; 
  if (arg1) (*jenv)->ReleaseStringUTFChars(jenv, jarg1, (const char *)arg1);
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1ifindex(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  int arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (int)jarg2; 
  rtnl_tc_set_ifindex(arg1,arg2);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1ifindex(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (int)rtnl_tc_get_ifindex(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1mtu(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  rtnl_tc_set_mtu(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1mtu(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (uint32_t)rtnl_tc_get_mtu(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1mpu(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  rtnl_tc_set_mpu(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1mpu(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (uint32_t)rtnl_tc_get_mpu(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1overhead(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  rtnl_tc_set_overhead(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1overhead(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (uint32_t)rtnl_tc_get_overhead(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1linktype(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  rtnl_tc_set_linktype(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1linktype(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (uint32_t)rtnl_tc_get_linktype(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1handle(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  rtnl_tc_set_handle(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1handle(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (uint32_t)rtnl_tc_get_handle(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1parent(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  rtnl_tc_set_parent(arg1,arg2);
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1parent(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (uint32_t)rtnl_tc_get_parent(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1set_1kind(JNIEnv *jenv, jclass jcls, jlong jarg1, jstring jarg2) {
  jint jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  char *arg2 = (char *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  arg2 = 0;
  if (jarg2) {
    arg2 = (char *)(*jenv)->GetStringUTFChars(jenv, jarg2, 0);
    if (!arg2) return 0;
  }
  result = (int)rtnl_tc_set_kind(arg1,(char const *)arg2);
  jresult = (jint)result; 
  if (arg2) (*jenv)->ReleaseStringUTFChars(jenv, jarg2, (const char *)arg2);
  return jresult;
}


SWIGEXPORT jstring JNICALL Java_netlink_swig_capiJNI_rtnl_1tc_1get_1kind(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jstring jresult = 0 ;
  struct rtnl_tc *arg1 = (struct rtnl_tc *) 0 ;
  char *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_tc **)&jarg1; 
  result = (char *)rtnl_tc_get_kind(arg1);
  if (result) jresult = (*jenv)->NewStringUTF(jenv, (const char *)result);
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_qdisc2tc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_qdisc *arg1 = (struct rtnl_qdisc *) 0 ;
  struct rtnl_tc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_qdisc **)&jarg1; 
  result = (struct rtnl_tc *)qdisc2tc(arg1);
  *(struct rtnl_tc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_class2tc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  struct rtnl_tc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (struct rtnl_tc *)class2tc(arg1);
  *(struct rtnl_tc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_cls2tc(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  struct rtnl_tc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  result = (struct rtnl_tc *)cls2tc(arg1);
  *(struct rtnl_tc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1qdisc_1alloc(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct rtnl_qdisc *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct rtnl_qdisc *)rtnl_qdisc_alloc();
  *(struct rtnl_qdisc **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1qdisc_1put(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct rtnl_qdisc *arg1 = (struct rtnl_qdisc *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_qdisc **)&jarg1; 
  rtnl_qdisc_put(arg1);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1qdisc_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jint jarg3) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_qdisc *arg2 = (struct rtnl_qdisc *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_qdisc **)&jarg2; 
  arg3 = (int)jarg3; 
  result = (int)rtnl_qdisc_add(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1qdisc_1update(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3, jint jarg4) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_qdisc *arg2 = (struct rtnl_qdisc *) 0 ;
  struct rtnl_qdisc *arg3 = (struct rtnl_qdisc *) 0 ;
  int arg4 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_qdisc **)&jarg2; 
  arg3 = *(struct rtnl_qdisc **)&jarg3; 
  arg4 = (int)jarg4; 
  result = (int)rtnl_qdisc_update(arg1,arg2,arg3,arg4);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1qdisc_1delete(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_qdisc *arg2 = (struct rtnl_qdisc *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_qdisc **)&jarg2; 
  result = (int)rtnl_qdisc_delete(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1class_1alloc(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct rtnl_class *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct rtnl_class *)rtnl_class_alloc();
  *(struct rtnl_class **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1class_1put(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  rtnl_class_put(arg1);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1class_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jint jarg3) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_class *arg2 = (struct rtnl_class *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_class **)&jarg2; 
  arg3 = (int)jarg3; 
  result = (int)rtnl_class_add(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1class_1delete(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_class *arg2 = (struct rtnl_class *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_class **)&jarg2; 
  result = (int)rtnl_class_delete(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1alloc(JNIEnv *jenv, jclass jcls) {
  jlong jresult = 0 ;
  struct rtnl_cls *result = 0 ;
  
  (void)jenv;
  (void)jcls;
  result = (struct rtnl_cls *)rtnl_cls_alloc();
  *(struct rtnl_cls **)&jresult = result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1put(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  rtnl_cls_put(arg1);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1add(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jint jarg3) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_cls *arg2 = (struct rtnl_cls *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_cls **)&jarg2; 
  arg3 = (int)jarg3; 
  result = (int)rtnl_cls_add(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1delete(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jint jarg3) {
  jint jresult = 0 ;
  struct nl_sock *arg1 = (struct nl_sock *) 0 ;
  struct rtnl_cls *arg2 = (struct rtnl_cls *) 0 ;
  int arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct nl_sock **)&jarg1; 
  arg2 = *(struct rtnl_cls **)&jarg2; 
  arg3 = (int)jarg3; 
  result = (int)rtnl_cls_delete(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1set_1prio(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint16_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint16_t)jarg2; 
  rtnl_cls_set_prio(arg1,arg2);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1get_1prio(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint16_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  result = (uint16_t)rtnl_cls_get_prio(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1set_1protocol(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint16_t arg2 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint16_t)jarg2; 
  rtnl_cls_set_protocol(arg1,arg2);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1cls_1get_1protocol(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint16_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  result = (uint16_t)rtnl_cls_get_protocol(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT void JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1handle(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jint jarg3, jint jarg4) {
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  int arg2 ;
  int arg3 ;
  int arg4 ;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (int)jarg2; 
  arg3 = (int)jarg3; 
  arg4 = (int)jarg4; 
  rtnl_u32_set_handle(arg1,arg2,arg3,arg4);
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1classid(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_u32_set_classid(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1divisor(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_u32_set_divisor(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1link(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_u32_set_link(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1hashtable(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_u32_set_hashtable(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1hashmask(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint32_t arg2 ;
  uint32_t arg3 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  arg3 = (uint32_t)jarg3; 
  result = (int)rtnl_u32_set_hashmask(arg1,arg2,arg3);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1cls_1terminal(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  result = (int)rtnl_u32_set_cls_terminal(arg1);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1set_1flags(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  int arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (int)jarg2; 
  result = (int)rtnl_u32_set_flags(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1add_1key_1uint8(JNIEnv *jenv, jclass jcls, jlong jarg1, jshort jarg2, jshort jarg3, jint jarg4, jint jarg5) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint8_t arg2 ;
  uint8_t arg3 ;
  int arg4 ;
  int arg5 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint8_t)jarg2; 
  arg3 = (uint8_t)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  result = (int)rtnl_u32_add_key_uint8(arg1,arg2,arg3,arg4,arg5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1add_1key_1uint16(JNIEnv *jenv, jclass jcls, jlong jarg1, jint jarg2, jint jarg3, jint jarg4, jint jarg5) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint16_t arg2 ;
  uint16_t arg3 ;
  int arg4 ;
  int arg5 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint16_t)jarg2; 
  arg3 = (uint16_t)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  result = (int)rtnl_u32_add_key_uint16(arg1,arg2,arg3,arg4,arg5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1u32_1add_1key_1uint32(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2, jlong jarg3, jint jarg4, jint jarg5) {
  jint jresult = 0 ;
  struct rtnl_cls *arg1 = (struct rtnl_cls *) 0 ;
  uint32_t arg2 ;
  uint32_t arg3 ;
  int arg4 ;
  int arg5 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_cls **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  arg3 = (uint32_t)jarg3; 
  arg4 = (int)jarg4; 
  arg5 = (int)jarg5; 
  result = (int)rtnl_u32_add_key_uint32(arg1,arg2,arg3,arg4,arg5);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1rate2quantum(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_qdisc *arg1 = (struct rtnl_qdisc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_qdisc **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_rate2quantum(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1rate2quantum(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_qdisc *arg1 = (struct rtnl_qdisc *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_qdisc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_rate2quantum(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1defcls(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_qdisc *arg1 = (struct rtnl_qdisc *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_qdisc **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_defcls(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1defcls(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_qdisc *arg1 = (struct rtnl_qdisc *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_qdisc **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_defcls(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1prio(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_prio(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1prio(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_prio(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1rate(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_rate(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1rate(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_rate(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1ceil(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_ceil(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1ceil(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_ceil(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1rbuffer(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_rbuffer(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1rbuffer(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_rbuffer(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1cbuffer(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_cbuffer(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1cbuffer(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_cbuffer(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jlong JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1quantum(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jlong jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (uint32_t)rtnl_htb_get_quantum(arg1);
  jresult = (jlong)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1set_1quantum(JNIEnv *jenv, jclass jcls, jlong jarg1, jlong jarg2) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  uint32_t arg2 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  arg2 = (uint32_t)jarg2; 
  result = (int)rtnl_htb_set_quantum(arg1,arg2);
  jresult = (jint)result; 
  return jresult;
}


SWIGEXPORT jint JNICALL Java_netlink_swig_capiJNI_rtnl_1htb_1get_1level(JNIEnv *jenv, jclass jcls, jlong jarg1) {
  jint jresult = 0 ;
  struct rtnl_class *arg1 = (struct rtnl_class *) 0 ;
  int result;
  
  (void)jenv;
  (void)jcls;
  arg1 = *(struct rtnl_class **)&jarg1; 
  result = (int)rtnl_htb_get_level(arg1);
  jresult = (jint)result; 
  return jresult;
}


#ifdef __cplusplus
}
#endif

