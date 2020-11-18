//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AVKit/AVPlaybackContentContainer-Protocol.h>

@class AVStatusBarBackgroundGradientView, NSString, __AVPlayerLayerView;

__attribute__((visibility("hidden")))
@interface AVPlaybackContentContainerView : UIView <AVPlaybackContentContainer>
{
    BOOL _playingOnSecondScreen;
    BOOL _canShowStatusBarBackgroundGradientWhenStatusBarVisible;
    BOOL _observingStatusBarHidden;
    __AVPlayerLayerView *_playerLayerView;
    UIView *_contentOverlayView;
    UIView *_contentOverlayViewSubview;
    AVStatusBarBackgroundGradientView *_statusBarBackgroundGradientView;
    struct CGRect _videoContentFrame;
}

@property (readonly, nonatomic) AVPlaybackContentContainerView *activeContentView;
@property (nonatomic) BOOL canShowStatusBarBackgroundGradientWhenStatusBarVisible; // @synthesize canShowStatusBarBackgroundGradientWhenStatusBarVisible=_canShowStatusBarBackgroundGradientWhenStatusBarVisible;
@property (readonly, nonatomic) UIView *contentOverlayView; // @synthesize contentOverlayView=_contentOverlayView;
@property (strong, nonatomic) UIView *contentOverlayViewSubview; // @synthesize contentOverlayViewSubview=_contentOverlayViewSubview;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isObservingStatusBarHidden) BOOL observingStatusBarHidden; // @synthesize observingStatusBarHidden=_observingStatusBarHidden;
@property (strong, nonatomic) __AVPlayerLayerView *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property (nonatomic, getter=isPlayingOnSecondScreen) BOOL playingOnSecondScreen; // @synthesize playingOnSecondScreen=_playingOnSecondScreen;
@property (readonly, nonatomic) AVStatusBarBackgroundGradientView *statusBarBackgroundGradientView; // @synthesize statusBarBackgroundGradientView=_statusBarBackgroundGradientView;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect videoContentFrame; // @synthesize videoContentFrame=_videoContentFrame;

- (void).cxx_destruct;
- (struct CGRect)_frameForStatusBarBackgroundGradientView;
- (struct CGRect)_resolvedContentFrame;
- (void)_updateStatusBarBackgroundGradientViewAlpha;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1 activeContentView:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 playerLayerView:(id)arg2 contentOverlayView:(id)arg3;
- (void)layoutSubviews;
- (void)removeAllSublayerTransformAnimations;
- (void)setVideoGravity:(long long)arg1 removingAllSubayerTransformAnimations:(BOOL)arg2;

@end
