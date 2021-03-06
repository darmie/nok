// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#pragma once

#include <functional>

namespace nok {

enum class VertexAttribute : int {
    NOVERTEXATTRIBUTE,
    VERTEXCOORD,
    VERTEXNORMAL,
    VERTEXCOLOR0,
    VERTEXCOLOR1,
    VERTEXTEXCOORD0,
    VERTEXTEXCOORD1,
    VERTEXTEXCOORD2,
    VERTEXTEXCOORD3,
    VERTEXTEXCOORD4,
    VERTEXTEXCOORD5,
    VERTEXTEXCOORD6,
    VERTEXTEXCOORD7,
};

}  // namespace nok

namespace std {

template <>
struct hash<::nok::VertexAttribute> {
    size_t operator()(::nok::VertexAttribute type) const {
        return std::hash<int>()(static_cast<int>(type));
    }
};

}  // namespace std
