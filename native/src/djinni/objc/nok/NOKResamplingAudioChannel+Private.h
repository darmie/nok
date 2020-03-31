// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from audio.djinni

#include "resampling_audio_channel.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class NOKResamplingAudioChannel;

namespace djinni_generated {

class ResamplingAudioChannel
{
public:
    using CppType = std::shared_ptr<::nok::ResamplingAudioChannel>;
    using CppOptType = std::shared_ptr<::nok::ResamplingAudioChannel>;
    using ObjcType = NOKResamplingAudioChannel*;

    using Boxed = ResamplingAudioChannel;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

