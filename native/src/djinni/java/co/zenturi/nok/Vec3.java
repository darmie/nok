// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

package co.zenturi.nok;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Vec3 {
    public abstract double getX();

    public abstract double getY();

    public abstract double getZ();

    public abstract void add(Vec3 v);

    public abstract void addScaledVector(Vec3 v);

    public abstract void sub(Vec3 v);

    public abstract void multiply(double i);

    public abstract void divide(double i);

    public abstract double squareLength();

    public abstract double getLength();

    public abstract void setLength(double length);

    public abstract Vec3 normalize();

    public abstract boolean isZero();

    public abstract Vec3 getXyz();

    public abstract void set(double x, double y, double z);

    public abstract double dot(Vec3 v);

    public abstract Vec3 cross(Vec3 v);

    public abstract double distance(Vec3 v);

    public abstract void invert();

    public static native Vec3 create(double x, double y, double z);

    private static final class CppProxy extends Vec3
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
        public double getX()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getX(this.nativeRef);
        }
        private native double native_getX(long _nativeRef);

        @Override
        public double getY()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getY(this.nativeRef);
        }
        private native double native_getY(long _nativeRef);

        @Override
        public double getZ()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getZ(this.nativeRef);
        }
        private native double native_getZ(long _nativeRef);

        @Override
        public void add(Vec3 v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_add(this.nativeRef, v);
        }
        private native void native_add(long _nativeRef, Vec3 v);

        @Override
        public void addScaledVector(Vec3 v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_addScaledVector(this.nativeRef, v);
        }
        private native void native_addScaledVector(long _nativeRef, Vec3 v);

        @Override
        public void sub(Vec3 v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_sub(this.nativeRef, v);
        }
        private native void native_sub(long _nativeRef, Vec3 v);

        @Override
        public void multiply(double i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_multiply(this.nativeRef, i);
        }
        private native void native_multiply(long _nativeRef, double i);

        @Override
        public void divide(double i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_divide(this.nativeRef, i);
        }
        private native void native_divide(long _nativeRef, double i);

        @Override
        public double squareLength()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_squareLength(this.nativeRef);
        }
        private native double native_squareLength(long _nativeRef);

        @Override
        public double getLength()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getLength(this.nativeRef);
        }
        private native double native_getLength(long _nativeRef);

        @Override
        public void setLength(double length)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setLength(this.nativeRef, length);
        }
        private native void native_setLength(long _nativeRef, double length);

        @Override
        public Vec3 normalize()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_normalize(this.nativeRef);
        }
        private native Vec3 native_normalize(long _nativeRef);

        @Override
        public boolean isZero()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_isZero(this.nativeRef);
        }
        private native boolean native_isZero(long _nativeRef);

        @Override
        public Vec3 getXyz()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getXyz(this.nativeRef);
        }
        private native Vec3 native_getXyz(long _nativeRef);

        @Override
        public void set(double x, double y, double z)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_set(this.nativeRef, x, y, z);
        }
        private native void native_set(long _nativeRef, double x, double y, double z);

        @Override
        public double dot(Vec3 v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_dot(this.nativeRef, v);
        }
        private native double native_dot(long _nativeRef, Vec3 v);

        @Override
        public Vec3 cross(Vec3 v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_cross(this.nativeRef, v);
        }
        private native Vec3 native_cross(long _nativeRef, Vec3 v);

        @Override
        public double distance(Vec3 v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_distance(this.nativeRef, v);
        }
        private native double native_distance(long _nativeRef, Vec3 v);

        @Override
        public void invert()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_invert(this.nativeRef);
        }
        private native void native_invert(long _nativeRef);
    }
}
