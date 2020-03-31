// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#include "NativeQuaternion.hpp"  // my header
#include "Marshal.hpp"
#include "NativeMat4.hpp"
#include "NativeVec3.hpp"

namespace djinni_generated {

NativeQuaternion::NativeQuaternion() : ::djinni::JniInterface<::nok::Quaternion, NativeQuaternion>("co/zenturi/nok/Quaternion$CppProxy") {}

NativeQuaternion::~NativeQuaternion() = default;


CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::nok::Quaternion>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_create(JNIEnv* jniEnv, jobject /*this*/, jfloat j_x, jfloat j_y, jfloat j_z, jfloat j_w)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Quaternion::create(::djinni::F32::toCpp(jniEnv, j_x),
                                           ::djinni::F32::toCpp(jniEnv, j_y),
                                           ::djinni::F32::toCpp(jniEnv, j_z),
                                           ::djinni::F32::toCpp(jniEnv, j_w));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_fromAxis(JNIEnv* jniEnv, jobject /*this*/, jobject j_axis, jfloat j_radian)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Quaternion::fromAxis(::djinni_generated::NativeVec3::toCpp(jniEnv, j_axis),
                                             ::djinni::F32::toCpp(jniEnv, j_radian));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1slerp(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_t, jobject j_q)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->slerp(::djinni::F32::toCpp(jniEnv, j_t),
                            ::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_q));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1rotated(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_b)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->rotated(::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_b));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1scaled(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_scale)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->scaled(::djinni::F32::toCpp(jniEnv, j_scale));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1dot(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_q)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->dot(::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_q));
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1matrix(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->matrix();
        return ::djinni::release(::djinni_generated::NativeMat4::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1add(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_q)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->add(::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_q));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1sub(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_q)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->sub(::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_q));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1addVec3(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_v)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->addVec3(::djinni_generated::NativeVec3::toCpp(jniEnv, j_v));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1multiply(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_q)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->multiply(::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_q));
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1normalize(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        ref->normalize();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1rotate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jobject j_q)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        ref->rotate(::djinni_generated::NativeQuaternion::toCpp(jniEnv, j_q));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1conjugate(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->conjugate();
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jobject JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1invert(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->invert();
        return ::djinni::release(::djinni_generated::NativeQuaternion::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1getX(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->get_x();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1getY(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->get_y();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1getZ(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->get_z();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jfloat JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1getW(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        auto r = ref->get_w();
        return ::djinni::release(::djinni::F32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1setX(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_x)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        ref->set_x(::djinni::F32::toCpp(jniEnv, j_x));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1setY(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_y)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        ref->set_y(::djinni::F32::toCpp(jniEnv, j_y));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1setZ(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_z)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        ref->set_z(::djinni::F32::toCpp(jniEnv, j_z));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Quaternion_00024CppProxy_native_1setW(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef, jfloat j_w)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        const auto& ref = ::djinni::objectFromHandleAddress<::nok::Quaternion>(nativeRef);
        ref->set_w(::djinni::F32::toCpp(jniEnv, j_w));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
