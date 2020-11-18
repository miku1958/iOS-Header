//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPDaemonProtocol-Protocol.h>

@class NSXPCConnection;

@interface CDPDClientHandler : NSObject <CDPDaemonProtocol>
{
    NSXPCConnection *_connection;
    unsigned long long _entitlements;
    unsigned long long _clientType;
    id _notificationObject;
}

- (void).cxx_destruct;
- (BOOL)_allowDataRecovery;
- (BOOL)_allowFollowUps;
- (BOOL)_allowRecoveryKey;
- (BOOL)_allowStateMachineAccess;
- (BOOL)_allowUtilityAccess;
- (void)_performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 errorProviuder:(id)arg4 resultParser:(id)arg5 secureBackUpController:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)_removeObserver;
- (void)_startObservingConnectionStateForRepairWithStateMachine:(id)arg1;
- (void)clearFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)deleteRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)finishOfflineLocalSecretChangeWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateNewRecoveryKeyWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)generateRandomRecoveryKeyWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)hasLocalSecretWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithConnection:(id)arg1 entitlements:(unsigned long long)arg2 clientType:(unsigned long long)arg3;
- (void)isICDPEnabledForDSID:(id)arg1 checkWithServer:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)localSecretChangedTo:(id)arg1 secretType:(unsigned long long)arg2 context:(id)arg3 uiProvider:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)performRecoveryWithContext:(id)arg1 uiProvider:(id)arg2 authProvider:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)postFollowUpWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)recoverAndSynchronizeSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)recoverSquirrelWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)removeNonViewAwarePeersFromCircleWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)repairCloudDataProtectionStateWithContext:(id)arg1 uiProvider:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)shouldPerformRepairForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)startCircleApplicationApprovalServerWithContext:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

