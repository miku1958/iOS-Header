//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextureIO/NSCopying-Protocol.h>

@class MISSING_TYPE, NSArray, NSMutableArray;
@protocol TXRBufferAllocator;

@interface TXRTexture : NSObject <NSCopying>
{
    id<TXRBufferAllocator> _bufferAllocator;
    NSMutableArray *_mipmapLevels;
    MISSING_TYPE *_dimensions;
    BOOL _cubemap;
    unsigned long long _pixelFormat;
    unsigned long long _alphaInfo;
}

@property (readonly, nonatomic) unsigned long long alphaInfo; // @synthesize alphaInfo=_alphaInfo;
@property (readonly, nonatomic) BOOL cubemap; // @synthesize cubemap=_cubemap;
@property (readonly, nonatomic) MISSING_TYPE *dimensions; // @synthesize dimensions=_dimensions;
@property (readonly, nonatomic) NSArray *mipmapLevels; // @synthesize mipmapLevels=_mipmapLevels;
@property (readonly, nonatomic) unsigned long long pixelFormat; // @synthesize pixelFormat=_pixelFormat;

- (void).cxx_destruct;
- (id)copyWithPixelFormat:(unsigned long long)arg1 options:(id)arg2 bufferAllocator:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)exportToURL:(id)arg1 error:(id *)arg2;
- (id)exportToXCAssetWithName:(id)arg1 setAttributes:(id)arg2 textureConfigList:(id)arg3 location:(id)arg4 error:(id *)arg5;
- (void)generateMipmapsForRange:(struct _NSRange)arg1 filter:(unsigned long long)arg2 error:(id *)arg3;
- (id)initWithContentsOfURL:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithData:(id)arg1 bufferAllocator:(id)arg2 options:(id)arg3 error:(id *)arg4;
- (id)initWithDataSourceProvider:(id)arg1;
- (id)initWithDimensions:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 alphaInfo:(unsigned long long)arg3 mipmapLevelCount:(unsigned long long)arg4 arrayLength:(BOOL)arg5 cubemap:(id)arg6 bufferAllocator: /* Error: Ran out of types for this method. */;
- (void)reformat:(unsigned long long)arg1 gammaDegamma:(BOOL)arg2 bufferAllocator:(id)arg3 error:(id *)arg4;

@end
