// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#pragma once

#include "color.hpp"
#include "djinni_support.hpp"

namespace djinni_generated {

class NativeColor final : ::djinni::JniInterface<::nok::Color, NativeColor> {
public:
    using CppType = std::shared_ptr<::nok::Color>;
    using CppOptType = std::shared_ptr<::nok::Color>;
    using JniType = jobject;

    using Boxed = NativeColor;

    ~NativeColor();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeColor>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeColor>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeColor();
    friend ::djinni::JniClass<NativeColor>;
    friend ::djinni::JniInterface<::nok::Color, NativeColor>;

};

}  // namespace djinni_generated