//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/NSObject-Protocol.h>

@class NSString;
@protocol BSInvalidatable, SBUIBiometricResourceObserver;

@protocol SBUIBiometricResource <NSObject>

@property (readonly, nonatomic) unsigned long long biometricLockoutState;
@property (readonly, nonatomic, getter=isFingerDetectEnabled) BOOL fingerDetectEnabled;
@property (readonly, nonatomic, getter=isFingerOn) BOOL fingerOn;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic) BOOL hasEnrolledIdentities;
@property (readonly, nonatomic) BOOL hasPearlSupport;
@property (readonly, nonatomic, getter=isMatchingAllowed) BOOL matchingAllowed;
@property (readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled;
@property (readonly, nonatomic, getter=isPearlDetectEnabled) BOOL pearlDetectEnabled;

- (id<BSInvalidatable>)acquireFingerDetectionWantedAssertionForReason:(NSString *)arg1;
- (id<BSInvalidatable>)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(NSString *)arg2;
- (void)addObserver:(id<SBUIBiometricResourceObserver>)arg1;
- (void)refreshMatchMode;
- (void)removeObserver:(id<SBUIBiometricResourceObserver>)arg1;
- (void)restartMatchingIfNeededForAssertion:(id<BSInvalidatable>)arg1;
@end

