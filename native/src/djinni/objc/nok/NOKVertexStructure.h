// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from nok.djinni

#import "NOKVertexAttribute.h"
#import "NOKVertexData.h"
#import <Foundation/Foundation.h>
@class NOKVertexElement;
@class NOKVertexStructure;

extern int32_t const NOKVertexStructureMaxElementsCount;

@interface NOKVertexStructure : NSObject

- (nonnull NSArray<NOKVertexElement *> *)getElements;

- (int32_t)getSize;

- (void)setSize:(int32_t)s;

- (BOOL)instanced;

+ (nullable NOKVertexStructure *)create;

- (void)add:(nonnull NSString *)name
       data:(NOKVertexData)data;

- (void)addAttribute:(NOKVertexAttribute)attribute
                data:(NOKVertexData)data;

@end
