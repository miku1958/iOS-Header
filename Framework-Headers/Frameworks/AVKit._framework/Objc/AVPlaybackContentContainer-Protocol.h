//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/NSObject-Protocol.h>

@class AVPlaybackContentContainerView;

@protocol AVPlaybackContentContainer <NSObject>

@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen;
@property (nonatomic) struct CGRect videoContentFrame;

- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(AVPlaybackContentContainerView *)arg2;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2;
@end

