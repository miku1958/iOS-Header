//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreCDPInternal/CDPDRecoveryFlowController.h>

#import <CoreCDPInternal/CDPDRemoteDeviceSecretValidatorDelegate-Protocol.h>

@class NSString;

@interface CDPDRecoveryValidatedJoinFlowController : CDPDRecoveryFlowController <CDPDRemoteDeviceSecretValidatorDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_accountResetRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_cancelRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_entryLimitNoResetForRepairForDevice:(id)arg1;
- (id)_entryLimitResetAvailableBodyForDevice:(id)arg1;
- (id)_entryLimitSignInBodyForDevice:(id)arg1;
- (id)_entryLimitTitleForDevice:(id)arg1;
- (unsigned long long)_escapeOfferForDevices:(id)arg1 remoteApproval:(BOOL)arg2 forMultipleICSC:(BOOL)arg3 stringrayStatus:(BOOL)arg4;
- (void)_handleHardLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_handleSoftLimitErrorForCurrentContextWithDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_hardLimitErrorBodyWithDevice:(id)arg1;
- (id)_infoDictionaryWithTitle:(id)arg1 andBody:(id)arg2;
- (void)_populateUserInfo:(id)arg1 recoveryIndexHandlers:(id)arg2 withRecoveryOption:(id)arg3;
- (id)_remoteApprovalRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_resetDataErrorForCurrentContextWithRecoveryIndexMap:(id)arg1;
- (id)_resetProtectedDataErrorUnrecoverable;
- (void)_showAccountResetConfirmationWithCompletion:(CDUnknownBlockType)arg1;
- (void)_showAccountResetConfirmationWithoutRecovery:(CDUnknownBlockType)arg1;
- (void)_showEntryLimitError:(id)arg1 withRecoveryOptionHandlers:(id)arg2 defaultIndex:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_skipSignInRecoveryOptionWithCompletion:(CDUnknownBlockType)arg1;
- (id)_softLimitBodyForDevice:(id)arg1;
- (void)beginInteractiveRecoveryForDevices:(id)arg1 isUsingMultipleICSC:(BOOL)arg2 usingValidator:(id)arg3;
- (void)cancelRemoteSecretValidatorApplicationToJoinCircle:(id)arg1;
- (id)recoveryValidatorWithDevices:(id)arg1 forMultipleICSC:(BOOL)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)remoteSecretValidator:(id)arg1 applyToJoinCircleWithJoinHandler:(CDUnknownBlockType)arg2;
- (void)secretValidator:(id)arg1 didFailRecovery:(id)arg2 withError:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)secretValidator:(id)arg1 shouldAcceptRecoveryError:(id *)arg2;
- (void)secretValidatorWillAttemptRecovery;

@end

