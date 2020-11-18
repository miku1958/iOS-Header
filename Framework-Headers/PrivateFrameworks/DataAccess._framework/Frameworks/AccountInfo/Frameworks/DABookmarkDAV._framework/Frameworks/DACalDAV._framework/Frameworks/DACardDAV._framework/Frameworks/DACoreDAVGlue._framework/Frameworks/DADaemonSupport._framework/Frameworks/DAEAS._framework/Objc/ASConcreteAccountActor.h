//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DataAccess/ASAccountActor.h>

#import <DAEAS/ASAccountActorMessages-Protocol.h>

@class ASClientAccount;

@interface ASConcreteAccountActor : ASAccountActor <ASAccountActorMessages>
{
    ASClientAccount *_account;
}

@property (strong, nonatomic) ASClientAccount *account; // @synthesize account=_account;

+ (struct __CFRunLoop *)_actorRunLoop;
+ (void)_runActorThreadWithStartupLock:(id)arg1;
- (void).cxx_destruct;
- (oneway void)_daemonDiedNotification:(id)arg1;
- (oneway void)_folderHierarchyChanged;
- (oneway void)_folderUpdatedNotification:(id)arg1;
- (oneway void)_foldersThatExternalClientsCareAboutChanged;
- (oneway void)_newASPolicyKeyNotification:(id)arg1;
- (void)_performAsynchronousSerialOnActorQueue:(CDUnknownBlockType)arg1;
- (void)_performSynchronousSerialOnActorQueue:(CDUnknownBlockType)arg1;
- (void)_sendFailureToConsumer:(id)arg1;
- (oneway void)cancelAllSearchQueries;
- (oneway void)cancelSearchQuery:(id)arg1;
- (oneway void)cancelTaskWithID:(int)arg1;
- (id)customSignature;
- (id)deletedItemsFolder;
- (void)disable;
- (id)draftsFolder;
- (id)encryptionIdentityPersistentReference;
- (id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id *)arg2;
- (id)folderIDsThatExternalClientsCareAboutWithTag:(id *)arg1;
- (BOOL)generatesBulletins;
- (id)inboxFolder;
- (id)initWithDAAccount:(id)arg1;
- (int)mailNumberOfPastDaysToSync;
- (id)mailboxes;
- (oneway void)monitorFoldersForUpdates:(id)arg1;
- (int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
- (int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
- (void)performFolderChange:(id)arg1 isUserRequested:(BOOL)arg2;
- (int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
- (int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
- (int)performMoveRequests:(id)arg1 consumer:(id)arg2;
- (int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
- (oneway void)performSearchQuery:(id)arg1;
- (BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
- (BOOL)searchQueriesRunning;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 consumer:(id)arg9 context:(id)arg10;
- (int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11;
- (id)sentItemsFolder;
- (oneway void)setCustomSignature:(id)arg1;
- (oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
- (BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
- (oneway void)setGeneratesBulletins:(BOOL)arg1;
- (oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
- (oneway void)setSigningIdentityPersistentReference:(id)arg1;
- (oneway void)shutdown;
- (id)signingIdentityPersistentReference;
- (oneway void)startup;
- (oneway void)stopMonitoringAllFolders;
- (oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
- (int)supportsConversations;
- (int)supportsDraftFolderSync;
- (int)supportsEmailFlagging;
- (int)supportsMailboxSearch;
- (id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id *)arg3;

@end

