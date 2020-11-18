//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncEndpoint.h>

#import <NanoMailKitServer/NNMKAccountsSyncServiceServerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKBatchRequestHandlerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKDeviceRegistryHolder-Protocol.h>
#import <NanoMailKitServer/NNMKFetchesSyncServiceServerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKInitialSyncProgressTrackerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKMessageContentSyncServiceServerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKMessagesSyncServiceServerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKResendSchedulerDelegate-Protocol.h>
#import <NanoMailKitServer/NNMKSyncStateManagerDelegate-Protocol.h>

@class NNMKAccountsSyncServiceServer, NNMKBatchRequestHandler, NNMKDeviceSyncRegistry, NNMKFetchesSyncServiceServer, NNMKInitialSyncProgressTracker, NNMKMailboxSelection, NNMKMessageContentSyncServiceServer, NNMKMessagesSyncServiceServer, NNMKPairedDeviceInfo, NNMKProtectedContentSyncServiceServer, NNMKProtectedSyncServiceServer, NNMKResendScheduler, NNMKSyncController, NNMKSyncPersistenceHandler, NNMKSyncSessionController, NSObject, NSString;
@protocol NNMKDirectoryProvider, NNMKSyncProviderDelegate, NNMKSyncStateManager, OS_dispatch_queue;

@interface NNMKSyncProvider : NNMKSyncEndpoint <NNMKMessagesSyncServiceServerDelegate, NNMKMessageContentSyncServiceServerDelegate, NNMKAccountsSyncServiceServerDelegate, NNMKFetchesSyncServiceServerDelegate, NNMKInitialSyncProgressTrackerDelegate, NNMKDeviceRegistryHolder, NNMKResendSchedulerDelegate, NNMKSyncStateManagerDelegate, NNMKBatchRequestHandlerDelegate>
{
    BOOL _pairedDeviceSupportsMultipleMailboxes;
    BOOL _fullSyncRecoveredInThisSession;
    id<NNMKSyncProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_providerQueue;
    id<NNMKSyncStateManager> _syncStateManager;
    NNMKDeviceSyncRegistry *_pairedDeviceRegistry;
    NNMKSyncPersistenceHandler *_persistenceHandler;
    NNMKMessagesSyncServiceServer *_messagesSyncService;
    NNMKMessageContentSyncServiceServer *_contentSyncService;
    NNMKAccountsSyncServiceServer *_accountsSyncService;
    NNMKFetchesSyncServiceServer *_fetchesSyncService;
    NNMKProtectedSyncServiceServer *_protectedSyncService;
    NNMKProtectedContentSyncServiceServer *_protectedContentSyncService;
    NNMKSyncController *_syncController;
    NNMKSyncSessionController *_sessionController;
    id<NNMKDirectoryProvider> _directoryProvider;
    NNMKResendScheduler *_resendScheduler;
    NNMKInitialSyncProgressTracker *_initialSyncProgressTracker;
    NNMKBatchRequestHandler *_batchRequestHandler;
}

