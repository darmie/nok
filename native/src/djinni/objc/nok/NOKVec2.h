// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#import <Foundation/Foundation.h>
@class NOKVec2;


@interface NOKVec2 : NSObject

- (double)getX;

- (double)getY;

- (void)add:(nullable NOKVec2 *)v;

- (void)addScaledVector:(nullable NOKVec2 *)v;

- (void)sub:(nullable NOKVec2 *)v;

- (void)multiply:(double)i;

- (void)divide:(double)i;

- (double)squareLength;

- (double)getLength;

- (void)setLength:(double)length;

- (nullable NOKVec2 *)normalize;

- (BOOL)isZero;

- (nullable NOKVec2 *)getXy;

- (void)set:(double)i
          v:(double)v;

- (double)dot:(nullable NOKVec2 *)v;

- (nullable NOKVec2 *)cross:(nullable NOKVec2 *)v;

- (double)distance:(nullable NOKVec2 *)v;

- (void)invert;

+ (nullable NOKVec2 *)create:(double)x
                           y:(double)y;

@end
