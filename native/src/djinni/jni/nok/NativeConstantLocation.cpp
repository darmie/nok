// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#include "NativeConstantLocation.hpp"  // my header

namespace djinni_generated {

NativeConstantLocation::NativeConstantLocation() : ::djinni::JniInterface<::nok::ConstantLocation, NativeConstantLocation>("co/zenturi/nok/ConstantLocation$CppProxy") {}

NativeConstantLocation::~NativeConstantLocation() = default;


CJNIEXPORT void JNICALL Java_co_zenturi_nok_ConstantLocation_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::nok::ConstantLocation>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
