// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#include "NativeTextureUnit.hpp"  // my header

namespace djinni_generated {

NativeTextureUnit::NativeTextureUnit() : ::djinni::JniInterface<::nok::TextureUnit, NativeTextureUnit>("co/zenturi/nok/TextureUnit$CppProxy") {}

NativeTextureUnit::~NativeTextureUnit() = default;


CJNIEXPORT void JNICALL Java_co_zenturi_nok_TextureUnit_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::nok::TextureUnit>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
