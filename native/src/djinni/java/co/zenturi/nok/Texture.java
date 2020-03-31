// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

package co.zenturi.nok;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Texture {
    public abstract void Set(TextureUnit unit);

    public abstract void SetImage(TextureUnit unit);

    public abstract byte[] lock();

    public abstract void unlock();

    public abstract void clear(int x, int y, int z, int width, int height, int depth, int color);

    public abstract void upload(byte[] data, int stride);

    public abstract void generateMipmaps(int levels);

    public abstract void setMipMap(Texture mipmap, int level);

    public abstract void stride();

    public abstract int getTexHeight();

    public abstract int getTexWidth();

    /** get_contextId(): i32; */
    public abstract void setTexWidth(int width);

    public abstract void setTexHeight(int height);

    public abstract int getTexDepth();

    public abstract void setTexDepth(int depth);

    public abstract int at(int x, int y);

    public abstract byte[] getPixels();

    public abstract ImageFormat getFormat();

    public abstract boolean readable();

    public abstract ImageCompression getCompression();

    public abstract byte[] getData();

    public abstract int getDataSize();

    public abstract int getHeight();

    public abstract int getWidth();

    public abstract void setWidth(int width);

    public abstract void setHeight(int height);

    public abstract int getDepth();

    public abstract void setDepth(int depth);

    public static native Texture create(int width, int height, ImageFormat format, boolean readable);

    public static native Texture create3D(int width, int height, int depth, ImageFormat format, boolean readable);

    public static native Texture fromData(byte[] data, int width, int height, ImageFormat format, boolean readable);

    public static native Texture fromData3D(byte[] data, int width, int height, int depth, ImageFormat format, boolean readable);

    private static final class CppProxy extends Texture
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
        public void Set(TextureUnit unit)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_Set(this.nativeRef, unit);
        }
        private native void native_Set(long _nativeRef, TextureUnit unit);

        @Override
        public void SetImage(TextureUnit unit)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_SetImage(this.nativeRef, unit);
        }
        private native void native_SetImage(long _nativeRef, TextureUnit unit);

        @Override
        public byte[] lock()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_lock(this.nativeRef);
        }
        private native byte[] native_lock(long _nativeRef);

        @Override
        public void unlock()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_unlock(this.nativeRef);
        }
        private native void native_unlock(long _nativeRef);

        @Override
        public void clear(int x, int y, int z, int width, int height, int depth, int color)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_clear(this.nativeRef, x, y, z, width, height, depth, color);
        }
        private native void native_clear(long _nativeRef, int x, int y, int z, int width, int height, int depth, int color);

        @Override
        public void upload(byte[] data, int stride)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_upload(this.nativeRef, data, stride);
        }
        private native void native_upload(long _nativeRef, byte[] data, int stride);

        @Override
        public void generateMipmaps(int levels)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_generateMipmaps(this.nativeRef, levels);
        }
        private native void native_generateMipmaps(long _nativeRef, int levels);

        @Override
        public void setMipMap(Texture mipmap, int level)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setMipMap(this.nativeRef, mipmap, level);
        }
        private native void native_setMipMap(long _nativeRef, Texture mipmap, int level);

        @Override
        public void stride()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_stride(this.nativeRef);
        }
        private native void native_stride(long _nativeRef);

        @Override
        public int getTexHeight()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTexHeight(this.nativeRef);
        }
        private native int native_getTexHeight(long _nativeRef);

        @Override
        public int getTexWidth()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTexWidth(this.nativeRef);
        }
        private native int native_getTexWidth(long _nativeRef);

        @Override
        public void setTexWidth(int width)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setTexWidth(this.nativeRef, width);
        }
        private native void native_setTexWidth(long _nativeRef, int width);

        @Override
        public void setTexHeight(int height)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setTexHeight(this.nativeRef, height);
        }
        private native void native_setTexHeight(long _nativeRef, int height);

        @Override
        public int getTexDepth()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getTexDepth(this.nativeRef);
        }
        private native int native_getTexDepth(long _nativeRef);

        @Override
        public void setTexDepth(int depth)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setTexDepth(this.nativeRef, depth);
        }
        private native void native_setTexDepth(long _nativeRef, int depth);

        @Override
        public int at(int x, int y)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_at(this.nativeRef, x, y);
        }
        private native int native_at(long _nativeRef, int x, int y);

        @Override
        public byte[] getPixels()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getPixels(this.nativeRef);
        }
        private native byte[] native_getPixels(long _nativeRef);

        @Override
        public ImageFormat getFormat()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getFormat(this.nativeRef);
        }
        private native ImageFormat native_getFormat(long _nativeRef);

        @Override
        public boolean readable()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_readable(this.nativeRef);
        }
        private native boolean native_readable(long _nativeRef);

        @Override
        public ImageCompression getCompression()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getCompression(this.nativeRef);
        }
        private native ImageCompression native_getCompression(long _nativeRef);

        @Override
        public byte[] getData()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getData(this.nativeRef);
        }
        private native byte[] native_getData(long _nativeRef);

        @Override
        public int getDataSize()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDataSize(this.nativeRef);
        }
        private native int native_getDataSize(long _nativeRef);

        @Override
        public int getHeight()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getHeight(this.nativeRef);
        }
        private native int native_getHeight(long _nativeRef);

        @Override
        public int getWidth()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getWidth(this.nativeRef);
        }
        private native int native_getWidth(long _nativeRef);

        @Override
        public void setWidth(int width)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setWidth(this.nativeRef, width);
        }
        private native void native_setWidth(long _nativeRef, int width);

        @Override
        public void setHeight(int height)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setHeight(this.nativeRef, height);
        }
        private native void native_setHeight(long _nativeRef, int height);

        @Override
        public int getDepth()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_getDepth(this.nativeRef);
        }
        private native int native_getDepth(long _nativeRef);

        @Override
        public void setDepth(int depth)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setDepth(this.nativeRef, depth);
        }
        private native void native_setDepth(long _nativeRef, int depth);
    }
}
