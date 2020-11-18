//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class AVAsset, NSString, OKPresentationViewController;

@protocol OKPresentationViewControllerDelegate <NSObject>

@optional
- (void)audioFinishedPlayingForTrackID:(NSString *)arg1;
- (void)audioStartedPlayingForTrackID:(NSString *)arg1 withAVAsset:(AVAsset *)arg2 atVolume:(double)arg3;
- (void)beginDuckingForTrackID:(NSString *)arg1 toDuckLevel:(double)arg2 fadeDuration:(double)arg3;
- (void)beginFadingForTrackID:(NSString *)arg1 fadeDuration:(double)arg2;
- (void)couchPotatoPlaybackFinished;
- (void)dismissPresentationViewController:(OKPresentationViewController *)arg1;
- (void)endDuckingForTrackID:(NSString *)arg1;
- (void)endFadingForTrackID:(NSString *)arg1;
- (void)presentationViewController:(OKPresentationViewController *)arg1 changedFrameOfMainNavigatorTo:(struct CGRect)arg2;
- (void)presentationViewController:(OKPresentationViewController *)arg1 renderingTimeLogMessage:(NSString *)arg2 withTimestamp:(double)arg3;
- (void)presentationViewControllerDidAppear:(OKPresentationViewController *)arg1;
- (void)presentationViewControllerDidPrepare:(OKPresentationViewController *)arg1;
@end

