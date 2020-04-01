// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import "NOKVertexStructure+Private.h"
#import "NOKVertexStructure.h"
#import "DJICppWrapperCache+Private.h"
#import "DJIError.h"
#import "DJIMarshal+Private.h"
#import "NOKVertexAttribute+Private.h"
#import "NOKVertexData+Private.h"
#import "NOKVertexElement+Private.h"
#include <exception>
#include <stdexcept>
#include <utility>

static_assert(__has_feature(objc_arc), "Djinni requires ARC to be enabled for this file");

@interface NOKVertexStructure ()

- (id)initWithCpp:(const std::shared_ptr<::nok::VertexStructure>&)cppRef;

@end

@implementation NOKVertexStructure {
    ::djinni::CppProxyCache::Handle<std::shared_ptr<::nok::VertexStructure>> _cppRefHandle;
}

- (id)initWithCpp:(const std::shared_ptr<::nok::VertexStructure>&)cppRef
{
    if (self = [super init]) {
        _cppRefHandle.assign(cppRef);
    }
    return self;
}

- (nonnull NSArray<NOKVertexElement *> *)getElements {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->getElements();
        return ::djinni::List<::djinni_generated::VertexElement>::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (int32_t)getSize {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->get_size();
        return ::djinni::I32::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)setSize:(int32_t)s {
    try {
        _cppRefHandle.get()->set_size(::djinni::I32::toCpp(s));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (BOOL)instanced {
    try {
        auto objcpp_result_ = _cppRefHandle.get()->instanced();
        return ::djinni::Bool::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

+ (nullable NOKVertexStructure *)create {
    try {
        auto objcpp_result_ = ::nok::VertexStructure::create();
        return ::djinni_generated::VertexStructure::fromCpp(objcpp_result_);
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)add:(nonnull NSString *)name
       data:(NOKVertexData)data {
    try {
        _cppRefHandle.get()->add(::djinni::String::toCpp(name),
                                 ::djinni::Enum<::nok::VertexData, NOKVertexData>::toCpp(data));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}

- (void)addAttribute:(NOKVertexAttribute)attribute
                data:(NOKVertexData)data {
    try {
        _cppRefHandle.get()->addAttribute(::djinni::Enum<::nok::VertexAttribute, NOKVertexAttribute>::toCpp(attribute),
                                          ::djinni::Enum<::nok::VertexData, NOKVertexData>::toCpp(data));
    } DJINNI_TRANSLATE_EXCEPTIONS()
}


namespace djinni_generated {

auto VertexStructure::toCpp(ObjcType objc) -> CppType
{
    if (!objc) {
        return nullptr;
    }
    return objc->_cppRefHandle.get();
}

auto VertexStructure::fromCppOpt(const CppOptType& cpp) -> ObjcType
{
    if (!cpp) {
        return nil;
    }
    return ::djinni::get_cpp_proxy<NOKVertexStructure>(cpp);
}

}  // namespace djinni_generated

@end