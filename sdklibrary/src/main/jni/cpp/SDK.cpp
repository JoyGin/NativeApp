/* DO NOT EDIT THIS FILE - it is machine generated */
#include "com_example_sdklibrary_SDK.h"
/*
 * Class:     com_example_sdklibrary_SDK
 * Method:    getString
 * Signature: ()Ljava/lang/String;
 */
extern "C" JNIEXPORT jstring JNICALL Java_com_example_sdklibrary_SDK_getString
    (JNIEnv *env, jclass cls) {
    char *str = "String from native cpp";

    return (*env).NewStringUTF(str);
}

/*
 * Class:     com_example_sdklibrary_SDK
 * Method:    getAdd
 * Signature: (II)I
 */
extern "C" JNIEXPORT jint JNICALL Java_com_example_sdklibrary_SDK_getAdd
    (JNIEnv *env, jclass cls, jint numOne, jint numTwo) {
    return (numOne + numTwo);
}