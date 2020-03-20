// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#pragma once

#include <cstdint>
#include <memory>

namespace nok {

class Vec3i;

class Mat4i {
public:
    virtual ~Mat4i() {}

    static constexpr int32_t WIDTH = 4;

    static constexpr int32_t HEIGHT = 4;

    virtual float get(int32_t row, int32_t col) = 0;

    virtual void set(int32_t row, int32_t col, int32_t v) = 0;

    static std::shared_ptr<Mat4i> orthogonalProjection(float left, float right, float bottom, float top, float zn, float zf);

    static std::shared_ptr<Mat4i> perspective(float left, float right, float top, float bottom, float near, float far);

    static std::shared_ptr<Mat4i> perspectiveFOV(float fov, float aspect, float near, float far);

    static std::shared_ptr<Mat4i> lookAt(const std::shared_ptr<Vec3i> & eye, const std::shared_ptr<Vec3i> & at, const std::shared_ptr<Vec3i> & up);

    static std::shared_ptr<Mat4i> lookAlong(const std::shared_ptr<Vec3i> & axis, const std::shared_ptr<Vec3i> & eye, const std::shared_ptr<Vec3i> & up);

    static std::shared_ptr<Mat4i> translation(float x, float y);

    static std::shared_ptr<Mat4i> movement(float x, float y, float z);

    static std::shared_ptr<Mat4i> identity();

    static std::shared_ptr<Mat4i> scale(float scale);

    static std::shared_ptr<Mat4i> rotationX(float alpha);

    static std::shared_ptr<Mat4i> rotationY(float alpha);

    static std::shared_ptr<Mat4i> rotationZ(float alpha);

    static std::shared_ptr<Mat4i> rotation(float yaw, float pitch, float roll);

    static std::shared_ptr<Mat4i> create();

    static std::shared_ptr<Mat4i> from(const std::shared_ptr<Mat4i> & mat);

    virtual std::shared_ptr<Mat4i> add(const std::shared_ptr<Mat4i> & mat) = 0;

    virtual std::shared_ptr<Mat4i> sub(const std::shared_ptr<Mat4i> & mat) = 0;

    virtual std::shared_ptr<Mat4i> multiply(int32_t i) = 0;

    virtual std::shared_ptr<Mat4i> clone() = 0;

    virtual std::shared_ptr<Mat4i> transpose() = 0;

    virtual std::shared_ptr<Mat4i> transpose3x3() = 0;

    virtual int32_t trace() = 0;

    virtual int32_t determinant() = 0;

    static std::shared_ptr<Mat4i> linearInterpolate(const std::shared_ptr<Mat4i> & a, const std::shared_ptr<Mat4i> & b, float prop);
};

}  // namespace nok