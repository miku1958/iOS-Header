//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <SpringBoard/MTLumaDodgePillBackgroundLuminanceObserver-Protocol.h>
#import <SpringBoard/PTSettingsKeyPathObserver-Protocol.h>
#import <SpringBoard/SBAttentionAwarenessClientDelegate-Protocol.h>
#import <SpringBoard/SBSystemPointerInteractionDelegate-Protocol.h>

@class MTLumaDodgePillSettings, MTLumaDodgePillView, NSMutableSet, NSString, SBAttentionAwarenessClient, SBFHomeGrabberSettings;
@protocol SBHomeGrabberDelegate, SBHomeGrabberPointerClickDelegate;

@interface SBHomeGrabberView : UIView <PTSettingsKeyPathObserver, SBAttentionAwarenessClientDelegate, MTLumaDodgePillBackgroundLuminanceObserver, SBSystemPointerInteractionDelegate>
{
    SBFHomeGrabberSettings *_settings;
    MTLumaDodgePillSettings *_pillSettings;
    MTLumaDodgePillView *_pillView;
    UIView *_pointerHitTestBlockingView;
    SBAttentionAwarenessClient *_idleTouchAwarenessClient;
    long long _touchState;
    unsigned long long _lastActivatingToken;
    unsigned long long _lastInitialHideToken;
    BOOL _autoHides;
    BOOL _edgeProtectEnabled;
    BOOL _shouldEnableGestures;
    NSMutableSet *_hiddenOverrides;
    long long _luma;
    long long _presence;
    long long _style;
    unsigned long long _lastVisibilityTransitionToken;
    NSMutableSet *_outstandingVisibilityTransitionTokens;
    BOOL _isSystemPointerInteractionEnabled;
    BOOL _suppressesBounce;
    id<SBHomeGrabberDelegate> _delegate;
    long long _colorBias;
    id<SBHomeGrabberPointerClickDelegate> _pointerClickDelegate;
}

@property (nonatomic) BOOL autoHides; // @synthesize autoHides=_autoHides;
@property (nonatomic) long long colorBias; // @synthesize colorBias=_colorBias;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBHomeGrabberDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEdgeProtectEnabled) BOOL edgeProtectEnabled; // @synthesize edgeProtectEnabled=_edgeProtectEnabled;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<SBHomeGrabberPointerClickDelegate> pointerClickDelegate; // @synthesize pointerClickDelegate=_pointerClickDelegate;
@property (readonly, nonatomic) double suggestedEdgeSpacing;
@property (readonly) Class superclass;
@property (nonatomic) BOOL suppressesBounce; // @synthesize suppressesBounce=_suppressesBounce;

- (void).cxx_destruct;
- (void)_animateToStyle:(long long)arg1 disallowAdditive:(BOOL)arg2 withAnimationSettings:(id)arg3;
- (id)_animationSettingsForTransitionFromStyle:(long long)arg1 toStyle:(long long)arg2 fromPresence:(long long)arg3 toPresence:(long long)arg4;
- (BOOL)_autohideEffectivelyEnabled;
- (void)_bounce;
- (BOOL)_bounceHitTest:(struct CGPoint)arg1;
- (long long)_calculateLumaStyle;
- (struct CGRect)_calculatePillFrame;
- (long long)_calculatePresence;
- (long long)_calculateStyle;
- (BOOL)_edgeProtectEffectivelyEnabled;
- (void)_invalidateInitialAutoHideTime;
- (id)_newPillView;
- (void)_noteActiveForTouchThatShouldUnhideImmediately:(BOOL)arg1;
- (struct CGRect)_pointerInteractionHitTestRect;
- (void)_setSystemPointerInteractionEnabled:(BOOL)arg1;
- (void)_updateIdleTouchAwarenessClient;
- (void)_updatePresence:(long long)arg1 style:(long long)arg2 withAnimationSettings:(id)arg3;
- (void)client:(id)arg1 attentionLostTimeoutDidExpire:(double)arg2 forConfigurationGeneration:(unsigned long long)arg3 withAssociatedObject:(id)arg4;
- (void)clientDidResetForUserAttention:(id)arg1;
- (void)dealloc;
- (void)forgetBackgroundLuminance;
- (struct CGRect)grabberFrameForBounds:(struct CGRect)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 settings:(id)arg2 shouldEnableGestures:(BOOL)arg3;
- (id)initWithFrame:(struct CGRect)arg1 shouldEnableGestures:(BOOL)arg2;
- (BOOL)isHidden;
- (void)layoutSubviews;
- (void)lumaDodgePillDidDetectBackgroundLuminanceChange:(id)arg1;
- (id)regionAtLocation:(struct CGPoint)arg1 forView:(id)arg2;
- (void)resetAutoHide;
- (void)resetAutoHideWithInitialDelay:(double)arg1;
- (void)setHidden:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1 forReason:(id)arg2 withAnimationSettings:(id)arg3;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (BOOL)shouldBeginPointerInteractionAtLocation:(struct CGPoint)arg1 forView:(id)arg2;
- (id)styleForRegion:(id)arg1 forView:(id)arg2;
- (struct CGSize)suggestedSizeForContentWidth:(double)arg1;
- (void)turnOffAutoHideWithDelay:(double)arg1;
- (void)turnOnAutoHideWithInitialDelay:(double)arg1;
- (void)updateStyle;
- (void)updateStyleWithAnimationSettings:(id)arg1;

@end

