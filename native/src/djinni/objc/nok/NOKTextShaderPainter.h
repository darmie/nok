// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import <Foundation/Foundation.h>
@class NOKKavur;
@class NOKMat3;
@class NOKMat4;
@class NOKPipelineState;
@class NOKTextShaderPainter;


@interface NOKTextShaderPainter : NSObject

+ (nullable NOKTextShaderPainter *)create;

- (int32_t)getFontSize;

- (nullable NOKPipelineState *)getPipeline;

- (void)setPipeline:(nullable NOKPipelineState *)p;

- (void)setProjection:(nullable NOKMat4 *)projectionMatrix;

- (void)setBilinearFilter:(BOOL)bilinear;

- (void)setFont:(nullable NOKKavur *)font;

- (void)drawString:(nonnull NSString *)text
             start:(int32_t)start
            length:(int32_t)length
           opacity:(float)opacity
             color:(double)color
                 x:(float)x
                 y:(float)y
    transformation:(nullable NOKMat3 *)transformation
        fontGlyphs:(nonnull NSArray<NSNumber *> *)fontGlyphs;

- (void)end;

@end