// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import "NOKFontStyle.h"


@implementation NOKFontStyle

- (nonnull instancetype)initWithBold:(BOOL)bold
                              italic:(BOOL)italic
                          underlined:(BOOL)underlined
{
    if (self = [super init]) {
        _bold = bold;
        _italic = italic;
        _underlined = underlined;
    }
    return self;
}

+ (nonnull instancetype)fontStyleWithBold:(BOOL)bold
                                   italic:(BOOL)italic
                               underlined:(BOOL)underlined
{
    return [[self alloc] initWithBold:bold
                               italic:italic
                           underlined:underlined];
}

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@ %p bold:%@ italic:%@ underlined:%@>", self.class, (void *)self, @(self.bold), @(self.italic), @(self.underlined)];
}

@end
