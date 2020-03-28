#pragma once

#include "nok/mat4.hpp"
#include "nok/mat4d.hpp"
#include "Kore/Math/Matrix.h"

namespace nok
{

template <class T>
class Matrix4Impl : public nok::Mat4, public Kore::Matrix<4U, 4U, T>
{
public:
    Matrix4Impl() : nok::Mat4(), Kore::Matrix<4U, 4U, T>(){};
    Matrix4Impl(Matrix4Impl<T> *mat) : nok::Mat4(), Kore::Matrix<4U, 4U, T>(*static_cast<Kore::Matrix<4U, 4U, T> *>(mat)){};
    ~Matrix4Impl(){};
    float get(float row, float col)
    {
        return static_cast<Kore::Matrix<4U, 4U, T> *>(this)->get(row, col);
    }

    void set(float row, float col, float v)
    {
        static_cast<Kore::Matrix<4U, 4U, T> *>(this)->Set(row, col, v);
    }

    static std::shared_ptr<Mat4> orthogonalProjection(float left, float right, float bottom, float top, float zn, float zf)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::orthogonalProjection(left, right, bottom, top, zn, zf));
    }

    static std::shared_ptr<Mat4> perspective(float left, float right, float top, float bottom, float near, float far)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Perspective(left, right, top, bottom, near, far));
    }

    static std::shared_ptr<Mat4> perspectiveFOV(float fov, float aspect, float near, float far)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Perspective(fov, aspect, near, far));
    }

    static std::shared_ptr<Mat4> lookAt(const std::shared_ptr<Vec3i> &eye, const std::shared_ptr<Vec3i> &at, const std::shared_ptr<Vec3i> &up)
    {
    }

    static std::shared_ptr<Mat4> lookAlong(const std::shared_ptr<Vec3i> &axis, const std::shared_ptr<Vec3i> &eye, const std::shared_ptr<Vec3i> &up)
    {
    }

    static std::shared_ptr<Mat4> translation(float x, float y)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Translation(x, y));
    }

    static std::shared_ptr<Mat4> movement(float x, float y, float z)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Movement(x, y, z));
    }

    static std::shared_ptr<Mat4> identity()
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Identity());
    }

    static std::shared_ptr<Mat4> scale(float scale)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Scale(scale));
    }

    static std::shared_ptr<Mat4> rotationX(float alpha)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::RotationX(alpha));
    }

    static std::shared_ptr<Mat4> rotationY(float alpha)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::RotationY(alpha));
    }

    static std::shared_ptr<Mat4> rotationZ(float alpha)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::RotationZ(alpha));
    }

    static std::shared_ptr<Mat4> rotation(float yaw, float pitch, float roll)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::Rotation(yaw, pitch, roll));
    }

    static std::shared_ptr<Mat4> create()
    {
        return std::make_shared<Matrix4Impl<T>>();
    }

    static std::shared_ptr<Mat4> from(const std::shared_ptr<Mat4> &mat)
    {
        return std::make_shared<Matrix4Impl<T>>(new Kore::Matrix<4U, 4U, T>(*static_cast<Matrix4Impl *>(mat.get())));
    }

    std::shared_ptr<Mat4> add(const std::shared_ptr<Mat4> &mat)
    {
        Kore::Matrix<4U, 4U, T> sum = static_cast<Kore::Matrix<4U, 4U, T>>(*static_cast<Matrix4Impl *>(this)) + (static_cast<Kore::Matrix<4U, 4U, T>>(*static_cast<Matrix4Impl *>(mat.get())));
        return std::make_shared<Matrix4Impl<T>>(sum);
    }

    std::shared_ptr<Mat4> sub(const std::shared_ptr<Mat4> &mat)
    {
        Kore::Matrix<4U, 4U, T> sub = static_cast<Kore::Matrix<4U, 4U, T>>(*static_cast<Matrix4Impl *>(this)) - (static_cast<Kore::Matrix<4U, 4U, T>>(*static_cast<Matrix4Impl *>(mat.get())));
        return std::make_shared<Matrix4Impl<T>>(sub);
    }

    std::shared_ptr<Mat4> multiply(float i)
    {
        Kore::Matrix<4U, 4U, T> mu = static_cast<Kore::Matrix<4U, 4U, T>>(*static_cast<Matrix4Impl *>(this)) * i;
        return std::make_shared<Matrix4Impl<T>>(mu);
    }

    std::shared_ptr<Mat4> clone()
    {
        return std::make_shared<Matrix4Impl<T>>(static_cast<Kore::Matrix<4U, 4U, T> *>(this)->Clone());
    }

    std::shared_ptr<Mat4> transpose()
    {
        return std::make_shared<Matrix4Impl<T>>(static_cast<Kore::Matrix<4U, 4U, T> *>(this)->Transpose());
    }

    std::shared_ptr<Mat4> transpose3x3()
    {
        return std::make_shared<Matrix4Impl<T>>(static_cast<Kore::Matrix<4U, 4U, T> *>(this)->Transpose3x3());
    }

    float trace()
    {
        return static_cast<Kore::Matrix<4U, 4U, T> *>(this)->Trace();
    }

    float determinant()
    {
        return static_cast<Kore::Matrix<4U, 4U, T> *>(this)->Determinant();
    }

    static std::shared_ptr<Mat4> linearInterpolate(const std::shared_ptr<Mat4> &a, const std::shared_ptr<Mat4> &b, float prop)
    {
        return std::make_shared<Matrix4Impl<T>>(Kore::Matrix<4U, 4U, T>::linearInterpolate(*static_cast<Matrix4Impl *>(a.get()), *static_cast<Matrix4Impl *>(b.get()), prop));
    }
};
typedef Matrix4Impl<float> mat4;
typedef Matrix4Impl<double> mat4d;
} // namespace nok