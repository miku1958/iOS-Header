//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ModelIO/MDLNamed-Protocol.h>

@class MISSING_TYPE, NSData, NSString;

@interface MDLTexture : NSObject <MDLNamed>
{
    NSString *_name;
    struct MDLTextureData _textureData;
    long long _channelEncoding;
    NSData *_topLeftOriginData[14];
    NSData *_bottomLeftOriginData[14];
    BOOL _selfCreating;
    BOOL _alphaValuesSet;
    BOOL _hasAlphaValues;
}

@property (readonly, nonatomic) unsigned long long channelCount;
@property (readonly, nonatomic) long long channelEncoding; // @synthesize channelEncoding=_channelEncoding;
@property (readonly, nonatomic) MISSING_TYPE *dimensions;
@property (nonatomic) BOOL hasAlphaValues;
@property (nonatomic) BOOL isCube;
@property (readonly, nonatomic) unsigned long long mipLevelCount;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) long long rowStride;

+ (id)_textureCubeWithSingleImageNamed:(id)arg1 bundle:(id)arg2;
+ (id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions: /* Error: Ran out of types for this method. */;
+ (id)irradianceTextureCubeWithTexture:(id)arg1 name:(id)arg2 dimensions:(float)arg3 roughness: /* Error: Ran out of types for this method. */;
+ (id)textureCubeWithImagesNamed:(id)arg1;
+ (id)textureCubeWithImagesNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureFromResource:(id)arg1;
+ (id)textureNamed:(id)arg1;
+ (id)textureNamed:(id)arg1 assetResolver:(id)arg2;
+ (id)textureNamed:(id)arg1 bundle:(id)arg2;
+ (id)textureResourceNamed:(id)arg1 assetResolver:(id)arg2;
+ (id)textureWithData:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3;
+ (id)textureWithURL:(id)arg1;
+ (id)textureWithURL:(id)arg1 offset:(unsigned long long)arg2 size:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)allocateDataAtLevel:(long long)arg1;
- (void)clearTexelData;
- (id)generateDataAtLevel:(long long)arg1 selector:(SEL)arg2;
- (struct CGImage *)imageFromTexture;
- (struct CGImage *)imageFromTextureAtLevel:(unsigned long long)arg1;
- (id)init;
- (id)initWithData:(id)arg1 topLeftOrigin:(BOOL)arg2 name:(id)arg3 dimensions:(long long)arg4 rowStride:(unsigned long long)arg5 channelCount:(long long)arg6 channelEncoding:(BOOL)arg7 isCube: /* Error: Ran out of types for this method. */;
- (void)loadDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 selector:(SEL)arg3;
- (void)loadDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2 selector:(SEL)arg3;
- (void)setTexelDataWithBottomLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (void)setTexelDataWithTopLeftOrigin:(id)arg1 atMipLevel:(long long)arg2;
- (id)texelDataWithBottomLeftOrigin;
- (id)texelDataWithBottomLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2;
- (id)texelDataWithTopLeftOrigin;
- (id)texelDataWithTopLeftOrigin:(unsigned long long)arg1;
- (id)texelDataWithTopLeftOriginAtMipLevel:(long long)arg1 create:(BOOL)arg2;
- (struct MDLTextureData *)textureData;
- (BOOL)writeToURL:(id)arg1;
- (BOOL)writeToURL:(id)arg1 level:(unsigned long long)arg2;
- (BOOL)writeToURL:(id)arg1 type:(struct __CFString *)arg2;
- (BOOL)writeToURL:(id)arg1 type:(struct __CFString *)arg2 level:(unsigned long long)arg3;

@end

