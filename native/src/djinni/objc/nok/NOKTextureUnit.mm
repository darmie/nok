// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import "NOKTextureUnit.h"


@implementation NOKTextureUnit

- (nonnull instancetype)initWithValue:(int32_t)value
{
    if (self = [super init]) {
        _value = value;
    }
    return self;
}

+ (nonnull instancetype)textureUnitWithValue:(int32_t)value
{
    return [(NOKTextureUnit*)[self alloc] initWithValue:value];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p value:%@>", self.class, (void *)self, @(self.value)];
}

@end