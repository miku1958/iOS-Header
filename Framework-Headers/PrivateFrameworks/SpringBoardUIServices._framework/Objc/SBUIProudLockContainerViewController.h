//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardUIServices/SBUIProudLockContainerViewControllerOrientationProvider-Protocol.h>

@class SBUIProudLockIconView, UIView, _UILegibilitySettings;
@protocol SBUIProudLockContainerViewControllerDelegate, SBUIProudLockContainerViewControllerLockStatusProvider, SBUIProudLockContainerViewControllerOrientationProvider;

@interface SBUIProudLockContainerViewController : UIViewController <SBUIProudLockContainerViewControllerOrientationProvider>
{
    long long _desiredIconState;
    unsigned long long _desiredCoachingCondition;
    int _unlockSource;
    SBUIProudLockIconView *_testProudLockIconView;
    id<SBUIProudLockContainerViewControllerOrientationProvider> _orientationProvider;
    BOOL _authenticated;
    BOOL _screenOn;
    BOOL _suppressScanningState;
    BOOL _suppressNotLooking;
    BOOL _guidanceTextVisible;
    BOOL _canShowScanningState;
    BOOL _shouldShowScanningState;
    BOOL _canShowCoachingCondition;
    BOOL _canLeaveCoachingCondition;
    BOOL _hasSeenFaceSinceScreenOn;
    BOOL _canShowCameraCovered;
    id<SBUIProudLockContainerViewControllerDelegate> _delegate;
    _UILegibilitySettings *_legibilitySettings;
    id<SBUIProudLockContainerViewControllerLockStatusProvider> _authenticationInformationProvider;
    CDUnknownBlockType _unlockCompletion;
    unsigned long long _forceCount;
    CDStruct_29b32c11 _configuration;
}

@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (weak, nonatomic) id<SBUIProudLockContainerViewControllerLockStatusProvider> authenticationInformationProvider; // @synthesize authenticationInformationProvider=_authenticationInformationProvider;
@property (readonly, nonatomic) UIView *cameraCoveredView;
@property (nonatomic) BOOL canLeaveCoachingCondition; // @synthesize canLeaveCoachingCondition=_canLeaveCoachingCondition;
@property (nonatomic) BOOL canShowCameraCovered; // @synthesize canShowCameraCovered=_canShowCameraCovered;
@property (nonatomic) BOOL canShowCoachingCondition; // @synthesize canShowCoachingCondition=_canShowCoachingCondition;
@property (nonatomic) BOOL canShowScanningState; // @synthesize canShowScanningState=_canShowScanningState;
@property (nonatomic) CDStruct_29b32c11 configuration; // @synthesize configuration=_configuration;
@property (weak, nonatomic) id<SBUIProudLockContainerViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long forceCount; // @synthesize forceCount=_forceCount;
@property (nonatomic, getter=isGuidanceTextVisible) BOOL guidanceTextVisible; // @synthesize guidanceTextVisible=_guidanceTextVisible;
@property (nonatomic) BOOL hasSeenFaceSinceScreenOn; // @synthesize hasSeenFaceSinceScreenOn=_hasSeenFaceSinceScreenOn;
@property (readonly, nonatomic) BOOL isPortrait;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (nonatomic, getter=isScreenOn) BOOL screenOn; // @synthesize screenOn=_screenOn;
@property (nonatomic) BOOL shouldShowScanningState; // @synthesize shouldShowScanningState=_shouldShowScanningState;
@property (nonatomic) BOOL suppressNotLooking; // @synthesize suppressNotLooking=_suppressNotLooking;
@property (nonatomic) BOOL suppressScanningState; // @synthesize suppressScanningState=_suppressScanningState;
@property (copy, nonatomic) CDUnknownBlockType unlockCompletion; // @synthesize unlockCompletion=_unlockCompletion;

- (void).cxx_destruct;
- (long long)_actualIconState;
- (void)_allowCameraCoveredImmediately:(BOOL)arg1;
- (void)_allowCoachingCondition;
- (void)_allowCoachingConditionImmediately:(BOOL)arg1;
- (void)_allowLeavingCoachingCondition;
- (void)_allowScanningState;
- (BOOL)_canTransitionToState:(long long)arg1;
- (void)_clearCoachingCondition;
- (void)_dontCallThis_showLockIfNeededAnimated:(BOOL)arg1 force:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_dontCallThis_updateCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1;
- (unsigned long long)_effectiveCoachingConditionForCondition:(unsigned long long)arg1 orientation:(long long)arg2;
- (long long)_iconViewStateForCoachingCondition:(unsigned long long)arg1;
- (BOOL)_isBiometricLockedOut;
- (BOOL)_isShowingCoachingCondition:(unsigned long long)arg1;
- (void)_performForcedUpdate:(CDUnknownBlockType)arg1;
- (id)_proudLockIconView;
- (void)_reallyAllowCameraCovered;
- (void)_reallyAllowCoachingConditionAnimated:(BOOL)arg1;
- (void)_reallyAllowLeavingCoachingCondition;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 force:(BOOL)arg3;
- (void)_setCoachingCondition:(unsigned long long)arg1 animated:(BOOL)arg2 skipScanningState:(BOOL)arg3 force:(BOOL)arg4;
- (void)_setCounterTransformForOrientation:(long long)arg1;
- (void)_setIconState:(long long)arg1 animated:(BOOL)arg2;
- (void)_setIconState:(long long)arg1 animated:(BOOL)arg2 options:(long long)arg3 force:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)_setLocalTransformForOrientation:(long long)arg1;
- (void)_startScanningStateTimer;
- (void)_updateIconViewStateAnimated:(BOOL)arg1;
- (void)_updateIconViewStateAnimated:(BOOL)arg1 force:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateLockForFaceInView;
- (void)_updateLockForMatchStarted;
- (void)_updateScanningState;
- (void)handleBiometricEvent:(unsigned long long)arg1;
- (id)initWithAuthenticationInformationProvider:(id)arg1;
- (void)loadView;
- (id)orientationProvider;
- (void)reset;
- (void)setAuthenticated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setOrientationProvider:(id)arg1;
- (void)setScreenOn:(BOOL)arg1 fromUnlockSource:(int)arg2;
- (void)setTestProudLockIconView:(id)arg1;
- (id)testProudLockIconView;
- (void)updateForScreenWillTurnOff;
- (void)updateLockForBiometricMatchFailure;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

