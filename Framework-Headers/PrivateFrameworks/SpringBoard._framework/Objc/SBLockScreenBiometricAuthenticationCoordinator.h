//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/PKPassLibraryDelegate-Protocol.h>
#import <SpringBoard/SBBiometricUnlockBehaviorDelegate-Protocol.h>
#import <SpringBoard/SBUIBiometricResourceObserver-Protocol.h>
#import <SpringBoard/SBUIPasscodeBiometricMatchingAssertionFactory-Protocol.h>
#import <SpringBoard/SBWalletPrearmRecognizerDelegate-Protocol.h>

@class NSHashTable, NSMutableOrderedSet, NSString, PKPassLibrary, SBUIBiometricResource, SBWalletPreArmController, SBWalletPrearmRecognizer, _SBPendingMesaUnlockBehaviorUnlockRequest;
@protocol BSInvalidatable, SBBiometricUnlockBehavior, SBLockScreenBiometricAuthenticationCoordinatorDelegate;

@interface SBLockScreenBiometricAuthenticationCoordinator : NSObject <BSDescriptionProviding, SBUIBiometricResourceObserver, SBBiometricUnlockBehaviorDelegate, SBWalletPrearmRecognizerDelegate, PKPassLibraryDelegate, SBUIPasscodeBiometricMatchingAssertionFactory>
{
    SBUIBiometricResource *_biometricResource;
    id<BSInvalidatable> _fingerDetectEnabledAssertion;
    id<SBLockScreenBiometricAuthenticationCoordinatorDelegate> _delegate;
    id<SBBiometricUnlockBehavior> _autoUnlockBehavior;
    SBWalletPreArmController *_walletPreArmController;
    SBWalletPrearmRecognizer *_walletPrearmRecognizer;
    BOOL _presentingWalletInterface;
    BOOL _didMatchBeforeWalletPrearmRecognizerTimeout;
    PKPassLibrary *_passLibrary;
    unsigned long long _state;
    BOOL _isAuthenticated;
    id<BSInvalidatable> _matchingWantedAssertion;
    unsigned long long _matchingWantedAssertionMode;
    BOOL _bioAuthenticatedWhileMenuButtonDown;
    _SBPendingMesaUnlockBehaviorUnlockRequest *_pendingUnlockRequest;
    NSMutableOrderedSet *_activePasscodeMatchAssertions;
    NSHashTable *_disabledAssertions;
    NSHashTable *_disabledUnlockAssertions;
    NSHashTable *_disabledAutoUnlockAssertions;
}

@property (nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_isAuthenticated;
@property (strong, nonatomic, getter=_setAutoUnlockBehavior, setter=_setAutoUnlockBehavior:) id<SBBiometricUnlockBehavior> autoUnlockBehavior; // @synthesize autoUnlockBehavior=_autoUnlockBehavior;
@property (readonly, nonatomic, getter=isAutoUnlockingDisabled) BOOL autoUnlockingDisabled;
@property (nonatomic) BOOL bioAuthenticatedWhileMenuButtonDown; // @synthesize bioAuthenticatedWhileMenuButtonDown=_bioAuthenticatedWhileMenuButtonDown;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SBLockScreenBiometricAuthenticationCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isUnlockingDisabled) BOOL isUnlockingDisabled;
@property (strong, nonatomic, getter=_getPassLibrary, setter=_setPassLibrary:) PKPassLibrary *passLibrary; // @synthesize passLibrary=_passLibrary;
@property (readonly, nonatomic, getter=_state) unsigned long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isWalletPreArmDisabled) BOOL walletPreArmDisabled;
@property (readonly, nonatomic, getter=_walletPrearmRecognizer) SBWalletPrearmRecognizer *walletPrearmRecognizer; // @synthesize walletPrearmRecognizer=_walletPrearmRecognizer;

- (void).cxx_destruct;
- (void)_addPasscodeMatchingAssertion:(id)arg1;
- (void)_clearFingerDetectAssertion;
- (void)_clearPendingUnlockRequest;
- (void)_createFingerDetectAssertion;
- (void)_handlePassKitDismissalIfNecessaryWithReason:(id)arg1;
- (BOOL)_hasActivePasscodeViews;
- (void)_invalidateWalletPreArmRecognizer;
- (BOOL)_isMatchingEffectivelyDisabled;
- (BOOL)_isWalletPreArmAllowed;
- (void)_noteMenuButtonDoublePress;
- (void)_noteMenuButtonSinglePress;
- (void)_pendUnlockRequest:(id)arg1;
- (void)_removePasscodeMatchingAssertion:(id)arg1;
- (void)_resetStateForReason:(id)arg1;
- (void)_setState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_setupPreArmRecognizerIfPossibleForReason:(id)arg1;
- (void)_stateChangedFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (BOOL)_stateWantsMatching:(unsigned long long)arg1 outMatchMode:(unsigned long long *)arg2;
- (void)_toggleAutoUnlockBehaviorEnabled:(BOOL)arg1;
- (void)_updateMatchingForState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)_walletPreArmDisabledDidChange:(id)arg1;
- (id)acquireDisableAutoUnlockAssertionForReason:(id)arg1;
- (id)acquireDisableCoordinatorAssertionForReason:(id)arg1;
- (id)acquireDisableUnlockAssertionForReason:(id)arg1;
- (id)acquireDisableWalletPreArmAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)biometricResource:(id)arg1 matchingAllowedDidChange:(BOOL)arg2;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (BOOL)biometricUnlockBehavior:(id)arg1 requestsFeedback:(id)arg2;
- (BOOL)biometricUnlockBehavior:(id)arg1 requestsUnlock:(id)arg2 withFeedback:(id)arg3;
- (void)contactlessInterfaceDidDismissFromSource:(long long)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithBiometricResource:(id)arg1 walletPreArmController:(id)arg2;
- (void)passLibraryReceivedInterruption;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)walletPrearmRecognizer:(id)arg1 didFailToRecognizeForReason:(unsigned long long)arg2;
- (void)walletPrearmRecognizerDidRecognize:(id)arg1;

@end

