// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

package co.zenturi.nok;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Mat3 {
    public static final float WIDTH = 3;

    public static final float HEIGHT = 3;

    public abstract float get(float row, float col);

    public abstract void set(float row, float col, float v);

    public abstract Mat3 add(Mat3 mat);

    public abstract Mat3 sub(Mat3 mat);

    public abstract Mat3 multiply(float i);

    public abstract Mat3 clone();

    public abstract Mat3 transpose();

    public abstract Mat3 transpose3x3();

    public abstract float trace();

    public abstract float determinant();

    public static native Mat3 orthogonalProjection(float left, float right, float bottom, float top, float zn, float zf);

    public static native Mat3 perspective(float left, float right, float top, float bottom, float near, float far);

    public static native Mat3 perspectiveFOV(float fov, float aspect, float near, float far);

    public static native Mat3 lookAt(Vec3 eye, Vec3 at, Vec3 up);

    public static native Mat3 lookAlong(Vec3 axis, Vec3 eye, Vec3 up);

    public static native Mat3 translation(float x, float y);

    public static native Mat3 movement(float x, float y, float z);

    public static native Mat3 identity();

    public static native Mat3 scale(float scale);

    public static native Mat3 rotationX(float alpha);

    public static native Mat3 rotationY(float alpha);

    public static native Mat3 rotationZ(float alpha);

    public static native Mat3 rotation(float yaw, float pitch, float roll);

    public static native Mat3 create();

    public static native Mat3 from(Mat3 mat);

    public static native Mat3 linearInterpolate(Mat3 a, Mat3 b, float prop);

    private static final class CppProxy extends Mat3
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public float get(float row, float col)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_get(this.nativeRef, row, col);
        }
        private native float native_get(long _nativeRef, float row, float col);

        @Override
        public void set(float row, float col, float v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_set(this.nativeRef, row, col, v);
        }
        private native void native_set(long _nativeRef, float row, float col, float v);

        @Override
        public Mat3 add(Mat3 mat)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_add(this.nativeRef, mat);
        }
        private native Mat3 native_add(long _nativeRef, Mat3 mat);

        @Override
        public Mat3 sub(Mat3 mat)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_sub(this.nativeRef, mat);
        }
        private native Mat3 native_sub(long _nativeRef, Mat3 mat);

        @Override
        public Mat3 multiply(float i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_multiply(this.nativeRef, i);
        }
        private native Mat3 native_multiply(long _nativeRef, float i);

        @Override
        public Mat3 clone()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_clone(this.nativeRef);
        }
        private native Mat3 native_clone(long _nativeRef);

        @Override
        public Mat3 transpose()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_transpose(this.nativeRef);
        }
        private native Mat3 native_transpose(long _nativeRef);

        @Override
        public Mat3 transpose3x3()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_transpose3x3(this.nativeRef);
        }
        private native Mat3 native_transpose3x3(long _nativeRef);

        @Override
        public float trace()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_trace(this.nativeRef);
        }
        private native float native_trace(long _nativeRef);

        @Override
        public float determinant()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_determinant(this.nativeRef);
        }
        private native float native_determinant(long _nativeRef);
    }
}
