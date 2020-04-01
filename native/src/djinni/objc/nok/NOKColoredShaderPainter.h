// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import <Foundation/Foundation.h>
@class NOKColoredShaderPainter;
@class NOKMat4;
@class NOKPipelineState;


@interface NOKColoredShaderPainter : NSObject

+ (nullable NOKColoredShaderPainter *)create;

- (nullable NOKPipelineState *)getPipeline;

- (void)setPipeline:(nullable NOKPipelineState *)p;

- (void)setProjection:(nullable NOKMat4 *)projectionMatrix;

- (void)setRectVertices:(float)bottomleftx
            bottomlefty:(float)bottomlefty
               topleftx:(float)topleftx
              toprightx:(float)toprightx
              toprighty:(float)toprighty
           bottomrightx:(float)bottomrightx
           bottomrighty:(float)bottomrighty;

- (void)setRectColors:(float)opacity
                color:(double)color;

- (void)fillRect:(float)opacity
           color:(double)color
     bottomleftx:(float)bottomleftx
     bottomlefty:(float)bottomlefty
        topleftx:(float)topleftx
       toprightx:(float)toprightx
       toprighty:(float)toprighty
    bottomrightx:(float)bottomrightx
    bottomrighty:(float)bottomrighty;

- (void)fillTriangle:(float)opacity
               color:(double)color
                  x1:(float)x1
                  y1:(float)y1
                  x2:(float)x2
                  y2:(float)y2
                  x3:(float)x3
                  y3:(float)y3;

- (void)endTris:(BOOL)rectsDone;

- (void)endRects:(BOOL)trisDone;

- (void)end;

@end