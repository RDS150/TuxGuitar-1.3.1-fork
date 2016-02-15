/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_herac_tuxguitar_jack_JackClient */

#ifndef _Included_org_herac_tuxguitar_jack_JackClient
#define _Included_org_herac_tuxguitar_jack_JackClient
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    malloc
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_herac_tuxguitar_jack_JackClient_malloc
  (JNIEnv *, jobject);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    free
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_free
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    open
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_open
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_close
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    openPort
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_herac_tuxguitar_jack_JackClient_openPort
  (JNIEnv *, jobject, jlong, jstring);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    closePort
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_closePort
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    getTransportUID
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_herac_tuxguitar_jack_JackClient_getTransportUID
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    getTransportFrame
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_herac_tuxguitar_jack_JackClient_getTransportFrame
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    getTransportFrameRate
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_herac_tuxguitar_jack_JackClient_getTransportFrameRate
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    setTransportFrame
 * Signature: (JJ)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_setTransportFrame
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    setTransportStart
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_setTransportStart
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    setTransportStop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_setTransportStop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    addEventToQueue
 * Signature: (JJ[B)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_addEventToQueue
  (JNIEnv *, jobject, jlong, jlong, jbyteArray);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    isOpen
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_herac_tuxguitar_jack_JackClient_isOpen
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    isPortOpen
 * Signature: (JJ)Z
 */
JNIEXPORT jboolean JNICALL Java_org_herac_tuxguitar_jack_JackClient_isPortOpen
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    isTransportRunning
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_herac_tuxguitar_jack_JackClient_isTransportRunning
  (JNIEnv *, jobject, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    connectPorts
 * Signature: (JLjava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_org_herac_tuxguitar_jack_JackClient_connectPorts
  (JNIEnv *, jobject, jlong, jstring, jstring);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    getPortNames
 * Signature: (JLjava/lang/String;J)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_herac_tuxguitar_jack_JackClient_getPortNames
  (JNIEnv *, jobject, jlong, jstring, jlong);

/*
 * Class:     org_herac_tuxguitar_jack_JackClient
 * Method:    getPortConnections
 * Signature: (JLjava/lang/String;)Ljava/util/List;
 */
JNIEXPORT jobject JNICALL Java_org_herac_tuxguitar_jack_JackClient_getPortConnections
  (JNIEnv *, jobject, jlong, jstring);

#ifdef __cplusplus
}
#endif
#endif
