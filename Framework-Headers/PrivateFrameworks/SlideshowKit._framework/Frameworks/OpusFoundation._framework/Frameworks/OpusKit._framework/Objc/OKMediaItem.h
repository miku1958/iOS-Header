//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, OKPresentation;

@interface OKMediaItem : NSObject
{
    OKPresentation *_presentation;
    NSURL *_uniqueURL;
    NSString *_uniqueURLNormalisedString;
    unsigned long long _uniqueURLHash;
}

@property (nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
@property (readonly, copy, nonatomic) NSURL *uniqueURL; // @synthesize uniqueURL=_uniqueURL;
@property (readonly, copy, nonatomic) NSString *uniqueURLNormalisedString; // @synthesize uniqueURLNormalisedString=_uniqueURLNormalisedString;

+ (BOOL)isRemote;
+ (id)scheme;
+ (id)urlForMediaObject:(id)arg1;
- (id)_resourcesDiskCacheManager;
- (id)avAsset;
- (id)avAssetWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)createMetadataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)detectRegionsOfInterestWithCompletionHandler:(CDUnknownBlockType)arg1 force:(BOOL)arg2 cache:(BOOL)arg3 colorSpace:(id)arg4;
- (id)diskCachedMetadata;
- (id)diskCachedThumbnailImageForResolution:(unsigned long long)arg1;
- (BOOL)hasDiskCachedMetadata:(id *)arg1;
- (BOOL)hasDiskCachedThumbnailImage:(id *)arg1 forResolution:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)importMediaToDirectoryURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithUniqueURL:(id)arg1;
- (void)invalidate;
- (void)invalidateDiskCachedMetadata;
- (void)invalidateDiskCachedThumbnailImages;
- (void)invalidateMemoryCachedMetadata;
- (void)invalidateMemoryCachedThumbnailImages;
- (BOOL)isEqual:(id)arg1;
- (id)mediaObject;
- (id)memoryCachedMetadata;
- (id)memoryCachedThumbnailImageForResolution:(unsigned long long)arg1;
- (id)metadata;
- (id)metadataWithCompletionHandler:(CDUnknownBlockType)arg1 force:(BOOL)arg2 cache:(BOOL)arg3;
- (id)metadataWithProgress:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (id)operationWithBlock:(CDUnknownBlockType)arg1 completionHandlerWithObject:(CDUnknownBlockType)arg2;
- (id)prepareCaches:(BOOL)arg1 colorSpace:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)regionsOfInterestWithColorSpace:(id)arg1;
- (id)resourceURL;
- (id)resourceURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setDiskCachedMetadata:(id)arg1;
- (void)setDiskCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2;
- (void)setMediaObject:(id)arg1;
- (void)setMemoryCachedMetadata:(id)arg1;
- (void)setMemoryCachedThumbnailImage:(id)arg1 forResolution:(unsigned long long)arg2;
- (id)thumbnailImageForResolution:(unsigned long long)arg1 aspectRatio:(double)arg2 scale:(double)arg3 quality:(double)arg4 colorSpace:(id)arg5;
- (id)thumbnailImageForResolution:(unsigned long long)arg1 aspectRatio:(double)arg2 scale:(double)arg3 quality:(double)arg4 colorSpace:(id)arg5 completionHandler:(CDUnknownBlockType)arg6 force:(BOOL)arg7 cache:(BOOL)arg8;
- (id)uniquePath;
- (BOOL)wantsDiskCachedMetadata;
- (BOOL)wantsDiskCachedThumbnailForResolution:(unsigned long long)arg1;
- (BOOL)wantsMemoryCachedMetadata;
- (BOOL)wantsMemoryCachedThumbnailForResolution:(unsigned long long)arg1;
- (BOOL)wantsTemporaryDiskCache;

@end
