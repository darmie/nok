// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#pragma once

#include "djinni_support.hpp"
#include "vec2_module.hpp"

namespace djinni_generated {

class NativeVec2Module final : ::djinni::JniInterface<::nok::Vec2Module, NativeVec2Module> {
public:
    using CppType = std::shared_ptr<::nok::Vec2Module>;
    using CppOptType = std::shared_ptr<::nok::Vec2Module>;
    using JniType = jobject;

    using Boxed = NativeVec2Module;

    ~NativeVec2Module();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeVec2Module>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeVec2Module>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeVec2Module();
    friend ::djinni::JniClass<NativeVec2Module>;
    friend ::djinni::JniInterface<::nok::Vec2Module, NativeVec2Module>;

};

}  // namespace djinni_generated