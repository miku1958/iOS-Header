//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LAClient, NSData, NSNumber, NSString;
@protocol LAPrearmContextXPC, LAUIDelegate;

@interface LAContext : NSObject
{
    LAClient *_client;
    id<LAPrearmContextXPC> _prearmContext;
    BOOL _cancelButtonVisible;
    BOOL _fallbackButtonVisible;
    NSNumber *_maxBiometryFailures;
    NSData *_evaluatedPolicyDomainState;
    long long _biometryType;
    NSData *_externalizedContext;
}

@property (nonatomic) long long biometryType; // @synthesize biometryType=_biometryType;
@property (nonatomic, getter=isCancelButtonVisible) BOOL cancelButtonVisible; // @synthesize cancelButtonVisible=_cancelButtonVisible;
@property (strong, nonatomic) NSData *evaluatedPolicyDomainState; // @synthesize evaluatedPolicyDomainState=_evaluatedPolicyDomainState;
@property (strong, nonatomic) NSData *externalizedContext; // @synthesize externalizedContext=_externalizedContext;
@property (nonatomic, getter=isFallbackButtonVisible) BOOL fallbackButtonVisible; // @synthesize fallbackButtonVisible=_fallbackButtonVisible;
@property (nonatomic) BOOL interactionNotAllowed;
@property (copy, nonatomic) NSString *localizedCancelTitle;
@property (copy, nonatomic) NSString *localizedFallbackTitle;
@property (copy, nonatomic) NSString *localizedReason;
@property (strong, nonatomic) NSNumber *maxBiometryFailures; // @synthesize maxBiometryFailures=_maxBiometryFailures;
@property (nonatomic) double touchIDAuthenticationAllowableReuseDuration;
@property (strong, nonatomic) NSNumber *touchIDAuthenticationRetryLimit;
@property (weak, nonatomic) id<LAUIDelegate> uiDelegate;

+ (id)currentContext;
+ (void)notifyEvent:(long long)arg1;
- (void).cxx_destruct;
- (id)_evaluationMechanismsFromReturnedError:(id)arg1 error:(id *)arg2;
- (id)_hashWithBundleIdentifier:(id)arg1;
- (id)_publicErrorFromInternalError:(id)arg1 options:(id)arg2;
- (id)_serverPropertyValueForOption:(long long)arg1;
- (void)_setServerPropertyForOption:(long long)arg1 value:(id)arg2;
- (BOOL)canEvaluatePolicy:(long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)enterPassword:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 localizedReason:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (id)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 options:(id)arg3 error:(id *)arg4;
- (void)evaluateAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 options:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)evaluatePolicy:(long long)arg1 localizedReason:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)evaluatePolicy:(long long)arg1 options:(id)arg2 error:(id *)arg3;
- (void)evaluatePolicy:(long long)arg1 options:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (id)evaluationMechanismsForAccessControl:(struct __SecAccessControl *)arg1 operation:(long long)arg2 error:(id *)arg3;
- (id)evaluationMechanismsForPolicy:(long long)arg1 error:(id *)arg2;
- (void)failProcessedEvent:(long long)arg1 failureError:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (unsigned long long)hash;
- (id)init;
- (id)initWithExternalizedContext:(id)arg1;
- (id)initWithExternalizedContext:(id)arg1 uiDelegate:(id)arg2;
- (id)initWithUIDelegate:(id)arg1;
- (void)invalidate;
- (BOOL)isCredentialSet:(long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)optionAuthenticationReason;
- (id)optionAuthenticationTitle;
- (id)optionBiometryLockoutRecovery;
- (id)optionCallerAuditToken;
- (id)optionCallerName;
- (id)optionCallerPID;
- (id)optionCancelVisible;
- (id)optionFaceDetectLength;
- (id)optionFallbackVisible;
- (id)optionMaxBiometryFailures;
- (id)optionNoFailureUI;
- (id)optionNotInteractive;
- (id)optionPINFirst;
- (id)optionPINLength;
- (id)optionPINTitle;
- (id)optionPasscodeScreenBlur;
- (id)optionPasscodeScreenStyle;
- (id)optionPasscodeTitle;
- (id)optionPasswordAuthenticationReason;
- (id)optionPresentationStyle;
- (id)optionReturnBiometryDatabaseHash;
- (id)optionSharedValidity;
- (id)optionSoftwareUpdateManifest;
- (id)optionSoftwareUpdateStashMode;
- (id)optionTimeout;
- (id)optionTintColor;
- (id)optionTransitionStyle;
- (id)optionUserCancel;
- (id)optionUserFallback;
- (void)prearmTouchIDWithReply:(CDUnknownBlockType)arg1;
- (void)resetProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)resetWithReply:(CDUnknownBlockType)arg1;
- (void)retryProcessedEvent:(long long)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setCredential:(id)arg1 forProcessedEvent:(long long)arg2 credentialType:(long long)arg3 reply:(CDUnknownBlockType)arg4;
- (BOOL)setCredential:(id)arg1 type:(long long)arg2;
- (BOOL)setCredential:(id)arg1 type:(long long)arg2 error:(id *)arg3;
- (void)setCredential:(id)arg1 type:(long long)arg2 reply:(CDUnknownBlockType)arg3;
- (void)setOptionAuthenticationReason:(id)arg1;
- (void)setOptionAuthenticationTitle:(id)arg1;
- (void)setOptionBiometryLockoutRecovery:(id)arg1;
- (void)setOptionCallerAuditToken:(id)arg1;
- (void)setOptionCallerName:(id)arg1;
- (void)setOptionCallerPID:(id)arg1;
- (void)setOptionCancelVisible:(id)arg1;
- (void)setOptionFaceDetectLength:(id)arg1;
- (void)setOptionFallbackVisible:(id)arg1;
- (void)setOptionMaxBiometryFailures:(id)arg1;
- (void)setOptionNoFailureUI:(id)arg1;
- (void)setOptionNotInteractive:(id)arg1;
- (void)setOptionPINFirst:(id)arg1;
- (void)setOptionPINLength:(id)arg1;
- (void)setOptionPINTitle:(id)arg1;
- (void)setOptionPasscodeScreenBlur:(id)arg1;
- (void)setOptionPasscodeScreenStyle:(id)arg1;
- (void)setOptionPasscodeTitle:(id)arg1;
- (void)setOptionPasswordAuthenticationReason:(id)arg1;
- (void)setOptionPresentationStyle:(id)arg1;
- (void)setOptionReturnBiometryDatabaseHash:(id)arg1;
- (void)setOptionSharedValidity:(id)arg1;
- (void)setOptionSoftwareUpdateManifest:(id)arg1;
- (void)setOptionSoftwareUpdateStashMode:(id)arg1;
- (void)setOptionTimeout:(id)arg1;
- (void)setOptionTintColor:(id)arg1;
- (void)setOptionTransitionStyle:(id)arg1;
- (void)setOptionUserCancel:(id)arg1;
- (void)setOptionUserFallback:(id)arg1;
- (void)withCurrentContextExecute:(CDUnknownBlockType)arg1 queue:(id)arg2;

@end

