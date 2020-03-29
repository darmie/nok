// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio.djinni

#include "NativeAudioBuffer.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeAudioBuffer::NativeAudioBuffer() : ::djinni::JniInterface<::nok::AudioBuffer, NativeAudioBuffer>("co/zenturi/nok/AudioBuffer$CppProxy") {}

NativeAudioBuffer::~NativeAudioBuffer() = default;


CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::nok::AudioBuffer>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/, jint j_size, jint j_channels, jint j_samplesPerSecond)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::AudioBuffer::create(::djinni::I32::toCpp(jniEnv, j_size),
                                            ::djinni::I32::toCpp(jniEnv, j_channels),
                                            ::djinni::I32::toCpp(jniEnv, j_samplesPerSecond));
        return ::djinni::release(::djinni_generated::NativeAudioBuffer::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1getChannels(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        auto r = ref->get_channels();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1getSamplesPerSecond(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        auto r = ref->get_samplesPerSecond();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1getData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        auto r = ref->get_data();
        return ::djinni::release(::djinni::List<::djinni::F32>::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1getSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        auto r = ref->get_size();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1getReadLocation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        auto r = ref->get_readLocation();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1getWriteLocation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        auto r = ref->get_writeLocation();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1setChannels(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_channels)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        ref->set_channels(::djinni::I32::toCpp(jniEnv, j_channels));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1setSamplesPerSecond(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_samples)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        ref->set_samplesPerSecond(::djinni::I32::toCpp(jniEnv, j_samples));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1setData(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_data)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        ref->set_data(::djinni::List<::djinni::F32>::toCpp(jniEnv, j_data));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1setSize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_s)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        ref->set_size(::djinni::I32::toCpp(jniEnv, j_s));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1setReadLocation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_loc)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        ref->set_readLocation(::djinni::I32::toCpp(jniEnv, j_loc));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_AudioBuffer_00024CppProxy_native_1setWriteLocation(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_loc)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::AudioBuffer>(nativeRef);
        ref->set_writeLocation(::djinni::I32::toCpp(jniEnv, j_loc));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
