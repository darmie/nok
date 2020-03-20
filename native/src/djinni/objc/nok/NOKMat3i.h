// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#import <Foundation/Foundation.h>
@class NOKMat3i;
@class NOKVec3i;

extern int32_t const NOKMat3iWidth;
extern int32_t const NOKMat3iHeight;

@interface NOKMat3i : NSObject

- (float)get:(int32_t)row
         col:(int32_t)col;

- (void)set:(int32_t)row
        col:(int32_t)col
          v:(int32_t)v;

+ (nullable NOKMat3i *)orthogonalProjection:(float)left
                                      right:(float)right
                                     bottom:(float)bottom
                                        top:(float)top
                                         zn:(float)zn
                                         zf:(float)zf;

+ (nullable NOKMat3i *)perspective:(float)left
                             right:(float)right
                               top:(float)top
                            bottom:(float)bottom
                              near:(float)near
                               far:(float)far;

+ (nullable NOKMat3i *)perspectiveFOV:(float)fov
                               aspect:(float)aspect
                                 near:(float)near
                                  far:(float)far;

+ (nullable NOKMat3i *)lookAt:(nullable NOKVec3i *)eye
                           at:(nullable NOKVec3i *)at
                           up:(nullable NOKVec3i *)up;

+ (nullable NOKMat3i *)lookAlong:(nullable NOKVec3i *)axis
                             eye:(nullable NOKVec3i *)eye
                              up:(nullable NOKVec3i *)up;

+ (nullable NOKMat3i *)translation:(float)x
                                 y:(float)y;

+ (nullable NOKMat3i *)movement:(float)x
                              y:(float)y
                              z:(float)z;

+ (nullable NOKMat3i *)identity;

+ (nullable NOKMat3i *)scale:(float)scale;

+ (nullable NOKMat3i *)rotationX:(float)alpha;

+ (nullable NOKMat3i *)rotationY:(float)alpha;

+ (nullable NOKMat3i *)rotationZ:(float)alpha;

+ (nullable NOKMat3i *)rotation:(float)yaw
                          pitch:(float)pitch
                           roll:(float)roll;

+ (nullable NOKMat3i *)create;

+ (nullable NOKMat3i *)from:(nullable NOKMat3i *)mat;

- (nullable NOKMat3i *)add:(nullable NOKMat3i *)mat;

- (nullable NOKMat3i *)sub:(nullable NOKMat3i *)mat;

- (nullable NOKMat3i *)multiply:(int32_t)i;

- (nullable NOKMat3i *)clone;

- (nullable NOKMat3i *)transpose;

- (nullable NOKMat3i *)transpose3x3;

- (int32_t)trace;

- (int32_t)determinant;

+ (nullable NOKMat3i *)linearInterpolate:(nullable NOKMat3i *)a
                                       b:(nullable NOKMat3i *)b
                                    prop:(float)prop;

@end