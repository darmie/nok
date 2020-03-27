// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#pragma once

#include "djinni_support.hpp"
#include "texture_unit.hpp"

namespace djinni_generated {

class NativeTextureUnit final : ::djinni::JniInterface<::nok::TextureUnit, NativeTextureUnit> {
public:
    using CppType = std::shared_ptr<::nok::TextureUnit>;
    using CppOptType = std::shared_ptr<::nok::TextureUnit>;
    using JniType = jobject;

    using Boxed = NativeTextureUnit;

    ~NativeTextureUnit();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeTextureUnit>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeTextureUnit>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeTextureUnit();
    friend ::djinni::JniClass<NativeTextureUnit>;
    friend ::djinni::JniInterface<::nok::TextureUnit, NativeTextureUnit>;

};

}  // namespace djinni_generated
