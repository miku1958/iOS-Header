//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUIServices/SBUIBiometricResource-Protocol.h>

@class NSString, SBUIBiometricResource;
@protocol SBUIPasscodeBiometricMatchingAssertionFactory;

@interface SBUIPasscodeBiometricResource : NSObject <SBUIBiometricResource>
{
    SBUIBiometricResource *_biometricResource;
    id<SBUIPasscodeBiometricMatchingAssertionFactory> _overrideMatchingAssertionFactory;
}

@property (readonly, nonatomic) unsigned long long biometricLockoutState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFingerDetectEnabled) BOOL fingerDetectEnabled;
@property (readonly, nonatomic, getter=isFingerOn) BOOL fingerOn;
@property (readonly, nonatomic) BOOL hasBiometricAuthenticationCapabilityEnabled;
@property (readonly, nonatomic) BOOL hasEnrolledIdentities;
@property (readonly, nonatomic) BOOL hasPearlSupport;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isMatchingAllowed) BOOL matchingAllowed;
@property (readonly, nonatomic, getter=isMatchingEnabled) BOOL matchingEnabled;
@property (readonly, nonatomic, getter=isPearlDetectEnabled) BOOL pearlDetectEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)acquireFaceDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireFingerDetectionWantedAssertionForReason:(id)arg1;
- (id)acquireMatchingAssertionWithMode:(unsigned long long)arg1 reason:(id)arg2;
- (id)acquireSimulatedLockoutAssertionWithLockoutState:(unsigned long long)arg1 forReason:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)initWithBiometricResource:(id)arg1 overrideMatchingAssertionFactory:(id)arg2;
- (void)refreshMatchMode;
- (void)removeObserver:(id)arg1;
- (void)resumeMatchingAdvisory:(BOOL)arg1;
- (void)resumeMatchingForAssertion:(id)arg1 advisory:(BOOL)arg2;

@end

