//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class UIView;
@protocol PXTrimToolPlayerObserver;

@protocol PXTrimToolPlayerWrapper <NSObject>

@property (readonly, nonatomic) UIView *loupePlayerView;
@property (weak, nonatomic) id<PXTrimToolPlayerObserver> playerObserver;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing;
@property (readonly, nonatomic, getter=isReadyToPlay) BOOL readyToPlay;
@property (readonly, nonatomic) CDStruct_e83c9415 trimRange;

- (void)applyTrimTimeRange:(CDStruct_e83c9415)arg1;
- (void)invalidateComposition;
- (void)pause;
- (void)play;
- (void)requestPlayerItemWithCompletion:(void (^)(AVPlayerItem *))arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1;
- (void)seekToTime:(CDStruct_1b6d18a9)arg1 untrimmed:(BOOL)arg2 exact:(BOOL)arg3;
- (void)startPeriodicTimeObserver;
- (void)stopPeriodicTimeObserver;
@end
