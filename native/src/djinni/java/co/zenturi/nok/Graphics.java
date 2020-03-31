// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

package co.zenturi.nok;

import java.util.ArrayList;
import java.util.concurrent.atomic.AtomicBoolean;

public abstract class Graphics {
    public static final int CLEARCOLORFLAG = 1;

    public static final int CLEARDEPTHFLAG = 2;

    public static final int CLEARSTENCILFLAG = 4;

    public static native void setBool(ConstantLocation location, boolean value);

    public static native void setInt(ConstantLocation location, int value);

    public static native void setInt2(ConstantLocation location, int value1, int value2);

    public static native void setInt3(ConstantLocation location, int value1, int value2, int value3);

    public static native void setInt4(ConstantLocation location, int value1, int value2, int value3, int value4);

    public static native void setInts(ConstantLocation location, ArrayList<Integer> values, int count);

    public static native void setFloat2(ConstantLocation location, float value1, float value2);

    public static native void setFloat3(ConstantLocation location, float value1, float value2, float value3);

    public static native void setFloat4(ConstantLocation location, int value1, float value2, float value3, float value4);

    public static native void setFloats(ConstantLocation location, ArrayList<Float> values, float count);

    public static native void setMatrix3(ConstantLocation location, Mat3 mat);

    public static native void setMatrix4(ConstantLocation location, Mat4 mat);

    public static native void setVertexBuffer(VertexBuffer buf);

    public static native void setVertexBuffers(ArrayList<VertexBuffer> bufs, int count);

    public static native void setIndexBuffer(IndexBuffer buf);

    public static native void setTexture(TextureUnit unit, Texture texture);

    public static native void setTextureArray(TextureUnit unit, TextureArray textureArray);

    public static native void setPipeline(PipelineState pipeline);

    public static native void setStencilReferenceValue(int value);

    public static native void drawIndexedVertices(int start, int count);

    public static native void drawIndexedVerticesInstanced(int instanceCount, int start, int count);

    public static native int antialiasingSamples();

    public static native void setAntialiasingSamples(int samples);

    public static native boolean renderTargetsInvertedY();

    public static native void setRenderTargets(ArrayList<RenderTarget> targets, int count);

    public static native void setRenderTarget(RenderTarget target);

    public static native void setRenderTargetFace(RenderTarget texture, int face);

    public static native void restoreRenderTarget();

    public static native void begin(int win);

    public static native void end(int win);

    public static native boolean swapBuffers();

    public static native void viewport(int x, int y, int width, int height);

    public static native void scissor(int x, int y, int width, int height);

    public static native void disableScissor();

    public static native void setTextureAddressing(TextureUnit unit, TexDir dir, TextureAddressing addressing);

    public static native void setTextureMagnificationFilter(TextureUnit unit, TextureFilter filer);

    public static native void setTextureMinificationFilter(TextureUnit unit, TextureFilter filer);

    public static native void setTextureMipmapFilter(TextureUnit unit, MipmapFilter filer);

    public static native void setTexture3DAddressing(TextureUnit unit, TexDir dir, TextureAddressing addressing);

    public static native void setTexture3DMagnificationFilter(TextureUnit unit, TextureFilter filer);

    public static native void setTexture3DMinificationFilter(TextureUnit unit, TextureFilter filer);

    public static native void setTexture3DMipmapFilter(TextureUnit unit, MipmapFilter filer);

    public static native void setTextureCompareMode(TextureUnit unit, boolean enabled);

    public static native void setCubeMapCompareMode(TextureUnit unit, boolean enabled);

    public static native void setTextureOperation(TextureOperation operation, TextureArgument arg1, TextureArgument arg2);

    public static native boolean nonPow2TexturesSupported();

    public static native boolean getFullscreen();

    public static native void init(int windowId, int depthBufferBits, int stencilBufferBits, boolean vsync);

    public static native void destroy(int windowId);

    public static native void flush();

    public static native boolean initOcclusionQuery(ArrayList<Double> occlusionQuery);

    public static native void deleteOcclusionQuery(double occlusionQuery);

    public static native void renderOcclusionQuery(double occlusionQuery, int triangles);

    public static native boolean isQueryResultsAvailable(double occlusionQuery);

    public static native void getQueryResults(double occlusionQuery, ArrayList<Double> pixelCount);

    public static native void clear(int flags, double color, float depth, int stencil);

    private static final class CppProxy extends Graphics
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
    }
}
