//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuickLook/NSObject-Protocol.h>

@class AVAsset, AVVideoComposition, UIImage;

@protocol PHVideoScrubberFilmstripView <NSObject>

@property (copy, nonatomic) AVAsset *asset;
@property (strong, nonatomic) UIImage *placeholderImage;
@property (nonatomic) struct CGRect visibleRect;


@optional
- (void)setAsset:(AVAsset *)arg1 videoComposition:(AVVideoComposition *)arg2;
@end

