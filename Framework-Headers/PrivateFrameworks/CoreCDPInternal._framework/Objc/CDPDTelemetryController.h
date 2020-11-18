//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CDPDTelemetryController : NSObject
{
}

+ (id)sharedInstance;
- (void)didChangeLocalSecret;
- (void)didLockAccount;
- (void)didRemoveLocalSecret;
- (void)didUnlockAccount;
- (void)pcsAlreadyMigrated;
- (void)pcsMigrationFailed;
- (void)pcsMigrationSucceeded;
- (void)pcsRollbackFailed;
- (void)pcsRollbackSucceeded;
- (void)piggybackAttempt;
- (void)piggybackSuccess;
- (void)signInFailedDueIncorrectICSCAttempts;
- (void)signInFailedDueToLockedAccount;
- (void)signInSucceededWithIncorrectICSCAttemptCount:(unsigned long long)arg1 didUseRemoteApproval:(BOOL)arg2;
- (void)signInWithUserElectingResetProtectedData;
- (void)signInWithUserSkippingFlow;
- (void)stateMachineStartedFromClient:(unsigned long long)arg1;

@end