@property (strong, nonatomic) NNMKAccountsSyncServiceServer *accountsSyncService; // @synthesize accountsSyncService=_accountsSyncService;
@property (strong, nonatomic) NNMKBatchRequestHandler *batchRequestHandler; // @synthesize batchRequestHandler=_batchRequestHandler;
@property (strong, nonatomic) NNMKMessageContentSyncServiceServer *contentSyncService; // @synthesize contentSyncService=_contentSyncService;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NNMKSyncProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id<NNMKDirectoryProvider> directoryProvider; // @synthesize directoryProvider=_directoryProvider;
@property (strong, nonatomic) NNMKFetchesSyncServiceServer *fetchesSyncService; // @synthesize fetchesSyncService=_fetchesSyncService;
@property (nonatomic) BOOL fullSyncRecoveredInThisSession; // @synthesize fullSyncRecoveredInThisSession=_fullSyncRecoveredInThisSession;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NNMKInitialSyncProgressTracker *initialSyncProgressTracker; // @synthesize initialSyncProgressTracker=_initialSyncProgressTracker;
@property (readonly, nonatomic) BOOL isPaired;
@property (readonly, nonatomic) NNMKMailboxSelection *mailboxSelection;
@property (strong, nonatomic) NNMKMessagesSyncServiceServer *messagesSyncService; // @synthesize messagesSyncService=_messagesSyncService;
@property (nonatomic) BOOL organizeByThread;
@property (readonly, nonatomic) NNMKPairedDeviceInfo *pairedDeviceInfo;
@property (strong, nonatomic) NNMKDeviceSyncRegistry *pairedDeviceRegistry; // @synthesize pairedDeviceRegistry=_pairedDeviceRegistry;
@property (strong, nonatomic) NNMKSyncPersistenceHandler *persistenceHandler; // @synthesize persistenceHandler=_persistenceHandler;
@property (strong, nonatomic) NNMKProtectedContentSyncServiceServer *protectedContentSyncService; // @synthesize protectedContentSyncService=_protectedContentSyncService;
@property (strong, nonatomic) NNMKProtectedSyncServiceServer *protectedSyncService; // @synthesize protectedSyncService=_protectedSyncService;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *providerQueue; // @synthesize providerQueue=_providerQueue;
@property (strong, nonatomic) NNMKResendScheduler *resendScheduler; // @synthesize resendScheduler=_resendScheduler;
@property (strong, nonatomic) NNMKSyncSessionController *sessionController; // @synthesize sessionController=_sessionController;
@property (readonly) Class superclass;
@property (strong, nonatomic) NNMKSyncController *syncController; // @synthesize syncController=_syncController;
@property (strong, nonatomic) id<NNMKSyncStateManager> syncStateManager; // @synthesize syncStateManager=_syncStateManager;

