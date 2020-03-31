// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

package co.zenturi.nok;

import com.facebook.react.bridge.Callback;
import com.facebook.react.bridge.Promise;
import com.facebook.react.bridge.ReactApplicationContext;
import com.facebook.react.bridge.ReactContextBaseJavaModule;
import com.facebook.react.bridge.ReactMethod;
import com.facebook.react.bridge.ReadableArray;
import com.facebook.react.bridge.ReadableMap;
import com.facebook.react.bridge.WritableArray;
import com.facebook.react.bridge.WritableMap;
import com.facebook.react.module.annotations.ReactModule;
import com.rushingvise.reactcpp.ReactDjinni;
import java.util.HashMap;
import java.util.Map;
import java.util.concurrent.atomic.AtomicBoolean;

@ReactModule(name = "Vec4Module")
public final class Vec4Module extends ReactContextBaseJavaModule {
    private final CppProxy mModule;

    public Vec4Module(ReactApplicationContext reactContext) {
        super(reactContext);
        mModule = create(ReactDjinni.createReactBridge(reactContext));
    }

    @Override
    public String getName() {
        return "Vec4Module";
    }

    private static native CppProxy create(com.rushingvise.reactcpp.ReactBridge bridge);

    @ReactMethod
    public void getX(Promise promise) {
        mModule.getX(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void getY(Promise promise) {
        mModule.getY(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void getZ(Promise promise) {
        mModule.getZ(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void getW(Promise promise) {
        mModule.getW(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void add(ReadableMap v) {
        mModule.add(ReactDjinni.wrap(v));
    }

    @ReactMethod
    public void addScaledVector(ReadableMap v) {
        mModule.addScaledVector(ReactDjinni.wrap(v));
    }

    @ReactMethod
    public void sub(ReadableMap v) {
        mModule.sub(ReactDjinni.wrap(v));
    }

    @ReactMethod
    public void multiply(double i) {
        mModule.multiply(i);
    }

    @ReactMethod
    public void divide(double i) {
        mModule.divide(i);
    }

    @ReactMethod
    public void squareLength(Promise promise) {
        mModule.squareLength(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void getLength(Promise promise) {
        mModule.getLength(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void setLength(double length) {
        mModule.setLength(length);
    }

    @ReactMethod
    public void normalize(Promise promise) {
        mModule.normalize(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void isZero(Promise promise) {
        mModule.isZero(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void getXyz(Promise promise) {
        mModule.getXyz(ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void set(double x, double y, double z, double w) {
        mModule.set(x, y, z, w);
    }

    @ReactMethod
    public void dot(ReadableMap v, Promise promise) {
        mModule.dot(ReactDjinni.wrap(v), ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void cross(ReadableMap v, Promise promise) {
        mModule.cross(ReactDjinni.wrap(v), ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void distance(ReadableMap v, Promise promise) {
        mModule.distance(ReactDjinni.wrap(v), ReactDjinni.wrap(promise));
    }

    @ReactMethod
    public void invert() {
        mModule.invert();
    }

    private static final class CppProxy
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

        public void getX(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getX(this.nativeRef, promise);
        }
        private native void native_getX(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void getY(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getY(this.nativeRef, promise);
        }
        private native void native_getY(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void getZ(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getZ(this.nativeRef, promise);
        }
        private native void native_getZ(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void getW(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getW(this.nativeRef, promise);
        }
        private native void native_getW(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void add(com.rushingvise.reactcpp.JavascriptMap v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_add(this.nativeRef, v);
        }
        private native void native_add(long _nativeRef, com.rushingvise.reactcpp.JavascriptMap v);

        public void addScaledVector(com.rushingvise.reactcpp.JavascriptMap v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_addScaledVector(this.nativeRef, v);
        }
        private native void native_addScaledVector(long _nativeRef, com.rushingvise.reactcpp.JavascriptMap v);

        public void sub(com.rushingvise.reactcpp.JavascriptMap v)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_sub(this.nativeRef, v);
        }
        private native void native_sub(long _nativeRef, com.rushingvise.reactcpp.JavascriptMap v);

        public void multiply(double i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_multiply(this.nativeRef, i);
        }
        private native void native_multiply(long _nativeRef, double i);

        public void divide(double i)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_divide(this.nativeRef, i);
        }
        private native void native_divide(long _nativeRef, double i);

        public void squareLength(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_squareLength(this.nativeRef, promise);
        }
        private native void native_squareLength(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void getLength(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getLength(this.nativeRef, promise);
        }
        private native void native_getLength(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void setLength(double length)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_setLength(this.nativeRef, length);
        }
        private native void native_setLength(long _nativeRef, double length);

        public void normalize(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_normalize(this.nativeRef, promise);
        }
        private native void native_normalize(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void isZero(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_isZero(this.nativeRef, promise);
        }
        private native void native_isZero(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void getXyz(com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_getXyz(this.nativeRef, promise);
        }
        private native void native_getXyz(long _nativeRef, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void set(double x, double y, double z, double w)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_set(this.nativeRef, x, y, z, w);
        }
        private native void native_set(long _nativeRef, double x, double y, double z, double w);

        public void dot(com.rushingvise.reactcpp.JavascriptMap v, com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_dot(this.nativeRef, v, promise);
        }
        private native void native_dot(long _nativeRef, com.rushingvise.reactcpp.JavascriptMap v, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void cross(com.rushingvise.reactcpp.JavascriptMap v, com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_cross(this.nativeRef, v, promise);
        }
        private native void native_cross(long _nativeRef, com.rushingvise.reactcpp.JavascriptMap v, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void distance(com.rushingvise.reactcpp.JavascriptMap v, com.rushingvise.reactcpp.JavascriptPromise promise)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_distance(this.nativeRef, v, promise);
        }
        private native void native_distance(long _nativeRef, com.rushingvise.reactcpp.JavascriptMap v, com.rushingvise.reactcpp.JavascriptPromise promise);

        public void invert()
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            native_invert(this.nativeRef);
        }
        private native void native_invert(long _nativeRef);
    }
}
