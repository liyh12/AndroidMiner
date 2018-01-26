//
// Created by liyunhan on 2018/1/26.
//
#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring JNICALL
Java_com_liyh12_android_miner_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello liyunhan";
    return env->NewStringUTF(hello.c_str());
}

