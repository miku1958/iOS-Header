//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AssistantUI/AFUISiriRemoteViewHosting-Protocol.h>
#import <AssistantUI/SiriUISiriStatusViewDelegate-Protocol.h>

@class AFUISiriCarPlayView, NSString, SiriUIAudioRoutePickerButton, SiriUIConfiguration, SiriUIContentButton, SiriUIHelpButton, SiriUIVisualEffectView, UIImageView, UILabel, _UIBackdropView;
@protocol AFUISiriViewDataSource, AFUISiriViewDelegate, SiriUISiriStatusViewProtocol;

@interface AFUISiriView : UIView <SiriUISiriStatusViewDelegate, AFUISiriRemoteViewHosting>
{
    _UIBackdropView *_backdropView;
    BOOL _backdropViewVisible;
    AFUISiriCarPlayView *_carPlayView;
    struct UIEdgeInsets _suspendedSafeAreaInsets;
    BOOL _safeAreaInsetsSuspended;
    UIView *_dimmingAndLockContainer;
    UIView *_statusViewContainer;
    SiriUIAudioRoutePickerButton *_audioRoutePickerButton;
    SiriUIHelpButton *_helpButton;
    SiriUIContentButton *_reportBugButton;
    SiriUIConfiguration *_configuration;
    UIView *_lockView;
    unsigned long long _unlockAttemptCount;
    CDUnknownBlockType _unlockCompletion;
    BOOL _inShowUnlockViewAnimation;
    BOOL _inHideUnlockViewanimation;
    BOOL _remoteContentViewHidden;
    BOOL _lockViewHidden;
    SiriUIVisualEffectView *_eyesFreeEffectView;
    UIImageView *_eyesFreeLogoView;
    UILabel *_assistantVersionLabel;
    SiriUIVisualEffectView *_assistantVersionVisualEffectView;
    BOOL _disabled;
    BOOL _statusViewHidden;
    BOOL _keepStatusViewHidden;
    BOOL _flamesViewDeferred;
    BOOL _helpButtonDeferred;
    BOOL _inFluidDismissal;
    UIView *_remoteContentView;
    UIView *_foregroundView;
    UIView *_foregroundContainerView;
    id<AFUISiriViewDataSource> _dataSource;
    id<AFUISiriViewDelegate> _delegate;
    long long _siriSessionState;
    long long _mode;
    UIView<SiriUISiriStatusViewProtocol> *_siriStatusView;
}

@property (readonly, nonatomic) _UIBackdropView *backgroundBlurView;
@property (weak, nonatomic) id<AFUISiriViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AFUISiriViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disabled; // @synthesize disabled=_disabled;
@property (nonatomic) BOOL flamesViewDeferred; // @synthesize flamesViewDeferred=_flamesViewDeferred;
@property (nonatomic) BOOL flamesViewPaused;
@property (readonly, nonatomic) UIView *foregroundContainerView; // @synthesize foregroundContainerView=_foregroundContainerView;
@property (readonly, nonatomic) UIView *foregroundView; // @synthesize foregroundView=_foregroundView;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL helpButtonDeferred; // @synthesize helpButtonDeferred=_helpButtonDeferred;
@property (nonatomic, getter=isInFluidDismissal) BOOL inFluidDismissal; // @synthesize inFluidDismissal=_inFluidDismissal;
@property (nonatomic, getter=isInUITrackingMode) BOOL inUITrackingMode;
@property (nonatomic) BOOL keepStatusViewHidden; // @synthesize keepStatusViewHidden=_keepStatusViewHidden;
@property (nonatomic) long long mode; // @synthesize mode=_mode;
@property (strong, nonatomic) UIView *remoteContentView; // @synthesize remoteContentView=_remoteContentView;
@property (nonatomic) long long siriSessionState; // @synthesize siriSessionState=_siriSessionState;
@property (strong, nonatomic) UIView<SiriUISiriStatusViewProtocol> *siriStatusView; // @synthesize siriStatusView=_siriStatusView;
@property (readonly, nonatomic) double statusViewHeight;
@property (nonatomic) BOOL statusViewHidden; // @synthesize statusViewHidden=_statusViewHidden;
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
- (BOOL)_isCarPlayMode:(long long)arg1;
- (BOOL)_isTextInputEnabled;
- (void)_layoutReportBugButton;
- (void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGRect)_lockViewFrame;
- (void)_preferencesDidChange:(id)arg1;
- (BOOL)_reducesMotionEffects;
- (struct CGRect)_remoteContentViewFrame;
- (void)_reportBugButtonLongPressed;
- (void)_reportBugButtonTapped;
- (void)_setSafeAreaInsetsSuspended:(BOOL)arg1;
- (void)_setupButtonsIfNecessary;
- (BOOL)_shouldIndicateHoldToTalkMode;
- (BOOL)_showsReportBugButton;
- (struct CGRect)_statusViewContainerFrame;
- (void)_updateControlsAppearance;
- (void)_updateSiriStatusViewForMode:(long long)arg1;
- (float)audioLevelForSiriStatusView:(id)arg1;
- (void)cancelShowingPasscodeUnlock;
- (void)configureReportBugButtonToShowHoldToTalkState:(BOOL)arg1;
- (void)dealloc;
- (id)dimBackdropSettings;
- (void)fadeOutCurrentAura;
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
- (void)setCarDisplaySnippetMode:(long long)arg1;
- (void)setHelpButtonEmphasized:(BOOL)arg1;
- (void)setShowAudioRoutePicker:(BOOL)arg1;
- (void)setStatusViewUserInteractionEnabled:(BOOL)arg1;
- (void)setupOrbIfNeeded;
- (void)showPasscodeUnlockWithStatusText:(id)arg1 subTitle:(id)arg2 completionHandler:(CDUnknownBlockType)arg3 unlockCompletionHandler:(CDUnknownBlockType)arg4;
- (void)siriDidActivateFromSource:(long long)arg1;
- (void)siriStatusViewHoldDidBegin:(id)arg1;
- (void)siriStatusViewHoldDidEnd:(id)arg1;
- (void)siriStatusViewWasTapped:(id)arg1;
- (void)teardownStatusView;
- (void)updateForPercentageRevealed:(double)arg1;

@end
