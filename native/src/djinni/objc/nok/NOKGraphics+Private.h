// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#include "graphics.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class NOKGraphics;

namespace djinni_generated {

class Graphics
{
public:
    using CppType = std::shared_ptr<::nok::Graphics>;
    using CppOptType = std::shared_ptr<::nok::Graphics>;
    using ObjcType = NOKGraphics*;

    using Boxed = Graphics;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

