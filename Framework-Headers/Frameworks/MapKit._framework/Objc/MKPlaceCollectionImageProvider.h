//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/NSCacheDelegate-Protocol.h>

@class GEOMapItemPhotoOptions, NSCache, NSString;
@protocol OS_dispatch_queue;

@interface MKPlaceCollectionImageProvider : NSObject <NSCacheDelegate>
{
    NSObject<OS_dispatch_queue> *_blurQueue;
    GEOMapItemPhotoOptions *_optionsForCollectionCells;
    NSCache *_blurredImagesCache;
    NSCache *_downloadedImagesCache;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *blurQueue; // @synthesize blurQueue=_blurQueue;
@property (strong, nonatomic) NSCache *blurredImagesCache; // @synthesize blurredImagesCache=_blurredImagesCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSCache *downloadedImagesCache; // @synthesize downloadedImagesCache=_downloadedImagesCache;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) GEOMapItemPhotoOptions *optionsForCollectionCells; // @synthesize optionsForCollectionCells=_optionsForCollectionCells;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_blurCachedImage:(id)arg1 blurredImageId:(id)arg2 collection:(id)arg3 size:(struct CGSize)arg4 imageSizeType:(long long)arg5 contentSizeCategory:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)blurImage:(id)arg1 withSize:(struct CGSize)arg2 imageSizeType:(long long)arg3 contentSizeCategory:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)cache:(id)arg1 willEvictObject:(id)arg2;
- (void)cancelBlurredCoverImageLoadWithCollection:(id)arg1 frameSize:(struct CGSize)arg2;
- (void)darkenAndBlurImage:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (struct CGSize)desiredSizeFromFrameSize:(struct CGSize)arg1;
- (id)init;
- (id)joeColorForCuratedCollection:(id)arg1;
- (void)loadBlurredCoverImageWithCuratedCollection:(id)arg1 size:(struct CGSize)arg2 imageSizeType:(long long)arg3 contentSizeCategory:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)photoInfoWithPhoto:(id)arg1 desiredSize:(struct CGSize)arg2;

@end

