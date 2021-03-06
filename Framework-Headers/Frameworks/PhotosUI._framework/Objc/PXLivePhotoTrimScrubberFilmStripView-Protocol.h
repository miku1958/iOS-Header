//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class AVAsset, AVVideoComposition, UIImage;

@protocol PXLivePhotoTrimScrubberFilmStripView <NSObject>

@property (readonly, nonatomic) AVAsset *asset;
@property (weak, nonatomic) id thumbnailUpdatingDelegate;
@property (nonatomic) BOOL useContentAspectRatio;
@property (readonly, nonatomic) AVVideoComposition *videoComposition;
@property (nonatomic) struct CGRect visibleRect;

- (void)setAsset:(AVAsset *)arg1 videoComposition:(AVVideoComposition *)arg2;
- (void)setLivePhotoTrimScrubberThumbnail:(UIImage *)arg1;

@optional
@end

