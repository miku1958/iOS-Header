//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPControllerProtocol-Protocol.h>

@class MPVideoView, UIColor, UIImage, UIView, _UIHostedWindow;
@protocol MPVideoOverlay;

@protocol MPVideoControllerProtocol <MPControllerProtocol>

@property (nonatomic) BOOL TVOutEnabled;
@property (nonatomic) BOOL allowsDetailScrubbing;
@property (nonatomic) BOOL allowsWirelessPlayback;
@property (nonatomic) BOOL alwaysAllowHidingControlsOverlay;
@property (nonatomic) int artworkImageStyle;
@property (nonatomic) BOOL attemptAutoPlayWhenControlsHidden;
@property (nonatomic) BOOL autoPlayWhenLikelyToKeepUp;
@property (readonly, nonatomic) UIView *backgroundView;
@property (strong, nonatomic) UIColor *backstopColor;
@property (nonatomic) BOOL canAnimateControlsOverlay;
@property (readonly, nonatomic) BOOL canChangeScaleMode;
@property (nonatomic) BOOL canShowControlsOverlay;
@property (nonatomic) BOOL controlsOverlayVisible;
@property (nonatomic) unsigned long long desiredParts;
@property (nonatomic) BOOL disableAutoRotation;
@property (nonatomic) BOOL disableControlsAutohide;
@property (nonatomic) unsigned long long disabledParts;
@property (nonatomic) BOOL displayPlaybackErrorAlerts;
@property (nonatomic, getter=isFullscreen) BOOL fullscreen;
@property (readonly, nonatomic) _UIHostedWindow *hostedWindow;
@property (readonly, nonatomic) unsigned int hostedWindowContextID;
@property (nonatomic) BOOL inlinePlaybackUsesTVOut;
@property (nonatomic) long long itemTypeOverride;
@property (strong, nonatomic) UIImage *posterImage;
@property (nonatomic) long long scaleMode;
@property (readonly, strong, nonatomic) UIView<MPVideoOverlay> *videoOverlayView;
@property (readonly, strong, nonatomic) MPVideoView *videoView;
@property (readonly, nonatomic) BOOL viewControllerWillRequestExit;
@property (nonatomic) unsigned long long visibleParts;

- (BOOL)canHideOverlay:(BOOL)arg1;
- (void)displayVideoView;
- (void)exitFullscreen;
- (void)prepareToDisplayVideo;
- (void)setControlsNeedLayout;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setFullscreen:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setOwnsStatusBar:(BOOL)arg1;
- (void)setScaleModeOverride:(long long)arg1 animated:(BOOL)arg2;
- (void)setUseHostedWindowWhenFullscreen:(BOOL)arg1;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
@end

