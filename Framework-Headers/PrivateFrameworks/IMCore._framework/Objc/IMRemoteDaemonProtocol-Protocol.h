//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMItem, IMMessageItem, NSArray, NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@protocol IMRemoteDaemonProtocol <NSObject>
- (void)acceptSubscriptionRequest:(BOOL)arg1 from:(NSString *)arg2 account:(NSString *)arg3;
- (void)account:(NSString *)arg1 avAction:(unsigned int)arg2 withArguments:(NSDictionary *)arg3 toAVChat:(NSString *)arg4 isVideo:(BOOL)arg5;
- (void)activateAccounts:(NSArray *)arg1;
- (void)addAccount:(NSString *)arg1 defaults:(NSDictionary *)arg2 service:(NSString *)arg3;
- (void)addAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)authenticateAccount:(NSString *)arg1;
- (void)autoLoginAccount:(NSString *)arg1;
- (void)autoLoginActiveAccountsIfNecessary;
- (void)autoReconnectAccount:(NSString *)arg1;
- (void)beginRecordingMessagesToReplayDatabase:(NSString *)arg1;
- (void)broadcastCloudKitState;
- (void)broadcastCloudKitStateAfterClearingErrors;
- (void)broadcastCloudKitStateAfterFetchingAccountStatus;
- (void)cancelVCRequestWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)cancelVCRequestWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 reason:(NSNumber *)arg4 account:(NSString *)arg5;
- (void)changeGroup:(NSString *)arg1 changes:(NSDictionary *)arg2 account:(NSString *)arg3;
- (void)changeGroups:(NSDictionary *)arg1 account:(NSString *)arg2;
- (void)changeMyStatus:(NSDictionary *)arg1 forAccount:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateDisplayName:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateIsFiltered:(BOOL)arg2;
- (void)chat:(NSString *)arg1 updateLastAddressHandle:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateLastAddressedSIMID:(NSString *)arg2;
- (void)chat:(NSString *)arg1 updateProperties:(NSDictionary *)arg2;
- (void)cleanupAttachments;
- (void)clearAnalyticDefaultsAndLocalSyncState;
- (void)clearChatZoneSyncToken;
- (void)clearDataFromCloudKit;
- (void)clearHistoryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 beforeGUID:(NSString *)arg4 afterGUID:(NSString *)arg5 chatID:(NSString *)arg6 queryID:(NSString *)arg7;
- (void)clearLocalCloudKitSyncState;
- (void)closeSessionChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)consumeCodeWithMessageGUID:(NSString *)arg1;
- (void)createAttachmentZone;
- (void)createChatZone;
- (void)deactivateAccounts:(NSArray *)arg1;
- (void)debugUpdateGroupParticipantversion:(unsigned long long)arg1 chatIdentifier:(NSString *)arg2;
- (void)declineInvitationToChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)deleteAttachmentZone;
- (void)deleteChatZone;
- (void)deleteExitRecord;
- (void)deleteFileTransferWithGUID:(NSString *)arg1;
- (void)deleteMessageWithGUIDs:(NSArray *)arg1 queryID:(NSString *)arg2;
- (void)deleteMessagesZone;
- (void)deleteSalt;
- (void)downloadAttachmentAssets;
- (void)downloadHighQualityVariantOfFileTransferWithGUID:(NSString *)arg1;
- (void)downloadPurgedAttachmentsForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4;
- (void)downloadStickerPackWithGUID:(NSString *)arg1 isIncomingMessage:(BOOL)arg2 ignoreCache:(BOOL)arg3;
- (void)downloadStickerWithGUID:(NSString *)arg1;
- (void)eagerUploadCancel:(NSURL *)arg1;
- (void)eagerUploadTransfer:(NSDictionary *)arg1;
- (void)enrollDeviceForSMSRelay:(NSString *)arg1 account:(NSString *)arg2;
- (void)enrollSelfDeviceForSMSRelay:(NSString *)arg1;
- (void)fetchCloudKitSyncStateDebuggingInfo:(NSDictionary *)arg1;
- (void)fetchExitRecord;
- (void)fetchLatestRampState;
- (void)fetchLatestSalt;
- (void)fetchSecurityLevelAndUpdateMiCSwitchEligibility;
- (void)fetchSyncStateStatistics;
- (void)fetchSyncStateStats;
- (void)fileTransfer:(NSString *)arg1 acceptedWithPath:(NSString *)arg2 autoRename:(BOOL)arg3 overwrite:(BOOL)arg4;
- (void)fileTransfer:(NSString *)arg1 createdWithProperties:(NSDictionary *)arg2;
- (void)fileTransfer:(NSString *)arg1 updatedWithProperties:(NSDictionary *)arg2;
- (void)fileTransferRemoved:(NSString *)arg1;
- (void)fileTransferStopped:(NSString *)arg1;
- (void)holdBuddyUpdatesAccount:(NSString *)arg1;
- (void)importMessage:(NSDictionary *)arg1 isRead:(BOOL)arg2;
- (void)initiateCNContactBasedChatMerge:(BOOL)arg1;
- (void)initiatePeriodicSync;
- (void)initiateSync;
- (void)invitePersonInfo:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)invitePersonInfoToiMessageChat:(NSDictionary *)arg1 withMessage:(IMMessageItem *)arg2 toChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSArray *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 groupID:(NSString *)arg5 lastAddressedHandle:(NSString *)arg6 lastAddressedSIMID:(NSString *)arg7 joinProperties:(NSDictionary *)arg8 account:(NSString *)arg9;
- (void)joinChatID:(NSString *)arg1 handleInfo:(NSArray *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 joinProperties:(NSDictionary *)arg5 account:(NSString *)arg6;
- (void)leaveChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)leaveiMessageChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)loadAttachmentsForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5;
- (void)loadChatWithChatIdentifier:(NSString *)arg1;
- (void)loadChatsWithChatID:(NSString *)arg1;
- (void)loadDeletedMessagesWithLimit:(long long)arg1;
- (void)loadDirtyMessagesWithLimit:(long long)arg1;
- (void)loadFrequentRepliesForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(unsigned long long)arg4 chatID:(NSString *)arg5 queryID:(NSString *)arg6;
- (void)loadHistoryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(unsigned long long)arg4 beforeGUID:(NSString *)arg5 afterGUID:(NSString *)arg6 chatID:(NSString *)arg7 queryID:(NSString *)arg8;
- (void)loadIsDownloadingPurgedAttachmentsForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5;
- (void)loadMessageWithGUID:(NSString *)arg1 queryID:(NSString *)arg2;
- (void)loadPagedHistoryForGUID:(NSString *)arg1 chatIdentifiers:(NSArray *)arg2 style:(unsigned char)arg3 onServices:(NSArray *)arg4 numberOfMessagesBefore:(unsigned long long)arg5 numberOfMessagesAfter:(unsigned long long)arg6 chatID:(NSString *)arg7 queryID:(NSString *)arg8;
- (unsigned long long)loadUncachedAttachmentCountForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5;
- (void)loadUnreadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 limit:(unsigned long long)arg4 fallbackGUID:(NSString *)arg5 chatId:(NSString *)arg6 queryID:(NSString *)arg7;
- (void)logDumpAndSendMessageTo:(NSString *)arg1 forHours:(int)arg2;
- (void)loginAccount:(NSString *)arg1;
- (void)loginAllAccounts;
- (void)logoutAccount:(NSString *)arg1;
- (void)logoutAllAccounts;
- (void)markAllChatsAsDirty;
- (void)markAsSpamForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 chatID:(NSString *)arg4 queryID:(NSString *)arg5 autoReport:(BOOL)arg6;
- (BOOL)markAttachment:(NSString *)arg1 sender:(NSString *)arg2 recipients:(NSArray *)arg3 isIncoming:(BOOL)arg4;
- (void)markHasHadSuccessfulQueryForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3;
- (void)markMessageAsCorrupt:(NSString *)arg1 setCorrupt:(BOOL)arg2;
- (void)markPlayedExpressiveSendForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markPlayedForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markPlayedForMessageGUID:(NSString *)arg1;
- (void)markReadForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 messages:(NSArray *)arg4 clientUnreadCount:(unsigned long long)arg5;
- (void)markReadForMessageGUID:(NSString *)arg1;
- (void)markReadForMessageGUID:(NSString *)arg1 callerOrigin:(long long)arg2;
- (void)markSavedForIDs:(NSArray *)arg1 style:(unsigned char)arg2 onServices:(NSArray *)arg3 message:(IMMessageItem *)arg4;
- (void)markSavedForMessageGUID:(NSString *)arg1;
- (void)metricAttachments:(long long)arg1;
- (void)passwordUpdatedAccount:(NSString *)arg1;
- (void)performAdditionalStorageRequiredCheck;
- (void)preWarm;
- (void)printCachedRampState;
- (void)printCachedSalt;
- (void)purgeAttachments:(long long)arg1;
- (void)registerAccount:(NSString *)arg1;
- (void)relay:(NSString *)arg1 sendCancel:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)relay:(NSString *)arg1 sendInitateRequest:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)relay:(NSString *)arg1 sendUpdate:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)removeAccount:(NSString *)arg1;
- (void)removeAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)removeChat:(NSString *)arg1;
- (void)removeChatID:(NSString *)arg1 identifier:(NSString *)arg2 style:(unsigned char)arg3 account:(NSString *)arg4;
- (void)removePathFromiCloudBackups:(NSString *)arg1;
- (void)removePersonInfo:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)removePersonInfoFromiMessageChat:(NSDictionary *)arg1 chatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)renameGroup:(NSString *)arg1 to:(NSString *)arg2 account:(NSString *)arg3;
- (void)replayMessagesFromDatabasePath:(NSString *)arg1;
- (void)reportMetricToCK:(NSString *)arg1 withDict:(NSDictionary *)arg2;
- (void)requestBuddyPicturesAndPropertiesForAccount:(NSString *)arg1;
- (void)requestGroupsAccount:(NSString *)arg1;
- (void)requestLastMessagesForChats;
- (void)requestMOCEnabledState;
- (void)requestOneTimeCodeStatus;
- (void)requestPendingACInvites;
- (void)requestPendingMessages;
- (void)requestPendingVCInvites;
- (void)requestProperty:(NSString *)arg1 ofPerson:(NSString *)arg2 account:(NSString *)arg3;
- (void)requestQOSClassWhileServicingRequestsWithID:(NSString *)arg1;
- (void)requestSubscriptionTo:(NSString *)arg1 account:(NSString *)arg2;
- (void)requestVCWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)respondToVCInvitationWithPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)resumeBuddyUpdatesAccount:(NSString *)arg1;
- (void)sendAVMessageToPerson:(NSString *)arg1 sessionID:(unsigned int)arg2 type:(unsigned int)arg3 userInfo:(NSDictionary *)arg4 conference:(NSString *)arg5 account:(NSString *)arg6;
- (void)sendBalloonPayload:(NSData *)arg1 attachments:(NSArray *)arg2 withMessageGUID:(NSString *)arg3 bundleID:(NSString *)arg4;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)sendCommand:(NSNumber *)arg1 withProperties:(NSDictionary *)arg2 toPerson:(NSString *)arg3 account:(NSString *)arg4 toChatID:(NSString *)arg5 identifier:(NSString *)arg6 style:(unsigned char)arg7;
- (void)sendCounterProposalToPerson:(NSString *)arg1 properties:(NSDictionary *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)sendMappingPacket:(NSString *)arg1 toHandle:(NSString *)arg2 account:(NSString *)arg3;
- (void)sendMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendNotificationMessageToUniqueID:(NSString *)arg1 withCommand:(long long)arg2;
- (void)sendPlayedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendReadReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendRestoreFailuresLogDumps;
- (void)sendSavedReceiptForMessage:(IMMessageItem *)arg1 toChatID:(NSString *)arg2 identifier:(NSString *)arg3 style:(unsigned char)arg4 account:(NSString *)arg5;
- (void)sendStandaloneFileTransfer:(NSString *)arg1;
- (void)sendStickerAtPath:(NSString *)arg1 toChatID:(NSString *)arg2 forNBubbleFromTheBottom:(unsigned long long)arg3 atX:(NSString *)arg4 atY:(NSString *)arg5 scale:(NSString *)arg6 balloonWidth:(NSString *)arg7;
- (void)sendVCUpdate:(NSData *)arg1 toPerson:(NSString *)arg2 conference:(NSString *)arg3 account:(NSString *)arg4;
- (void)setAllowList:(NSArray *)arg1 account:(NSString *)arg2;
- (void)setBlockIdleStatus:(BOOL)arg1 account:(NSString *)arg2;
- (void)setBlockList:(NSArray *)arg1 account:(NSString *)arg2;
- (void)setBlockingMode:(unsigned int)arg1 account:(NSString *)arg2;
- (void)setCloudKitEnabled:(BOOL)arg1;
- (void)setListenerCapabilities:(unsigned int)arg1;
- (void)setProperties:(NSDictionary *)arg1 ofParticipant:(NSString *)arg2 inChatID:(NSString *)arg3 identifier:(NSString *)arg4 style:(unsigned char)arg5 account:(NSString *)arg6;
- (void)setVCCapabilities:(unsigned long long)arg1;
- (void)setValue:(id)arg1 ofPersistentProperty:(NSString *)arg2;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2;
- (void)setValue:(id)arg1 ofProperty:(NSString *)arg2 ofPerson:(NSString *)arg3 account:(NSString *)arg4;
- (void)setiCloudBackupsDisabled:(BOOL)arg1;
- (void)silenceChat:(NSString *)arg1 untilDate:(NSDate *)arg2;
- (void)simulateMessageReceive:(NSString *)arg1 serviceName:(NSString *)arg2 handles:(NSArray *)arg3 sender:(NSString *)arg4;
- (void)simulateOneTimeCodeArriving:(NSDictionary *)arg1;
- (void)startWatchingBuddy:(NSString *)arg1 account:(NSString *)arg2;
- (void)stopRecordingMessagesReplayDatabase;
- (void)stopWatchingBuddy:(NSString *)arg1 account:(NSString *)arg2;
- (void)storeItem:(IMItem *)arg1 inChatGUID:(NSString *)arg2;
- (void)syncAttachments;
- (void)syncChats;
- (void)syncDeletesToCloudKit;
- (void)syncMessages;
- (void)terminateForcingIfNeeded:(BOOL)arg1;
- (void)toggleiCloudBackupsIfNeeded;
- (void)tryToAutoCollectLogsWithErrorString:(NSString *)arg1 sendLogsTo:(NSString *)arg2;
- (void)tryToDisableAllDevices;
- (void)unEnrollDeviceForSMSRelay:(NSString *)arg1 account:(NSString *)arg2;
- (void)unregisterAccount:(NSString *)arg1;
- (void)unvalidateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)updateAttachmentFileSizes;
- (void)updateAuthorizationCredentials:(NSString *)arg1 token:(NSString *)arg2 account:(NSString *)arg3;
- (void)updateBalloonPayload:(NSData *)arg1 attachments:(NSArray *)arg2 forMessageGUID:(NSString *)arg3;
- (void)updateMessage:(IMMessageItem *)arg1;
- (void)updateUnformattedID:(NSString *)arg1 forBuddyID:(NSString *)arg2 onService:(NSString *)arg3;
- (void)uploadDailyAnalyticstoCloudKit;
- (void)validateAliases:(NSArray *)arg1 account:(NSString *)arg2;
- (void)validateProfileAccount:(NSString *)arg1;
- (void)writeAccount:(NSString *)arg1 defaults:(NSDictionary *)arg2;
- (void)writeAttachments;
- (void)writeCloudKitSyncCounts:(NSDictionary *)arg1;
- (void)writeDirtyChats;
- (void)writeDirtyMessages;
- (void)writeExitRecord;
@end

