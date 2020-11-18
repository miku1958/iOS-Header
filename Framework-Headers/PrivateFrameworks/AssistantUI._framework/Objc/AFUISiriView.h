//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssistantUI/AFUISiriContent-Protocol.h>
#import <AssistantUI/SiriUISiriStatusViewDelegate-Protocol.h>

@class NSString, SiriUIAudioRoutePickerButton, SiriUIConfiguration, SiriUIContentButton, SiriUIHelpButton, SiriUIVisualEffectView, UIImageView, UILabel, _UIBackdropView;
@protocol AFUISiriViewDataSource, AFUISiriViewDelegate, SiriUISiriStatusViewProtocol;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, AFUISiriContent>
{
    _UIBackdropView *_backdropView;
    BOOL _backdropViewVisible;
    struct UIEdgeInsets _suspendedSafeAreaInsets;
    BOOL _safeAreaInsetsSuspended;
    UIView *_dimmingAndLockContainer;
    UIView *_statusViewContainer;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIHelpButton *_helpButton;
    SiriUIContentButton *_reportBugButton;
    UIView *_voiceActivationMaskView;
    SiriUIConfiguration *_configuration;
    UIView *_lockContainerView;
    BOOL _inShowUnlockViewAnimation;
    BOOL _inHideUnlockViewAnimation;
    BOOL _remoteContentViewHidden;
    BOOL _lockViewHidden;
    BOOL _flamesViewDeferred;
    BOOL _helpButtonDeferred;
    BOOL _inFluidDismissal;
    BOOL _statusViewHidden;
    BOOL _flamesViewPaused;
    BOOL _keepStatusViewHidden;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
    UILabel *_assistantVersionLabel;
    SiriUIVisualEffectView *_assistantVersionVisualEffectView;
    UIView *_foregroundView;
    UIView *_foregroundContainerView;
    _UIBackdropView *_backgroundBlurView;
    long long _siriSessionState;
    long long _mode;
    double _statusViewHeight;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
    BOOL _disabled;
    UIView *_remoteContentView;
    id<AFUISiriViewDataSource> _dataSource;
    id<AFUISiriViewDelegate> _delegate;
}

@property (readonly, nonatomic) _UIBackdropView *backgroundBlurView;
@property (weak, nonatomic) id<AFUISiriViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFUISiriViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (readonly, nonatomic) UIView *foregroundContainerView; // @synthesize foregroundContainerView=_foregroundContainerView;
@property (readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) UIView *remoteContentView; // @synthesize remoteContentView=_remoteContentView;
@property (nonatomic) long long siriSessionState; // @synthesize siriSessionState=_siriSessionState;
@property (readonly, nonatomic) double statusViewHeight;
@property (readonly) Class superclass;

+ (void)_animateView:(id)arg1 fromYPosition:(double)arg2 toYPosition:(double)arg3 fade:(long long)arg4 completion:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (void)_animateButtonsHidden:(BOOL)arg1;
- (void)_audioRouteButtonTapped:(id)arg1;
- (double)_buttonInset;
- (void)_configureEyesFreeLogo;
- (void)_configureHelpButton;
- (void)_configureReportBugButtonWithHoldToTalkState:(BOOL)arg1;
- (void)_createAssistantVersionLabelIfNecessary;
- (void)_createReportBugButtonWithTemplateImage:(id)arg1 andConfigureWithHoldToTalkState:(BOOL)arg2;
- (void)_destroyAssistantVersionLabelIfNecessary;
- (BOOL)_helpButtonIsVisible;
- (void)_helpButtonTapped:(id)arg1;
- (BOOL)_isTextInputEnabled;
- (void)_layoutReportBugButton;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGRect)_lockViewFrame;
- (void)_placeRemoteContentView;
- (void)_preferencesDidChange:(id)arg1;
- (BOOL)_reducesMotionEffects;
- (struct CGRect)_remoteContentViewFrame;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_setSafeAreaInsetsSuspended:(BOOL)arg1;
- (void)_setupButtonsIfNecessary;
- (void)_setupContentViews;
- (void)_setupVoiceActivationMaskView;
- (BOOL)_shouldIndicateHoldToTalkMode;
- (BOOL)_showsReportBugButton;
- (struct CGRect)_statusViewContainerFrame;
- (void)_updateControlsAppearance;
- (void)_updateSiriStatusViewForMode:(long long)arg1;
- (BOOL)_wantsBackdropView:(long long)arg1;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1;
- (void)dealloc;
- (id)dimBackdropSettings;
- (void)fadeOutCurrentAura;
- (BOOL)flamesViewPaused;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (void)layoutSubviews;
- (void)pulseHelpButton;
- (void)reloadData;
- (struct UIEdgeInsets)safeAreaInsets;
- (void)safeAreaInsetsDidChange;
- (struct UIEdgeInsets)safeAreaInsetsForSiriStatusView:(id)arg1;
- (void)setAudioRoutePickerBluetoothOn:(BOOL)arg1;
- (void)setBackdropShouldRasterize:(BOOL)arg1;
- (void)setBackdropVisible:(BOOL)arg1;
- (void)setBugReportingAvailable:(BOOL)arg1;
- (void)setContentViewsAlpha:(double)arg1;
- (void)setFlamesViewDeferred:(BOOL)arg1;
- (void)setFlamesViewPaused:(BOOL)arg1;
- (void)setHelpButtonDeferred:(BOOL)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setInFluidDismissal:(BOOL)arg1;
- (void)setInUITrackingMode:(BOOL)arg1;
- (void)setShowAudioRoutePicker:(BOOL)arg1;
- (void)setStatusViewHidden:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)setVoiceActivationMaskViewVisible:(BOOL)arg1;
- (void)setupOrbIfNeeded;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 subtitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 unlockCompletionHandler:(CDUnknownBlockType)arg4;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (void)teardownStatusView;
- (void)updateForPercentageRevealed:(double)arg1;

@end
