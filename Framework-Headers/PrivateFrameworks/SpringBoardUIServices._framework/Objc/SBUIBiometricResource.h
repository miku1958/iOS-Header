//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUIServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardUIServices/SBFMobileKeyBagObserver-Protocol.h>
#import <SpringBoardUIServices/SBUIBiometricResource-Protocol.h>
#import <SpringBoardUIServices/_SBUIBiometricKitInterfaceDelegate-Protocol.h>

@class MCProfileConnection, NSHashTable, NSMutableOrderedSet, NSString, SBFCredentialSet, SBFMobileKeyBag, _SBUIBiometricKitInterface;
@protocol SBUIBiometricAuthenticationPolicy;

@interface SBUIBiometricResource : NSObject <BSDescriptionProviding, SBFMobileKeyBagObserver, _SBUIBiometricKitInterfaceDelegate, SBUIBiometricResource>
{
    _SBUIBiometricKitInterface *_biometricInterface;
    MCProfileConnection *_profileConnection;
    id<SBUIBiometricAuthenticationPolicy> _authPolicy;
    SBFMobileKeyBag *_keybag;
    unsigned long long _lastEvent;
    BOOL _hasMesaHardware;
    BOOL _hasPearlHardware;
    BOOL _isMatchingAllowed;
    BOOL _isMatchingEnabled;
    BOOL _isFingerDetectionAllowed;
    BOOL _isFingerDetectionEnabled;
    BOOL _isFingerDetectionEnabledThroughHIDChannel;
    BOOL _screenIsOn;
    BOOL _isAuthenticated;
    BOOL _shouldSendFingerOffNotification;
    BOOL _wasMatchingBeforeKeybagStateChangeOccurred;
    SBFCredentialSet *_unlockCredentialSet;
    NSHashTable *_observers;
    NSMutableOrderedSet *_matchAssertions;
    NSMutableOrderedSet *_fingerDetectAssertions;
    Class _bkMatchPearlOperationClass;
    id<SBUIBiometricAuthenticationPolicy> _authenticationPolicy;
}

@property (strong, nonatomic) id<SBUIBiometricAuthenticationPolicy> authenticationPolicy; // @synthesize authenticationPolicy=_authenticationPolicy;
@property (strong, nonatomic, getter=_biometricKitInterface, setter=_setBiometricKitInterface:) _SBUIBiometricKitInterface *biometricKitInterface; // @synthesize biometricKitInterface=_biometricInterface;
@property (readonly, nonatomic) unsigned long long biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFingerDetectEnabled) BOOL fingerDetectEnabled;
@property (readonly, nonatomic, getter=isFingerOn) BOOL fingerOn;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic) BOOL hasEnrolledIdentities;
@property (readonly, nonatomic) BOOL hasPearlSupport;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_keybagInterface, setter=_setKeybagInterface:) SBFMobileKeyBag *keybagInterface; // @synthesize keybagInterface=_keybag;
@property (readonly, nonatomic, getter=isMatchingAllowed) BOOL matchingAllowed; // @synthesize matchingAllowed=_isMatchingAllowed;
@property (readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled; // @synthesize matchingEnabled=_isMatchingEnabled;
@property (readonly, nonatomic, getter=isPearlDetectEnabled) BOOL pearlDetectEnabled;
@property (strong, nonatomic, getter=_profileConnection, setter=_setProfileConnection:) MCProfileConnection *profileConnection; // @synthesize profileConnection=_profileConnection;
@property (readonly) Class superclass;
@property (strong, nonatomic) SBFCredentialSet *unlockCredentialSet; // @synthesize unlockCredentialSet=_unlockCredentialSet;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_activateFingerDetectAssertion:(id)arg1;
- (void)_activateMatchAssertion:(id)arg1;
- (void)_addFingerDetectionWantedAssertion:(id)arg1;
- (void)_addMatchingAssertion:(id)arg1;
- (void)_deactivateAssertion:(id)arg1;
- (void)_fingerDetectAllowedStateMayHaveChangedForReason:(id)arg1;
- (void)_matchingAllowedStateMayHaveChangedForReason:(id)arg1;
- (void)_notifyObserversOfEvent:(unsigned long long)arg1;
- (void)_profileSettingsChanged:(id)arg1;
- (void)_reallyResumeMatchingForAssertion:(id)arg1 advisory:(BOOL)arg2;
- (void)_reallySetAuthenticated:(BOOL)arg1 keybagState:(id)arg2;
- (void)_reevaluateFingerDetection;
- (void)_reevaluateMatching;
- (void)_removeFingerDetectionWantedAssertion:(id)arg1;
- (void)_removeMatchingAssertion:(id)arg1;
- (void)_setAuthenticated:(BOOL)arg1;
- (void)_updateHandlersForEvent:(unsigned long long)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (void)addObserver:(id)arg1;
- (void)biometricKitInterface:(id)arg1 enrolledIdentitiesDidChange:(BOOL)arg2;
- (void)biometricKitInterface:(id)arg1 handleEvent:(unsigned long long)arg2;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (id)initWithBiometricKitInterface:(id)arg1;
- (void)noteScreenDidTurnOff;
- (void)noteScreenWillTurnOff;
- (void)noteScreenWillTurnOn;
- (void)refreshMatchMode;
- (void)removeObserver:(id)arg1;
- (void)resumeMatchingAdvisory:(BOOL)arg1;
- (void)resumeMatchingForAssertion:(id)arg1 advisory:(BOOL)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

