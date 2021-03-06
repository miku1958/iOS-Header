//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SiriUI/SUICFlamesViewDelegate-Protocol.h>
#import <SiriUI/SiriUISiriStatusViewProtocol-Protocol.h>
#import <SiriUI/UIGestureRecognizerDelegate-Protocol.h>

@class AVAudioSession, AVPlayerItem, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, NSObject, NSString, SUICFlamesView, SiriUIConfiguration, UILongPressGestureRecognizer, UIScreen;
@protocol OS_dispatch_queue, SiriUISiriStatusViewAnimationDelegate, SiriUISiriStatusViewDelegate;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol>
{
    UIView *_touchInputView;
    UILongPressGestureRecognizer *_longPressRecognizer;
    UIView *_flamesContainerView;
    SUICFlamesView *_flamesView;
    UIView *_glyphView;
    AVPlayerLayer *_glyphLayer;
    AVPlayerLooper *_glyphPlayerLooper;
    AVQueuePlayer *_glyphQueuePlayer;
    AVPlayerItem *_glyphPlayerItem;
    AVAudioSession *_glyphAudioSession;
    NSObject<OS_dispatch_queue> *_glyphConfigurationQueue;
    double _lastStateChangeTime;
    UIScreen *_screen;
    long long _deferredFlamesViewState;
    SiriUIConfiguration *_configuration;
    BOOL _textInputEnabled;
    BOOL _siriGlyphHidden;
    BOOL _flamesViewDeferred;
    BOOL _inUITrackingMode;
    BOOL _paused;
    long long _mode;
    double _disabledMicOpacity;
    id<SiriUISiriStatusViewDelegate> _delegate;
    double _flamesViewWidth;
    id<SiriUISiriStatusViewAnimationDelegate> _animationDelegate;
}

@property (weak, nonatomic) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate; // @synthesize animationDelegate=_animationDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SiriUISiriStatusViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double disabledMicOpacity; // @synthesize disabledMicOpacity=_disabledMicOpacity;
@property (readonly, nonatomic) UIView *flamesContainerView;
@property (nonatomic) BOOL flamesViewDeferred; // @synthesize flamesViewDeferred=_flamesViewDeferred;
@property (nonatomic) double flamesViewWidth; // @synthesize flamesViewWidth=_flamesViewWidth;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isInUITrackingMode) BOOL inUITrackingMode; // @synthesize inUITrackingMode=_inUITrackingMode;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (nonatomic) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic) double statusViewHeight;
@property (readonly) Class superclass;

+ (struct CGRect)activeFrameForScreen:(id)arg1 frame:(struct CGRect)arg2 safeAreaInsets:(struct UIEdgeInsets)arg3;
- (void).cxx_destruct;
- (void)_animateSiriGlyphHidden:(BOOL)arg1;
- (void)_attachFlamesViewIfNeeded;
- (struct CGRect)_flamesFrame;
- (id)_flamesView;
- (struct CGRect)_flamesViewFrame;
- (void)_handleKeyboardDidShowNotification:(id)arg1;
- (void)_handleKeyboardWillHideNotification:(id)arg1;
- (void)_layoutFlamesViewIfNeeded;
- (void)_micButtonHeld:(id)arg1;
- (void)_micButtonTapped:(id)arg1;
- (void)_setFlamesViewState:(long long)arg1;
- (void)_setupOrbIfNeeded:(CDUnknownBlockType)arg1;
- (struct CGRect)_siriGlyphTappableRect;
- (float)audioLevelForFlamesView:(id)arg1;
- (void)dealloc;
- (void)fadeOutCurrentAura;
- (void)forceMicVisible:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 screen:(id)arg2 textInputEnabled:(BOOL)arg3 configuration:(id)arg4;
- (void)layoutSubviews;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (void)setupOrbIfNeeded;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

