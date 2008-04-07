/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class de_fraunhofer_fokus_ants_jipfix_jIPFIX */

#ifndef _Included_de_fraunhofer_fokus_ants_jipfix_jIPFIX
#define _Included_de_fraunhofer_fokus_ants_jipfix_jIPFIX
#ifdef __cplusplus
extern "C" {
#endif
#undef de_fraunhofer_fokus_ants_jipfix_jIPFIX_AF_INET
#define de_fraunhofer_fokus_ants_jipfix_jIPFIX_AF_INET 2L
#undef de_fraunhofer_fokus_ants_jipfix_jIPFIX_IPFIX_PROTO_TCP
#define de_fraunhofer_fokus_ants_jipfix_jIPFIX_IPFIX_PROTO_TCP 6L
#undef de_fraunhofer_fokus_ants_jipfix_jIPFIX_IPFIX_PROTO_SCTP
#define de_fraunhofer_fokus_ants_jipfix_jIPFIX_IPFIX_PROTO_SCTP 132L
#undef de_fraunhofer_fokus_ants_jipfix_jIPFIX_IPFIX_PROTO_UDP
#define de_fraunhofer_fokus_ants_jipfix_jIPFIX_IPFIX_PROTO_UDP 17L
/* Inaccessible static: xstream */
/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixInit
 * Signature: ()B
 */
JNIEXPORT jbyte JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixInit
  (JNIEnv *, jobject);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixAddVendorInformationElements
 * Signature: ([Lde/fraunhofer/fokus/ants/jipfix/data/IPFIXFieldType;)B
 */
JNIEXPORT jbyte JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixAddVendorInformationElements
  (JNIEnv *, jobject, jobjectArray);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixCleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixCleanup
  (JNIEnv *, jobject);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixCollectorInitCallbackExport
 * Signature: (Lde/fraunhofer/fokus/ants/jipfix/IPFIXRawCollectorListener;)B
 */
JNIEXPORT jbyte JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixCollectorInitCallbackExport
  (JNIEnv *, jobject, jobject);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixCollectorInitFileExport
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixCollectorInitFileExport
  (JNIEnv *, jobject, jstring);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixCollectorListen
 * Signature: (IIII)B
 */
JNIEXPORT jbyte JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixCollectorListen
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    ipfixCollectorCleanup
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_ipfixCollectorCleanup
  (JNIEnv *, jobject);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    mlogSetVerbosityLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_mlogSetVerbosityLevel
  (JNIEnv *, jobject, jint);

/*
 * Class:     de_fraunhofer_fokus_ants_jipfix_jIPFIX
 * Method:    mpollLoop
 * Signature: (ILde/fraunhofer/fokus/ants/jipfix/MPollLoopExitListener;)V
 */
JNIEXPORT void JNICALL Java_de_fraunhofer_fokus_ants_jipfix_jIPFIX_mpollLoop
  (JNIEnv *, jobject, jint, jobject);

#ifdef __cplusplus
}
#endif
#endif