// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#pragma once

#include "djinni_support.hpp"
#include "mat3.hpp"

namespace djinni_generated {

class NativeMat3 final : ::djinni::JniInterface<::nok::Mat3, NativeMat3> {
public:
    using CppType = std::shared_ptr<::nok::Mat3>;
    using CppOptType = std::shared_ptr<::nok::Mat3>;
    using JniType = jobject;

    using Boxed = NativeMat3;

    ~NativeMat3();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeMat3>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeMat3>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeMat3();
    friend ::djinni::JniClass<NativeMat3>;
    friend ::djinni::JniInterface<::nok::Mat3, NativeMat3>;

};

}  // namespace djinni_generated
