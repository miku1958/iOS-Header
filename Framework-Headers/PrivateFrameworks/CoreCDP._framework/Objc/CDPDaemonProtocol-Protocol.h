//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CDPContext, CDPFollowUpContext, NSString;
@protocol CDPAuthProviderInternal, CDPStateUIProviderInternal;

@protocol CDPDaemonProtocol
- (void)clearFollowUpWithContext:(CDPFollowUpContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)deleteRecoveryKeyWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)fetchManateeAvailabilityWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)finishOfflineLocalSecretChangeWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)generateNewRecoveryKeyWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)generateRandomRecoveryKeyWithContext:(CDPContext *)arg1 completion:(void (^)(NSString *, NSError *))arg2;
- (void)handleCloudDataProtectionStateWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, BOOL, NSError *))arg3;
- (void)hasLocalSecretWithCompletion:(void (^)(BOOL))arg1;
- (void)isICDPEnabledForDSID:(NSString *)arg1 checkWithServer:(BOOL)arg2 completion:(void (^)(BOOL))arg3;
- (void)isUserVisibleKeychainSyncEnabledWithCompletion:(void (^)(BOOL))arg1;
- (void)localSecretChangedTo:(NSString *)arg1 secretType:(unsigned long long)arg2 context:(CDPContext *)arg3 uiProvider:(id<CDPStateUIProviderInternal>)arg4 completion:(void (^)(BOOL, NSError *))arg5;
- (void)performRecoveryWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 authProvider:(id<CDPAuthProviderInternal>)arg3 completion:(void (^)(NSDictionary *, NSError *))arg4;
- (void)postFollowUpWithContext:(CDPFollowUpContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)recoverAndSynchronizeSquirrelWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)recoverSquirrelWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)removeNonViewAwarePeersFromCircleWithContext:(CDPContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)repairCloudDataProtectionStateWithContext:(CDPContext *)arg1 uiProvider:(id<CDPStateUIProviderInternal>)arg2 completion:(void (^)(BOOL, NSError *))arg3;
- (void)setUserVisibleKeychainSyncEnabled:(BOOL)arg1 withCompletion:(void (^)(BOOL, NSError *))arg2;
- (void)shouldPerformRepairForContext:(CDPContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)startCircleApplicationApprovalServerWithContext:(CDPContext *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end
