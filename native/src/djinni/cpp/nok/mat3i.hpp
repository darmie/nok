// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#pragma once

#include <cstdint>
#include <memory>

namespace nok {

class Vec3i;

class Mat3i {
public:
    virtual ~Mat3i() {}

    static constexpr int32_t WIDTH = 3;

    static constexpr int32_t HEIGHT = 3;

    virtual float get(int32_t row, int32_t col) = 0;

    virtual void set(int32_t row, int32_t col, int32_t v) = 0;

    static std::shared_ptr<Mat3i> orthogonalProjection(float left, float right, float bottom, float top, float zn, float zf);

    static std::shared_ptr<Mat3i> perspective(float left, float right, float top, float bottom, float near, float far);

    static std::shared_ptr<Mat3i> perspectiveFOV(float fov, float aspect, float near, float far);

    static std::shared_ptr<Mat3i> lookAt(const std::shared_ptr<Vec3i> & eye, const std::shared_ptr<Vec3i> & at, const std::shared_ptr<Vec3i> & up);

    static std::shared_ptr<Mat3i> lookAlong(const std::shared_ptr<Vec3i> & axis, const std::shared_ptr<Vec3i> & eye, const std::shared_ptr<Vec3i> & up);

    static std::shared_ptr<Mat3i> translation(float x, float y);

    static std::shared_ptr<Mat3i> movement(float x, float y, float z);

    static std::shared_ptr<Mat3i> identity();

    static std::shared_ptr<Mat3i> scale(float scale);

    static std::shared_ptr<Mat3i> rotationX(float alpha);

    static std::shared_ptr<Mat3i> rotationY(float alpha);

    static std::shared_ptr<Mat3i> rotationZ(float alpha);

    static std::shared_ptr<Mat3i> rotation(float yaw, float pitch, float roll);

    static std::shared_ptr<Mat3i> create();

    static std::shared_ptr<Mat3i> from(const std::shared_ptr<Mat3i> & mat);

    virtual std::shared_ptr<Mat3i> add(const std::shared_ptr<Mat3i> & mat) = 0;

    virtual std::shared_ptr<Mat3i> sub(const std::shared_ptr<Mat3i> & mat) = 0;

    virtual std::shared_ptr<Mat3i> multiply(int32_t i) = 0;

    virtual std::shared_ptr<Mat3i> clone() = 0;

    virtual std::shared_ptr<Mat3i> transpose() = 0;

    virtual std::shared_ptr<Mat3i> transpose3x3() = 0;

    virtual int32_t trace() = 0;

    virtual int32_t determinant() = 0;

    static std::shared_ptr<Mat3i> linearInterpolate(const std::shared_ptr<Mat3i> & a, const std::shared_ptr<Mat3i> & b, float prop);
};

}  // namespace nok