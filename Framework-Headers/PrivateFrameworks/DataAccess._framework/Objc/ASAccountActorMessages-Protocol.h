//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class DAFolder, DAFolderChange, DAMailboxRequest, DAMessageFetchAttachmentRequest, DAResolveRecipientsRequest, DASearchQuery, NSArray, NSData, NSNotification, NSSet, NSString;
@protocol DAMailboxFetchSearchResultConsumer, DAMailboxRequestConsumer, DAMessageFetchAttachmentConsumer, DAMessageMoveRequestConsumer, DAMessageSendConsumer, DAResolveRecipientsConsumer;

@protocol ASAccountActorMessages
- (oneway void)_accountPasswordChanged;
- (oneway void)_daemonDiedNotification:(NSNotification *)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(NSNotification *)arg1;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(NSNotification *)arg1;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(DASearchQuery *)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (NSString *)customSignature;
- (DAFolder *)deletedItemsFolder;
- (DAFolder *)draftsFolder;
- (NSData *)encryptionIdentityPersistentReference;
- (NSSet *)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;
- (NSSet *)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;
- (BOOL)generatesBulletins;
- (DAFolder *)inboxFolder;
- (int)mailNumberOfPastDaysToSync;
- (NSArray *)mailboxes;
- (oneway void)monitorFoldersForUpdates:(NSArray *)arg1;
- (int)performFetchAttachmentRequest:(DAMessageFetchAttachmentRequest *)arg1 consumer:(id<DAMessageFetchAttachmentConsumer>)arg2;
- (int)performFetchMessageSearchResultRequests:(NSArray *)arg1 consumer:(id<DAMailboxFetchSearchResultConsumer>)arg2;
- (void)performFolderChange:(DAFolderChange *)arg1 isUserRequested:(BOOL)arg2;
- (int)performMailboxRequest:(DAMailboxRequest *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(BOOL)arg4 consumer:(id<DAMailboxRequestConsumer>)arg5;
- (int)performMailboxRequests:(NSArray *)arg1 mailbox:(NSString *)arg2 previousTag:(NSString *)arg3 isUserRequested:(BOOL)arg4 consumer:(id<DAMailboxRequestConsumer>)arg5;
- (int)performMoveRequests:(NSArray *)arg1 consumer:(id<DAMessageMoveRequestConsumer>)arg2;
- (int)performResolveRecipientsRequest:(DAResolveRecipientsRequest *)arg1 consumer:(id<DAResolveRecipientsConsumer>)arg2;
- (oneway void)performSearchQuery:(DASearchQuery *)arg1;
- (BOOL)reattemptInvitationLinkageForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2;
- (BOOL)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 useSmartTasksIfPossible:(BOOL)arg8 consumer:(id<DAMessageSendConsumer>)arg9 context:(id)arg10;
- (int)sendMessageWithRFC822Data:(NSData *)arg1 messageID:(NSString *)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(NSString *)arg4 originalMessageItemID:(NSString *)arg5 originalMessageLongID:(NSString *)arg6 originalAccountID:(NSString *)arg7 useSmartTasksIfPossible:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id<DAMessageSendConsumer>)arg10 context:(id)arg11;
- (DAFolder *)sentItemsFolder;
- (oneway void)setAccount:(id)arg1;
- (oneway void)setCustomSignature:(NSString *)arg1;
- (oneway void)setEncryptionIdentityPersistentReference:(NSData *)arg1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(NSSet *)arg1 deleted:(NSSet *)arg2 foldersTag:(NSString *)arg3;
- (oneway void)setGeneratesBulletins:(BOOL)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)setSigningIdentityPersistentReference:(NSData *)arg1;
- (oneway void)shutdown;
- (NSData *)signingIdentityPersistentReference;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(NSArray *)arg1;
- (int)supportsConversations;
- (int)supportsDraftFolderSync;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (NSString *)unactionableICSRepresentationForMetaData:(NSData *)arg1 inFolderWithId:(NSString *)arg2 outSummary:(id *)arg3;
@end

