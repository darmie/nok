// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#include "mat3x4_module.hpp"
#include <memory>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@class NOKMat3x4Module;

namespace djinni_generated {

class Mat3x4Module
{
public:
    using CppType = std::shared_ptr<::nok::Mat3x4Module>;
    using CppOptType = std::shared_ptr<::nok::Mat3x4Module>;
    using ObjcType = NOKMat3x4Module*;

    using Boxed = Mat3x4Module;

    static CppType toCpp(ObjcType objc);
    static ObjcType fromCppOpt(const CppOptType& cpp);
    static ObjcType fromCpp(const CppType& cpp) { return fromCppOpt(cpp); }

private:
    class ObjcProxy;
};

}  // namespace djinni_generated

