//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ARUISpriteTexture;
@protocol MTLBuffer;

__attribute__((visibility("hidden")))
@interface ARUISpritesRenderer : NSObject
{
    id<MTLBuffer> _spriteVertexBuffer;
    id<MTLBuffer> _spriteIndexBuffer;
    unsigned long long _numIndicies;
    CDStruct_ee1f7a4d *_vertexAttributes;
    struct *_uniforms;
    ARUISpriteTexture *_texture;
}

@property (strong, nonatomic) ARUISpriteTexture *texture; // @synthesize texture=_texture;
@property (nonatomic) struct *uniforms; // @synthesize uniforms=_uniforms;
@property (nonatomic) CDStruct_ee1f7a4d *vertexAttributes; // @synthesize vertexAttributes=_vertexAttributes;

+ (void)clearCaches;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDevice:(id)arg1 maximumRingCount:(unsigned long long)arg2;
- (void)renderRings:(id)arg1 withCommandEncoder:(id)arg2 forState:(id)arg3;

@end