+ (BOOL)prepareForSystemAppDeletion:(id *)arg1;
- (void).cxx_destruct;
- (void)_addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 loadedProtected:(BOOL)arg4 mailbox:(id)arg5;
- (void)_addMessageContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(BOOL)arg3 mailbox:(id)arg4;
- (void)_addMessages:(id)arg1 mailbox:(id)arg2;
- (void)_addMessages:(id)arg1 messagesAreNew:(BOOL)arg2 mailbox:(id)arg3;
- (id)_bbSubsectionIdsForMessage:(id)arg1;
- (void)_checkBatchFetchedMessages;
- (void)_checkConnectivityBasedSuspensionTimer:(BOOL)arg1;
- (id)_createDefaultSyncStateManager;
- (void)_deleteMessagesWithIds:(id)arg1 mailbox:(id)arg2;
- (void)_fastForwardToFullSyncVersion:(unsigned long long)arg1;
- (void)_handleDidFailSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (void)_handleDidPairWithNewDevice;
- (void)_handleDidUnpair;
- (id)_handleFetchRequest:(id)arg1 shouldResumeSync:(BOOL *)arg2;
- (void)_handleFetchRequestFromWatch:(id)arg1;
- (void)_handleHaltSyncForMailbox:(id)arg1;
- (void)_handleNotificationPayloadAck:(CDUnknownBlockType)arg1 forMessageId:(id)arg2;
- (id)_initialSyncForMailbox:(id)arg1 messages:(id)arg2 shouldUseProtectedChannel:(BOOL)arg3;
- (BOOL)_isConnectedToWatch;
- (BOOL)_isPaired;
- (id)_legacy_sendFirstMessages:(id)arg1 syncedMailbox:(id)arg2 shouldUseProtectedChannel:(BOOL)arg3;
- (void)_markConversationIdForNotify:(id)arg1 messages:(id)arg2 includesProtectedMessages:(BOOL)arg3 mailbox:(id)arg4;
- (void)_markConversationWithId:(id)arg1 forNotify:(BOOL)arg2 mailbox:(id)arg3;
- (id)_messageProtobufForMessage:(id)arg1;
- (void)_notifyDelegateThatMessagesStatusWereUpdated:(id)arg1;
- (BOOL)_pairedDeviceSupportsMultipleMailboxes;
- (void)_replyWithMessagesToResend:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailbox:(id)arg3;
- (void)_replyWithMoreMessages:(id)arg1 forConversationWithId:(id)arg2 includesProtectedMessages:(BOOL)arg3 mailbox:(id)arg4;
- (void)_replyWithMoreMessages:(id)arg1 forDateReceivedBefore:(id)arg2 includesProtectedMessages:(BOOL)arg3 mailbox:(id)arg4 messagesForSpecialMailbox:(unsigned long long)arg5;
- (void)_reportMessageContentDownloadFailureForMessageId:(id)arg1 mailbox:(id)arg2;
- (void)_requestDelegateForAccounts;
- (void)_requestDelegateForContentForMessageIds:(id)arg1 highPriority:(BOOL)arg2;
- (void)_requestDelegateForContentForMessageWithId:(id)arg1 highPriority:(BOOL)arg2;
- (void)_requestDelegateForFetchForMailboxes:(id)arg1;
- (void)_requestDelegateForFirstMessagesForMailboxes:(id)arg1;
- (void)_requestDelegateForMessagesToSendAsFetchResponseForMessageIds:(id)arg1;
- (void)_requestDelegateForMoreMessagesBeforeDateReceived:(id)arg1 forConversationWithId:(id)arg2 mailbox:(id)arg3;
- (void)_requestDelegateForMoreMessagesWithMailbox:(id)arg1 beforeDate:(id)arg2 messagesForspecialMailboxFilterType:(unsigned long long)arg3;
- (void)_requestDelegateForResendingAccountWithId:(id)arg1;
- (void)_requestDelegateForResendingMessagesWithIds:(id)arg1;
- (void)_requestDelegateToSendComposedMessage:(id)arg1;
- (void)_requestDelegateToStopDownloadingAllMessageElements;
- (void)_requestDelegateToStopDownloadingMessageElementsForMessageWithId:(id)arg1;
- (id)_sendFirstMessages:(id)arg1 mailboxes:(id)arg2 shouldUseProtectedChannel:(BOOL)arg3;
- (void)_sendUpdatedMailboxSelection:(unsigned long long)arg1;
- (void)_sendUpdatedMailboxSelection:(unsigned long long)arg1 resendInterval:(unsigned long long)arg2;
- (void)_setPairedDeviceSupportsMultipleMailboxes:(BOOL)arg1;
- (void)_stopTaks;
- (void)_storeScreenRelatedValues;
- (void)_triggerFullSyncForMailbox:(id)arg1;
- (void)_triggerFullSyncForMailboxes:(id)arg1;
- (void)_triggerInitialSync;
- (void)_triggerInitialSyncTrackingProgress:(BOOL)arg1;
- (void)_updateMailboxSelection:(id)arg1 notifyClient:(BOOL)arg2;
- (void)_updateMessagesStatus:(id)arg1 mailbox:(id)arg2;
- (BOOL)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1;
- (BOOL)_verifyDatabaseOkForFullSyncVersion:(unsigned long long)arg1 mailbox:(id)arg2;
- (void)_verifyPairingForcingSync:(BOOL)arg1;
- (void)accountsSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)accountsSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)addImageAttachment:(id)arg1 forMessageId:(id)arg2 contentId:(id)arg3 loadedProtected:(BOOL)arg4;
- (void)addMessageContent:(id)arg1 forMessage:(id)arg2 loadedProtected:(BOOL)arg3;
- (void)addMessages:(id)arg1;
- (void)addUpdateOrDeleteAccounts:(id)arg1;
- (void)batchRequestHandlerDidTimeoutFetchRequest:(id)arg1;
- (id)bulletinFlagsForMessageStatus:(unsigned long long)arg1 dateReceived:(id)arg2 messageWillBeAddedToSyncProvider:(BOOL)arg3 mailboxId:(id)arg4;
- (BOOL)containsSyncedMailbox:(id)arg1;
- (id)currentDeviceRegistry;
- (void)dealloc;
- (void)deleteMessagesWithIds:(id)arg1;
- (void)fetchesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)fetchesSyncServiceServer:(id)arg1 didNotifyInitialSyncFinished:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestContent:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFetchInBatch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestFullSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestHaltSync:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessages:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesForConversation:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didRequestMoreMessagesInBatch:(id)arg2;
- (void)fetchesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 syncStateManager:(id)arg2 directoryProvider:(id)arg3;
- (BOOL)isMessageOkForSyncedMailboxes:(id)arg1;
- (void)markConversationIdForNotNotify:(id)arg1;
- (void)markConversationIdForNotify:(id)arg1 messages:(id)arg2 includesProtectedMessages:(BOOL)arg3;
- (void)messageContentSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)messageContentSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didDeleteMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didFailSendingProtobufWithIDSIdentifier:(id)arg2 errorCode:(long long)arg3;
- (void)messagesSyncServiceServer:(id)arg1 didRequestCompactMessages:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didRequestSendMessage:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didSendProtobufSuccessfullyWithIDSIdentifier:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMailboxSelection:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didUpdateMessagesStatus:(id)arg2;
- (void)messagesSyncServiceServer:(id)arg1 didWarnMessagesFilteredOut:(id)arg2;
- (void)messagesSyncServiceServerConnectivityChanged:(id)arg1;
- (void)messagesSyncServiceServerSpaceBecameAvailable:(id)arg1;
- (void)notifyFetchCompleted;
- (BOOL)pairedDeviceSupportsMultipleMailboxes;
- (void)replyWithAccountToResend:(id)arg1;
- (void)replyWithAccounts:(id)arg1;
- (void)replyWithFirstMessages:(id)arg1 includesProtectedMessages:(BOOL)arg2 mailboxes:(id)arg3 organizedByThread:(BOOL)arg4;
- (void)replyWithMessageSendingProgress:(long long)arg1 forComposedMessageId:(id)arg2;
- (void)replyWithMessagesToResend:(id)arg1 includesProtectedMessages:(BOOL)arg2;
- (void)replyWithMessagesToSendAsFetchResponse:(id)arg1 includesProtectedMessages:(BOOL)arg2;
- (void)replyWithMoreMessages:(id)arg1 context:(id)arg2;
- (void)reportMessageContentDownloadFailureForMessageId:(id)arg1;
- (void)reportWillDownloadFirstMessages;
- (void)resendObjectsForIDSIdentifier:(id)arg1;
- (void)resendScheduler:(id)arg1 didRequestDequeueIDSIdentifierForResend:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifierForResend:(id)arg2 date:(id)arg3 silent:(BOOL)arg4;
- (void)resendScheduler:(id)arg1 didRequestEnqueueIDSIdentifiersForResend:(id)arg2;
- (unsigned long long)resendScheduler:(id)arg1 didRequestNewResendIntervalForPreviousResendInterval:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)resendScheduler:(id)arg1 didRequestRetryFullSyncForMailboxes:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingAccountWithId:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingComposeMessageProgress:(long long)arg2 messageId:(id)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingContentForMessageId:(id)arg2 highPriority:(BOOL)arg3;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingDeletionForAccountWithId:(id)arg2 resendInterval:(unsigned long long)arg3;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingMessageDeletions:(id)arg2 deletionsMessageIds:(id)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(id)arg1 didRequestRetrySendingMessageWithIds:(id)arg2;
- (void)resendScheduler:(id)arg1 didRequestToRetrySendMailboxSelectionWithResendInterval:(unsigned long long)arg2;
- (id)syncServiceEndpoints;
- (void)syncStateManager:(id)arg1 didAcknowledgeNotificationPayload:(CDUnknownBlockType)arg2 forRecordId:(id)arg3;
- (void)syncStateManagerDidBeginSyncSession:(id)arg1 syncSessionType:(id)arg2 syncSessionIdentifier:(id)arg3;
- (void)syncStateManagerDidChangePairedDevice:(id)arg1;
- (void)syncStateManagerDidInvalidateSyncSession:(id)arg1 syncSessionIdentifier:(id)arg2;
- (void)syncStateManagerDidUnpair:(id)arg1;
- (id)syncedMailboxes;
- (void)trackerDidFinishSendingInitialSyncContentToPairedDevice:(id)arg1;
- (void)updateMailboxSelection:(id)arg1;
- (void)updateMessagesStatus:(id)arg1;

@end

