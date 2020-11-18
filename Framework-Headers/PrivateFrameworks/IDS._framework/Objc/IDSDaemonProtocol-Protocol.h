//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSNumber, NSObject, NSSet, NSString, NSURL;
@protocol OS_xpc_object;

@protocol IDSDaemonProtocol <NSObject>

@optional
- (void)_removeAccount:(NSString *)arg1;
- (void)_removeAndDeregisterAccount:(NSString *)arg1;
- (void)_reregisterAndReidentify:(NSNumber *)arg1 account:(NSString *)arg2;
- (void)acceptInvitation:(NSString *)arg1;
- (void)acceptInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)acknowledgeMessageWithGUID:(NSString *)arg1 forAccountWithUniqueID:(NSString *)arg2 broadcastTime:(NSNumber *)arg3 messageSize:(NSNumber *)arg4 priority:(NSNumber *)arg5;
- (void)acknowledgeMessageWithStorageGUID:(NSString *)arg1 realGUID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3 broadcastTime:(NSNumber *)arg4 messageSize:(NSNumber *)arg5 priority:(NSNumber *)arg6 broadcastID:(long long)arg7;
- (void)acknowledgeOutgoingMessageWithGUID:(NSString *)arg1 alternateCallbackID:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3;
- (void)acknowledgeSessionID:(NSString *)arg1 clientID:(NSString *)arg2;
- (void)addAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 uniqueID:(NSString *)arg3 accountType:(int)arg4 accountInfo:(NSDictionary *)arg5;
- (void)addAliases:(NSArray *)arg1 toAccount:(NSString *)arg2;
- (void)addPairedDevice:(NSString *)arg1;
- (void)authTokenChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)authenticateAccount:(NSString *)arg1;
- (void)authenticationChangedForAccount:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1;
- (void)cancelInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)cancelItemWithIdentifier:(NSString *)arg1 service:(NSString *)arg2;
- (void)cleanupSession:(NSString *)arg1;
- (void)closeSocketWithOptions:(NSDictionary *)arg1;
- (void)connectPairedDevice:(NSString *)arg1;
- (void)continuityClientInstanceCreated;
- (void)continuityConnectToPeer:(NSString *)arg1;
- (void)continuityDisconnectFromPeer:(NSString *)arg1;
- (void)continuityStartAdvertisingOfType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 peers:(NSArray *)arg3 withOptions:(NSDictionary *)arg4;
- (void)continuityStartScanningForType:(long long)arg1 withData:(NSData *)arg2 withOptions:(NSDictionary *)arg3;
- (void)continuityStartTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)continuityStopAdvertisingOfType:(long long)arg1;
- (void)continuityStopScanningForType:(long long)arg1;
- (void)continuityStopTrackingPeer:(NSString *)arg1 forType:(long long)arg2;
- (void)deactivateAndPurgeIdentifyForAccount:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1;
- (void)declineInvitation:(NSString *)arg1 withData:(NSData *)arg2;
- (void)deletePairedDevice:(NSString *)arg1;
- (void)disableAccount:(NSString *)arg1;
- (void)dropAllMessagesWithoutAnyAllowedClassifier;
- (void)enableAccount:(NSString *)arg1;
- (void)endSession:(NSString *)arg1;
- (void)endSession:(NSString *)arg1 withData:(NSData *)arg2;
- (void)getDeliveryStats;
- (void)getLocalDeviceInfo;
- (void)getPairedDeviceInfo;
- (void)hardDeregister;
- (void)homeKitGetAdminAccessTokensWithServiceUserID:(NSString *)arg1 accessoryID:(NSString *)arg2 pairingToken:(NSData *)arg3;
- (void)homeKitGetConsentTokensWithServiceUserID:(NSString *)arg1 accessoryIDs:(NSArray *)arg2 adminID:(NSString *)arg3;
- (void)homeKitGetServiceUserIDs;
- (void)homeKitGetUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 userHandle:(NSString *)arg3 accessoryRequests:(NSArray *)arg4;
- (void)homeKitRefreshUserAccessTokensWithServiceUserID:(NSString *)arg1 userID:(NSString *)arg2 accessoryRequests:(NSArray *)arg3;
- (void)iCloudSignInHackWithUserName:(NSString *)arg1 password:(NSString *)arg2;
- (void)iCloudSignInWithUserName:(NSString *)arg1 authToken:(NSString *)arg2 password:(NSString *)arg3 accountInfo:(NSDictionary *)arg4;
- (void)iCloudSignOut;
- (void)iCloudSignOutHack;
- (void)iCloudUpdateForUserName:(NSString *)arg1 accountInfo:(NSDictionary *)arg2;
- (void)idsiCloudSignInDataMigratorForID:(NSString *)arg1;
- (void)incomingAccountSyncMessage:(NSDictionary *)arg1;
- (void)initialLocalSyncCompletedForServices:(NSArray *)arg1;
- (void)initialLocalSyncStartedForServices:(NSArray *)arg1;
- (void)kickGetDependentForAccount:(NSString *)arg1;
- (void)localSetupCompleted;
- (void)localSetupUnpair;
- (void)localSetupUnpairStart;
- (void)openSocketWithOptions:(NSDictionary *)arg1;
- (void)passwordChanged:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)passwordUpdatedForAccount:(NSString *)arg1;
- (void)recoverSMSSignature:(NSString *)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)registerForNotificationsOnServices:(NSSet *)arg1;
- (void)removeAliases:(NSArray *)arg1 fromAccount:(NSString *)arg2;
- (void)reportiMessageSpam:(NSArray *)arg1 toURI:(NSString *)arg2;
- (void)rollKeys;
- (void)sendAppAckWithGUID:(NSString *)arg1 toDestination:(NSString *)arg2 forAccountWithUniqueID:(NSString *)arg3;
- (void)sendInvitation:(NSString *)arg1 withData:(NSData *)arg2 declineOnError:(BOOL)arg3;
- (void)sendInvitation:(NSString *)arg1 withOptions:(NSDictionary *)arg2;
- (void)sendMessageWithSendParameters:(NSDictionary *)arg1;
- (void)sendPersistedFile:(NSURL *)arg1 userInfo:(NSDictionary *)arg2 toDestinations:(NSArray *)arg3 usingAccountWithUniqueID:(NSString *)arg4 identifier:(NSString *)arg5;
- (void)sendServerMessage:(NSDictionary *)arg1 command:(NSNumber *)arg2 usingAccountWithUniqueID:(NSString *)arg3;
- (void)sendSessionMessage:(NSData *)arg1 toSession:(NSString *)arg2;
- (void)setAllowedTrafficClasses:(NSSet *)arg1;
- (void)setAudioEnabled:(BOOL)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setInviteTimetout:(long long)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setLinkPreferences:(NSDictionary *)arg1 service:(NSString *)arg2;
- (void)setListenerServices:(NSSet *)arg1 commands:(NSSet *)arg2 capabilities:(unsigned int)arg3;
- (void)setLoginID:(NSString *)arg1 forAccount:(NSString *)arg2;
- (void)setMuted:(BOOL)arg1 forSessionWithUniqueID:(NSString *)arg2;
- (void)setNSUUID:(NSString *)arg1 onDeviceWithUniqueID:(NSString *)arg2 forService:(NSString *)arg3;
- (void)setPairedDeviceInfo:(NSDictionary *)arg1;
- (void)setPreferInfraWiFi:(BOOL)arg1 service:(NSString *)arg2;
- (void)setupAccountWithLoginID:(NSString *)arg1 serviceName:(NSString *)arg2 accountType:(int)arg3 accountConfig:(NSDictionary *)arg4 authToken:(NSString *)arg5 password:(NSString *)arg6 transactionID:(NSString *)arg7;
- (void)setupNewSessionWithConfiguration:(NSDictionary *)arg1;
- (void)startLocalSetup;
- (void)startOTRTest:(NSString *)arg1 priority:(long long)arg2;
- (void)stopLocalSetup;
- (void)unregisterAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)updateAccount:(NSString *)arg1 withAccountInfo:(NSDictionary *)arg2;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 forAccount:(NSString *)arg3;
- (void)updateSubServices:(NSArray *)arg1 forService:(NSString *)arg2;
- (void)validateAliases:(NSArray *)arg1 forAccount:(NSString *)arg2;
- (void)validateProfileForAccount:(NSString *)arg1;
- (void)xpcObject:(NSObject<OS_xpc_object> *)arg1 objectContext:(NSDictionary *)arg2;
@end

