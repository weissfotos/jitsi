/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_sip_communicator_impl_galagonotification_GalagoNotification */

#ifndef _Included_net_java_sip_communicator_impl_galagonotification_GalagoNotification
#define _Included_net_java_sip_communicator_impl_galagonotification_GalagoNotification
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     net_java_sip_communicator_impl_galagonotification_GalagoNotification
 * Method:    dbus_bus_get_session
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_galagonotification_GalagoNotification_dbus_1bus_1get_1session
  (JNIEnv *, jclass);

/*
 * Class:     net_java_sip_communicator_impl_galagonotification_GalagoNotification
 * Method:    dbus_connection_unref
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_net_java_sip_communicator_impl_galagonotification_GalagoNotification_dbus_1connection_1unref
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_galagonotification_GalagoNotification
 * Method:    getCapabilities
 * Signature: (J)[Ljava/lang/String;
 */
JNIEXPORT jobjectArray JNICALL Java_net_java_sip_communicator_impl_galagonotification_GalagoNotification_getCapabilities
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_sip_communicator_impl_galagonotification_GalagoNotification
 * Method:    notify
 * Signature: (JLjava/lang/String;JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_net_java_sip_communicator_impl_galagonotification_GalagoNotification_notify
  (JNIEnv *, jclass, jlong, jstring, jlong, jstring, jstring, jstring);

#ifdef __cplusplus
}
#endif
#endif
