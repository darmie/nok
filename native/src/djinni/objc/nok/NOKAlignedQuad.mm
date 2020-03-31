// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import "NOKAlignedQuad.h"


@implementation NOKAlignedQuad

- (nonnull instancetype)initWithX0:(float)x0
                                y0:(float)y0
                                s0:(float)s0
                                t0:(float)t0
                                x1:(float)x1
                                y1:(float)y1
                                s1:(float)s1
                                t1:(float)t1
                          xadvance:(float)xadvance
{
    if (self = [super init]) {
        _x0 = x0;
        _y0 = y0;
        _s0 = s0;
        _t0 = t0;
        _x1 = x1;
        _y1 = y1;
        _s1 = s1;
        _t1 = t1;
        _xadvance = xadvance;
    }
    return self;
}

+ (nonnull instancetype)alignedQuadWithX0:(float)x0
                                       y0:(float)y0
                                       s0:(float)s0
                                       t0:(float)t0
                                       x1:(float)x1
                                       y1:(float)y1
                                       s1:(float)s1
                                       t1:(float)t1
                                 xadvance:(float)xadvance
{
    return [[self alloc] initWithX0:x0
                                 y0:y0
                                 s0:s0
                                 t0:t0
                                 x1:x1
                                 y1:y1
                                 s1:s1
                                 t1:t1
                           xadvance:xadvance];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p x0:%@ y0:%@ s0:%@ t0:%@ x1:%@ y1:%@ s1:%@ t1:%@ xadvance:%@>", self.class, (void *)self, @(self.x0), @(self.y0), @(self.s0), @(self.t0), @(self.x1), @(self.y1), @(self.s1), @(self.t1), @(self.xadvance)];
}

@end
