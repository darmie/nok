// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#include "NativeGraphics.hpp"  // my header
#include "Marshal.hpp"
#include "NativeConstantLocation.hpp"
#include "NativeIndexBuffer.hpp"
#include "NativeMat3.hpp"
#include "NativeMat4.hpp"
#include "NativeMipmapFilter.hpp"
#include "NativePipelineState.hpp"
#include "NativeRenderTarget.hpp"
#include "NativeTexDir.hpp"
#include "NativeTexture.hpp"
#include "NativeTextureAddressing.hpp"
#include "NativeTextureArgument.hpp"
#include "NativeTextureArray.hpp"
#include "NativeTextureFilter.hpp"
#include "NativeTextureOperation.hpp"
#include "NativeTextureUnit.hpp"
#include "NativeVertexBuffer.hpp"

namespace djinni_generated {

NativeGraphics::NativeGraphics() : ::djinni::JniInterface<::nok::Graphics, NativeGraphics>("co/zenturi/nok/Graphics$CppProxy") {}

NativeGraphics::~NativeGraphics() = default;


CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_nativeDestroy(JNIEnv* jniEnv, jobject /*this*/, jlong nativeRef)
{
    try {
        DJINNI_FUNCTION_PROLOGUE1(jniEnv, nativeRef);
        delete reinterpret_cast<::djinni::CppProxyHandle<::nok::Graphics>*>(nativeRef);
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setBool(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jboolean j_value)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setBool(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                 ::djinni::Bool::toCpp(jniEnv, j_value));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setInt(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jint j_value)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setInt(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                ::djinni::I32::toCpp(jniEnv, j_value));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setInt2(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jint j_value1, jint j_value2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setInt2(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                 ::djinni::I32::toCpp(jniEnv, j_value1),
                                 ::djinni::I32::toCpp(jniEnv, j_value2));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setInt3(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jint j_value1, jint j_value2, jint j_value3)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setInt3(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                 ::djinni::I32::toCpp(jniEnv, j_value1),
                                 ::djinni::I32::toCpp(jniEnv, j_value2),
                                 ::djinni::I32::toCpp(jniEnv, j_value3));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setInt4(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jint j_value1, jint j_value2, jint j_value3, jint j_value4)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setInt4(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                 ::djinni::I32::toCpp(jniEnv, j_value1),
                                 ::djinni::I32::toCpp(jniEnv, j_value2),
                                 ::djinni::I32::toCpp(jniEnv, j_value3),
                                 ::djinni::I32::toCpp(jniEnv, j_value4));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setInts(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jobject j_values, jint j_count)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setInts(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                 ::djinni::List<::djinni::I32>::toCpp(jniEnv, j_values),
                                 ::djinni::I32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setFloat2(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jfloat j_value1, jfloat j_value2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setFloat2(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                   ::djinni::F32::toCpp(jniEnv, j_value1),
                                   ::djinni::F32::toCpp(jniEnv, j_value2));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setFloat3(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jfloat j_value1, jfloat j_value2, jfloat j_value3)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setFloat3(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                   ::djinni::F32::toCpp(jniEnv, j_value1),
                                   ::djinni::F32::toCpp(jniEnv, j_value2),
                                   ::djinni::F32::toCpp(jniEnv, j_value3));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setFloat4(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jint j_value1, jfloat j_value2, jfloat j_value3, jfloat j_value4)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setFloat4(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                   ::djinni::I32::toCpp(jniEnv, j_value1),
                                   ::djinni::F32::toCpp(jniEnv, j_value2),
                                   ::djinni::F32::toCpp(jniEnv, j_value3),
                                   ::djinni::F32::toCpp(jniEnv, j_value4));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setFloats(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jobject j_values, jfloat j_count)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setFloats(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                   ::djinni::List<::djinni::F32>::toCpp(jniEnv, j_values),
                                   ::djinni::F32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setMatrix3(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jobject j_mat)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setMatrix3(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                    ::djinni_generated::NativeMat3::toCpp(jniEnv, j_mat));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setMatrix4(JNIEnv* jniEnv, jobject /*this*/, jobject j_location, jobject j_mat)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setMatrix4(::djinni_generated::NativeConstantLocation::toCpp(jniEnv, j_location),
                                    ::djinni_generated::NativeMat4::toCpp(jniEnv, j_mat));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setVertexBuffer(JNIEnv* jniEnv, jobject /*this*/, jobject j_buf)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setVertexBuffer(::djinni_generated::NativeVertexBuffer::toCpp(jniEnv, j_buf));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setVertexBuffers(JNIEnv* jniEnv, jobject /*this*/, jobject j_bufs, jint j_count)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setVertexBuffers(::djinni::List<::djinni_generated::NativeVertexBuffer>::toCpp(jniEnv, j_bufs),
                                          ::djinni::I32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setIndexBuffer(JNIEnv* jniEnv, jobject /*this*/, jobject j_buf)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setIndexBuffer(::djinni_generated::NativeIndexBuffer::toCpp(jniEnv, j_buf));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTexture(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_texture)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTexture(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                    ::djinni_generated::NativeTexture::toCpp(jniEnv, j_texture));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureArray(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_textureArray)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureArray(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                         ::djinni_generated::NativeTextureArray::toCpp(jniEnv, j_textureArray));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setPipeline(JNIEnv* jniEnv, jobject /*this*/, jobject j_pipeline)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setPipeline(::djinni_generated::NativePipelineState::toCpp(jniEnv, j_pipeline));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setStencilReferenceValue(JNIEnv* jniEnv, jobject /*this*/, jint j_value)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setStencilReferenceValue(::djinni::I32::toCpp(jniEnv, j_value));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_drawIndexedVertices(JNIEnv* jniEnv, jobject /*this*/, jint j_start, jint j_count)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::drawIndexedVertices(::djinni::I32::toCpp(jniEnv, j_start),
                                             ::djinni::I32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_drawIndexedVerticesInstanced(JNIEnv* jniEnv, jobject /*this*/, jint j_instanceCount, jint j_start, jint j_count)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::drawIndexedVerticesInstanced(::djinni::I32::toCpp(jniEnv, j_instanceCount),
                                                      ::djinni::I32::toCpp(jniEnv, j_start),
                                                      ::djinni::I32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jint JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_antialiasingSamples(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::antialiasingSamples();
        return ::djinni::release(::djinni::I32::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setAntialiasingSamples(JNIEnv* jniEnv, jobject /*this*/, jint j_samples)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setAntialiasingSamples(::djinni::I32::toCpp(jniEnv, j_samples));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_renderTargetsInvertedY(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::renderTargetsInvertedY();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setRenderTargets(JNIEnv* jniEnv, jobject /*this*/, jobject j_targets, jint j_count)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setRenderTargets(::djinni::List<::djinni_generated::NativeRenderTarget>::toCpp(jniEnv, j_targets),
                                          ::djinni::I32::toCpp(jniEnv, j_count));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setRenderTarget(JNIEnv* jniEnv, jobject /*this*/, jobject j_target)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setRenderTarget(::djinni_generated::NativeRenderTarget::toCpp(jniEnv, j_target));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setRenderTargetFace(JNIEnv* jniEnv, jobject /*this*/, jobject j_texture, jint j_face)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setRenderTargetFace(::djinni_generated::NativeRenderTarget::toCpp(jniEnv, j_texture),
                                             ::djinni::I32::toCpp(jniEnv, j_face));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_restoreRenderTarget(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::restoreRenderTarget();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_begin(JNIEnv* jniEnv, jobject /*this*/, jint j_win)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::begin(::djinni::I32::toCpp(jniEnv, j_win));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_end(JNIEnv* jniEnv, jobject /*this*/, jint j_win)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::end(::djinni::I32::toCpp(jniEnv, j_win));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_swapBuffers(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::swapBuffers();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_viewport(JNIEnv* jniEnv, jobject /*this*/, jint j_x, jint j_y, jint j_width, jint j_height)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::viewport(::djinni::I32::toCpp(jniEnv, j_x),
                                  ::djinni::I32::toCpp(jniEnv, j_y),
                                  ::djinni::I32::toCpp(jniEnv, j_width),
                                  ::djinni::I32::toCpp(jniEnv, j_height));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_scissor(JNIEnv* jniEnv, jobject /*this*/, jint j_x, jint j_y, jint j_width, jint j_height)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::scissor(::djinni::I32::toCpp(jniEnv, j_x),
                                 ::djinni::I32::toCpp(jniEnv, j_y),
                                 ::djinni::I32::toCpp(jniEnv, j_width),
                                 ::djinni::I32::toCpp(jniEnv, j_height));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_disableScissor(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::disableScissor();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureAddressing(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_dir, jobject j_addressing)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureAddressing(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                              ::djinni_generated::NativeTexDir::toCpp(jniEnv, j_dir),
                                              ::djinni_generated::NativeTextureAddressing::toCpp(jniEnv, j_addressing));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureMagnificationFilter(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_filer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureMagnificationFilter(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                       ::djinni_generated::NativeTextureFilter::toCpp(jniEnv, j_filer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureMinificationFilter(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_filer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureMinificationFilter(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                      ::djinni_generated::NativeTextureFilter::toCpp(jniEnv, j_filer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureMipmapFilter(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_filer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureMipmapFilter(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                ::djinni_generated::NativeMipmapFilter::toCpp(jniEnv, j_filer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTexture3DAddressing(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_dir, jobject j_addressing)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTexture3DAddressing(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                ::djinni_generated::NativeTexDir::toCpp(jniEnv, j_dir),
                                                ::djinni_generated::NativeTextureAddressing::toCpp(jniEnv, j_addressing));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTexture3DMagnificationFilter(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_filer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTexture3DMagnificationFilter(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                         ::djinni_generated::NativeTextureFilter::toCpp(jniEnv, j_filer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTexture3DMinificationFilter(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_filer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTexture3DMinificationFilter(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                        ::djinni_generated::NativeTextureFilter::toCpp(jniEnv, j_filer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTexture3DMipmapFilter(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jobject j_filer)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTexture3DMipmapFilter(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                                  ::djinni_generated::NativeMipmapFilter::toCpp(jniEnv, j_filer));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureCompareMode(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jboolean j_enabled)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureCompareMode(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                               ::djinni::Bool::toCpp(jniEnv, j_enabled));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setCubeMapCompareMode(JNIEnv* jniEnv, jobject /*this*/, jobject j_unit, jboolean j_enabled)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setCubeMapCompareMode(::djinni_generated::NativeTextureUnit::toCpp(jniEnv, j_unit),
                                               ::djinni::Bool::toCpp(jniEnv, j_enabled));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_setTextureOperation(JNIEnv* jniEnv, jobject /*this*/, jobject j_operation, jobject j_arg1, jobject j_arg2)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::setTextureOperation(::djinni_generated::NativeTextureOperation::toCpp(jniEnv, j_operation),
                                             ::djinni_generated::NativeTextureArgument::toCpp(jniEnv, j_arg1),
                                             ::djinni_generated::NativeTextureArgument::toCpp(jniEnv, j_arg2));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_nonPow2TexturesSupported(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::nonPow2TexturesSupported();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_getFullscreen(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::get_fullscreen();
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_init(JNIEnv* jniEnv, jobject /*this*/, jint j_windowId, jint j_depthBufferBits, jint j_stencilBufferBits, jboolean j_vsync)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::init(::djinni::I32::toCpp(jniEnv, j_windowId),
                              ::djinni::I32::toCpp(jniEnv, j_depthBufferBits),
                              ::djinni::I32::toCpp(jniEnv, j_stencilBufferBits),
                              ::djinni::Bool::toCpp(jniEnv, j_vsync));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_destroy(JNIEnv* jniEnv, jobject /*this*/, jint j_windowId)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::destroy(::djinni::I32::toCpp(jniEnv, j_windowId));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_flush(JNIEnv* jniEnv, jobject /*this*/)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::flush();
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_initOcclusionQuery(JNIEnv* jniEnv, jobject /*this*/, jobject j_occlusionQuery)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::initOcclusionQuery(::djinni::List<::djinni::F64>::toCpp(jniEnv, j_occlusionQuery));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_deleteOcclusionQuery(JNIEnv* jniEnv, jobject /*this*/, jdouble j_occlusionQuery)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::deleteOcclusionQuery(::djinni::F64::toCpp(jniEnv, j_occlusionQuery));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_renderOcclusionQuery(JNIEnv* jniEnv, jobject /*this*/, jdouble j_occlusionQuery, jint j_triangles)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::renderOcclusionQuery(::djinni::F64::toCpp(jniEnv, j_occlusionQuery),
                                              ::djinni::I32::toCpp(jniEnv, j_triangles));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT jboolean JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_isQueryResultsAvailable(JNIEnv* jniEnv, jobject /*this*/, jdouble j_occlusionQuery)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        auto r = ::nok::Graphics::isQueryResultsAvailable(::djinni::F64::toCpp(jniEnv, j_occlusionQuery));
        return ::djinni::release(::djinni::Bool::fromCpp(jniEnv, r));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, 0 /* value doesn't matter */)
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_getQueryResults(JNIEnv* jniEnv, jobject /*this*/, jdouble j_occlusionQuery, jobject j_pixelCount)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::getQueryResults(::djinni::F64::toCpp(jniEnv, j_occlusionQuery),
                                         ::djinni::List<::djinni::F64>::toCpp(jniEnv, j_pixelCount));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

CJNIEXPORT void JNICALL Java_co_zenturi_nok_Graphics_00024CppProxy_clear(JNIEnv* jniEnv, jobject /*this*/, jint j_flags, jdouble j_color, jfloat j_depth, jint j_stencil)
{
    try {
        DJINNI_FUNCTION_PROLOGUE0(jniEnv);
        ::nok::Graphics::clear(::djinni::I32::toCpp(jniEnv, j_flags),
                               ::djinni::F64::toCpp(jniEnv, j_color),
                               ::djinni::F32::toCpp(jniEnv, j_depth),
                               ::djinni::I32::toCpp(jniEnv, j_stencil));
    } JNI_TRANSLATE_EXCEPTIONS_RETURN(jniEnv, )
}

}  // namespace djinni_generated
