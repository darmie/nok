// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#include "NativeVec3i.hpp"  // my header
#include "Marshal.hpp"

namespace djinni_generated {

NativeVec3i::NativeVec3i() : ::djinni::JniInterface<::nok::Vec3i, NativeVec3i>("co/zenturi/nok/Vec3i$CppProxy") {}

NativeVec3i::~NativeVec3i() = default;


CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::nok::Vec3i>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1getX(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->get_x();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1getY(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->get_y();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1getZ(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->get_z();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1setX(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_x)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->set_x(::djinni::I32::toCpp(jniEnv, j_x));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1setY(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_y)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->set_y(::djinni::I32::toCpp(jniEnv, j_y));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1setZ(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_z)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->set_z(::djinni::I32::toCpp(jniEnv, j_z));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1add(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->add(::djinni_generated::NativeVec3i::toCpp(jniEnv, j_v));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1addScaledVector(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->addScaledVector(::djinni_generated::NativeVec3i::toCpp(jniEnv, j_v));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1sub(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->sub(::djinni_generated::NativeVec3i::toCpp(jniEnv, j_v));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1multiply(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->multiply(::djinni::I32::toCpp(jniEnv, j_i));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1divide(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->divide(::djinni::I32::toCpp(jniEnv, j_i));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1squareLength(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->squareLength();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1getLength(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->getLength();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1setLength(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_length)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->setLength(::djinni::I32::toCpp(jniEnv, j_length));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1normalize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->normalize();
        return ::djinni::release(::djinni_generated::NativeVec3i::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1isZero(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->isZero();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1get(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_i)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->get(::djinni::I32::toCpp(jniEnv, j_i));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1set(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jint j_i, jint j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        ref->set(::djinni::I32::toCpp(jniEnv, j_i),
                 ::djinni::I32::toCpp(jniEnv, j_v));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1dot(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->dot(::djinni_generated::NativeVec3i::toCpp(jniEnv, j_v));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1cross(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->cross(::djinni_generated::NativeVec3i::toCpp(jniEnv, j_v));
        return ::djinni::release(::djinni_generated::NativeVec3i::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_native_1distance(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Vec3i>(nativeRef);
        auto r = ref->distance(::djinni_generated::NativeVec3i::toCpp(jniEnv, j_v));
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Vec3i_00024CppProxy_create(JNIEnv* jniEnv, jobject /*this*/, jint j_x, jint j_y, jint j_z)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Vec3i::create(::djinni::I32::toCpp(jniEnv, j_x),
                                      ::djinni::I32::toCpp(jniEnv, j_y),
                                      ::djinni::I32::toCpp(jniEnv, j_z));
        return ::djinni::release(::djinni_generated::NativeVec3i::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

}  // namespace djinni_generated