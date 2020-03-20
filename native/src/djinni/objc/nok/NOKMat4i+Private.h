// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#include "mat4i.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class NOKMat4i;

namespace djinni_generated {

class Mat4i
{
public:
    using CppType = std::shared_ptr<::nok::Mat4i>;
    using CppOptType = std::shared_ptr<::nok::Mat4i>;
    using ObjcType = NOKMat4i*;

    using Boxed = Mat4i;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated
