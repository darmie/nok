// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#pragma once

#include <functional>

namespace nok {

enum class VertexData : int {
    NOVERTEXDATA,
    FLOAT1VERTEXDATA,
    FLOAT2VERTEXDATA,
    FLOAT3VERTEXDATA,
    FLOAT4VERTEXDATA,
    FLOAT4X4VERTEXDATA,
    /** not supported in fixed function OpenGL */
    SHORT2NORMVERTEXDATA,
    SHORT4NORMVERTEXDATA,
    COLORVERTEXDATA,
};

}  // namespace nok

namespace std {

template <>
struct hash<::nok::VertexData> {
    size_t operator()(::nok::VertexData type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std