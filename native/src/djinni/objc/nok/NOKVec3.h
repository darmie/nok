// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#import <Foundation/Foundation.h>
@class NOKVec3;


@interface NOKVec3 : NSObject

- (float)getX;

- (float)getY;

- (float)getZ;

- (void)setX:(float)x;

- (void)setY:(float)y;

- (void)setZ:(float)z;

- (void)add:(nullable NOKVec3 *)v;

- (void)addScaledVector:(nullable NOKVec3 *)v;

- (void)sub:(nullable NOKVec3 *)v;

- (void)multiply:(float)i;

- (void)divide:(float)i;

- (float)squareLength;

- (float)getLength;

- (void)setLength:(float)length;

- (nullable NOKVec3 *)normalize;

- (BOOL)isZero;

- (float)get:(float)i;

- (void)set:(float)i
          v:(float)v;

- (float)dot:(nullable NOKVec3 *)v;

- (nullable NOKVec3 *)cross:(nullable NOKVec3 *)v;

- (float)distance:(nullable NOKVec3 *)v;

+ (nullable NOKVec3 *)create:(float)x
                           y:(float)y
                           z:(float)z;

@end