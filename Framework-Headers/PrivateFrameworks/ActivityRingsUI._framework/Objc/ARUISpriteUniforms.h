//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ARUISpriteUniforms : NSObject
{
    CDStruct_8ce0c528 _uniforms;
    CDStruct_d98db243 _vertexAttributes;
}

@property (readonly, nonatomic) CDStruct_8ce0c528 uniforms; // @synthesize uniforms=_uniforms;
@property (readonly, nonatomic) CDStruct_d98db243 vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;

- (void)_updateUniformsWithSprite:(id)arg1;
- (void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2;
- (id)initWithSprite:(id)arg1 inContext:(id)arg2;
- (void *)uniformsBytes;
- (void *)vertexAttributesBytes;

@end
