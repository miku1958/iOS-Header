//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardFoundation/NSObject-Protocol.h>

@class NSURL, UIGestureRecognizer;
@protocol SBFIrisWallpaperViewDelegate;

@protocol SBFIrisWallpaperView <NSObject>

@property (weak, nonatomic) id<SBFIrisWallpaperViewDelegate> irisDelegate;
@property (readonly, nonatomic) long long irisPlaybackState;
@property (readonly, nonatomic) BOOL isIrisInteracting;
@property (readonly, nonatomic) double stillTimeInVideo;
@property (readonly, copy, nonatomic) NSURL *videoFileURL;

- (UIGestureRecognizer *)irisGestureRecognizer;
@end

