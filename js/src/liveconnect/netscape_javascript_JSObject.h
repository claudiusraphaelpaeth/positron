/* -*- Mode: C; tab-width: 8 -*-
 * Copyright (C) 1998 Netscape Communications Corporation, All Rights Reserved.
 */
#include <jni.h>
/* Header for class netscape_javascript_JSObject */

#ifndef _Included_netscape_javascript_JSObject
#define _Included_netscape_javascript_JSObject
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     netscape_javascript_JSObject
 * Method:    initClass
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_netscape_javascript_JSObject_initClass
  (JNIEnv *, jclass);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    getMember
 * Signature: (Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_netscape_javascript_JSObject_getMember
  (JNIEnv *, jobject, jstring);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    getSlot
 * Signature: (I)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_netscape_javascript_JSObject_getSlot
  (JNIEnv *, jobject, jint);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    setMember
 * Signature: (Ljava/lang/String;Ljava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_netscape_javascript_JSObject_setMember
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    setSlot
 * Signature: (ILjava/lang/Object;)V
 */
JNIEXPORT void JNICALL Java_netscape_javascript_JSObject_setSlot
  (JNIEnv *, jobject, jint, jobject);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    removeMember
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_netscape_javascript_JSObject_removeMember
  (JNIEnv *, jobject, jstring);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    call
 * Signature: (Ljava/lang/String;[Ljava/lang/Object;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_netscape_javascript_JSObject_call
  (JNIEnv *, jobject, jstring, jobjectArray);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    eval
 * Signature: (Ljava/lang/String;)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_netscape_javascript_JSObject_eval
  (JNIEnv *, jobject, jstring);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    toString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_netscape_javascript_JSObject_toString
  (JNIEnv *, jobject);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    getWindow
 * Signature: (Ljava/applet/Applet;)Lnetscape/javascript/JSObject;
 */
JNIEXPORT jobject JNICALL Java_netscape_javascript_JSObject_getWindow
  (JNIEnv *, jclass, jobject);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_netscape_javascript_JSObject_finalize
  (JNIEnv *, jobject);

/*
 * Class:     netscape_javascript_JSObject
 * Method:    equals
 * Signature: (Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_netscape_javascript_JSObject_equals
  (JNIEnv *, jobject, jobject);

#ifdef __cplusplus
}
#endif
#endif
