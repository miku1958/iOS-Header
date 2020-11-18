//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString;

@interface TSDGLFrameBuffer : NSObject
{
    NSArray *_textureConfigs;
    NSDictionary *_namesToTextureDict;
    unsigned int *_textures[16];
    unsigned long long _textureCount[16];
    unsigned long long _currentTextureIndex[16];
    unsigned long long _desiredTextureIndex[16];
    unsigned int _framebuffer;
    BOOL _isUsingNonDefaultAttachments;
    BOOL _isBound;
    BOOL _shouldDeleteTexturesOnTeardown;
    NSString *_name;
    struct CGSize _size;
}

@property (readonly, nonatomic) BOOL isBound; // @synthesize isBound=_isBound;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) BOOL shouldDeleteTexturesOnTeardown; // @synthesize shouldDeleteTexturesOnTeardown=_shouldDeleteTexturesOnTeardown;
@property (readonly, nonatomic) struct CGSize size; // @synthesize size=_size;

+ (int)currentGLFramebuffer;
+ (void)setCurrentGLFramebuffer:(int)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1;
- (unsigned int)GLTextureAtIndex:(unsigned long long)arg1 attachment:(unsigned int)arg2;
- (unsigned int)GLTextureNamed:(id)arg1;
- (void)bindFramebuffer;
- (unsigned int)currentGLTexture;
- (unsigned int)currentGLTextureAtAttachment:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)initWithSize:(struct CGSize)arg1;
- (id)initWithSize:(struct CGSize)arg1 textureConfigs:(id)arg2;
- (id)initWithSize:(struct CGSize)arg1 textureCount:(unsigned long long)arg2;
- (void)setCurrentTextureIndex:(unsigned long long)arg1;
- (void)setCurrentTextureIndex:(unsigned long long)arg1 atAttachment:(unsigned int)arg2;
- (void)setCurrentTextureNamed:(id)arg1;
- (void)setCurrentTextureToNext;
- (void)setCurrentTextureToNextAtAttachment:(unsigned int)arg1;
- (void)setupFramebufferIfNecessary;
- (void)teardown;
- (void)unbindFramebufferAndBindGLFramebuffer:(int)arg1;

@end

