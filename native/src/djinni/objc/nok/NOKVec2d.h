// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from math.djinni

#import <Foundation/Foundation.h>
@class NOKVec2d;


@interface NOKVec2d : NSObject

- (double)getX;

- (double)getY;

- (void)setX:(double)x;

- (void)setY:(double)y;

- (void)add:(nullable NOKVec2d *)v;

- (void)addScaledVector:(nullable NOKVec2d *)v;

- (void)sub:(nullable NOKVec2d *)v;

- (void)multiply:(double)i;

- (void)divide:(double)i;

- (double)squareLength;

- (double)getLength;

- (void)setLength:(double)length;

- (nullable NOKVec2d *)normalize;

- (BOOL)isZero;

- (double)get:(double)i;

- (void)set:(double)i
          v:(double)v;

- (double)dot:(nullable NOKVec2d *)v;

- (nullable NOKVec2d *)cross:(nullable NOKVec2d *)v;

- (double)distance:(nullable NOKVec2d *)v;

- (void)invert;

+ (nullable NOKVec2d *)create:(double)x
                            y:(double)y;

@end