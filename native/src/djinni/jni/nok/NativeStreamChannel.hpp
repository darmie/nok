// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio.djinni

#pragma once

#include "djinni_support.hpp"
#include "stream_channel.hpp"

namespace djinni_generated {

class NativeStreamChannel final : ::djinni::JniInterface<::nok::StreamChannel, NativeStreamChannel> {
public:
    using CppType = std::shared_ptr<::nok::StreamChannel>;
    using CppOptType = std::shared_ptr<::nok::StreamChannel>;
    using JniType = jobject;

    using Boxed = NativeStreamChannel;

    ~NativeStreamChannel();

    static CppType toCpp(JNIEnv* jniEnv, JniType j) { return ::djinni::JniClass<NativeStreamChannel>::get()._fromJava(jniEnv, j); }
    static ::djinni::LocalRef<JniType> fromCppOpt(JNIEnv* jniEnv, const CppOptType& c) { return {jniEnv, ::djinni::JniClass<NativeStreamChannel>::get()._toJava(jniEnv, c)}; }
    static ::djinni::LocalRef<JniType> fromCpp(JNIEnv* jniEnv, const CppType& c) { return fromCppOpt(jniEnv, c); }

private:
    NativeStreamChannel();
    friend ::djinni::JniClass<NativeStreamChannel>;
    friend ::djinni::JniInterface<::nok::StreamChannel, NativeStreamChannel>;

};

}  // namespace djinni_generated
