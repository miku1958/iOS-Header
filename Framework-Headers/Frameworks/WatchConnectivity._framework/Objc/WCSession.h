//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WatchConnectivity/WCXPCManagerDelegate-Protocol.h>

@class NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSOperationQueue, NSString, NSURL, WCQueueManager, WCSessionUserInfoTransfer;
@protocol WCSessionDelegate;

@interface WCSession : NSObject <WCXPCManagerDelegate>
{
    BOOL _reachableForced;
    BOOL _hasContentPending;
    BOOL _iOSDeviceNeedsUnlockAfterRebootForReachability;
    BOOL _paired;
    BOOL _reachable;
    BOOL _complicationEnabled;
    BOOL _watchAppInstalled;
    BOOL _hasCompletedInitialActivation;
    BOOL _connectionWasInterrupted;
    BOOL _delegateSupportsAsyncActivate;
    BOOL _delegateSupportsActiveDeviceSwitch;
    id<WCSessionDelegate> _delegate;
    long long _activationState;
    unsigned long long _remainingComplicationUserInfoTransfers;
    NSURL *_watchDirectoryURL;
    NSDictionary *_applicationContext;
    NSDictionary *_receivedApplicationContext;
    NSOperationQueue *_delegateOperationQueue;
    NSOperationQueue *_backgroundWorkOperationQueue;
    NSOperationQueue *_workOperationQueue;
    NSMutableDictionary *_currentMessages;
    NSMutableSet *_currentMessageIdentifiersAwaitingReply;
    NSMutableDictionary *_internalOutstandingUserInfoTransfers;
    NSMutableDictionary *_internalOutstandingFileTransfers;
    WCSessionUserInfoTransfer *_currentComplicationUserInfoTransfer;
    WCQueueManager *_queueManager;
    NSString *_pairingID;
    NSMutableArray *_switchTasksQueue;
}

@property (nonatomic) long long activationState; // @synthesize activationState=_activationState;
@property (copy, nonatomic) NSDictionary *applicationContext; // @synthesize applicationContext=_applicationContext;
@property (readonly) NSOperationQueue *backgroundWorkOperationQueue; // @synthesize backgroundWorkOperationQueue=_backgroundWorkOperationQueue;
@property (nonatomic, getter=isComplicationEnabled) BOOL complicationEnabled; // @synthesize complicationEnabled=_complicationEnabled;
@property (nonatomic) BOOL connectionWasInterrupted; // @synthesize connectionWasInterrupted=_connectionWasInterrupted;
@property (strong) WCSessionUserInfoTransfer *currentComplicationUserInfoTransfer; // @synthesize currentComplicationUserInfoTransfer=_currentComplicationUserInfoTransfer;
@property (strong) NSMutableSet *currentMessageIdentifiersAwaitingReply; // @synthesize currentMessageIdentifiersAwaitingReply=_currentMessageIdentifiersAwaitingReply;
@property (readonly) NSMutableDictionary *currentMessages; // @synthesize currentMessages=_currentMessages;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WCSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) NSOperationQueue *delegateOperationQueue; // @synthesize delegateOperationQueue=_delegateOperationQueue;
@property (nonatomic) BOOL delegateSupportsActiveDeviceSwitch; // @synthesize delegateSupportsActiveDeviceSwitch=_delegateSupportsActiveDeviceSwitch;
@property (nonatomic) BOOL delegateSupportsAsyncActivate; // @synthesize delegateSupportsAsyncActivate=_delegateSupportsAsyncActivate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasCompletedInitialActivation; // @synthesize hasCompletedInitialActivation=_hasCompletedInitialActivation;
@property (nonatomic) BOOL hasContentPending; // @synthesize hasContentPending=_hasContentPending;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL iOSDeviceNeedsUnlockAfterRebootForReachability; // @synthesize iOSDeviceNeedsUnlockAfterRebootForReachability=_iOSDeviceNeedsUnlockAfterRebootForReachability;
@property (strong, nonatomic) NSMutableDictionary *internalOutstandingFileTransfers; // @synthesize internalOutstandingFileTransfers=_internalOutstandingFileTransfers;
@property (strong, nonatomic) NSMutableDictionary *internalOutstandingUserInfoTransfers; // @synthesize internalOutstandingUserInfoTransfers=_internalOutstandingUserInfoTransfers;
@property (readonly, copy, nonatomic) NSArray *outstandingFileTransfers;
@property (readonly, copy, nonatomic) NSArray *outstandingUserInfoTransfers;
@property (nonatomic, getter=isPaired) BOOL paired; // @synthesize paired=_paired;
@property (copy, nonatomic) NSString *pairingID; // @synthesize pairingID=_pairingID;
@property (strong) WCQueueManager *queueManager; // @synthesize queueManager=_queueManager;
@property (nonatomic, getter=isReachable) BOOL reachable; // @synthesize reachable=_reachable;
@property (copy, nonatomic) NSDictionary *receivedApplicationContext; // @synthesize receivedApplicationContext=_receivedApplicationContext;
@property (nonatomic) unsigned long long remainingComplicationUserInfoTransfers; // @synthesize remainingComplicationUserInfoTransfers=_remainingComplicationUserInfoTransfers;
@property (readonly) Class superclass;
@property (strong) NSMutableArray *switchTasksQueue; // @synthesize switchTasksQueue=_switchTasksQueue;
@property (nonatomic, getter=isWatchAppInstalled) BOOL watchAppInstalled; // @synthesize watchAppInstalled=_watchAppInstalled;
@property (strong, nonatomic) NSURL *watchDirectoryURL; // @synthesize watchDirectoryURL=_watchDirectoryURL;
@property (readonly) NSOperationQueue *workOperationQueue; // @synthesize workOperationQueue=_workOperationQueue;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
+ (id)defaultSession;
+ (BOOL)isSupported;
- (void).cxx_destruct;
- (id)_init;
- (void)_onqueue_notifyOfMessageError:(id)arg1 messageID:(id)arg2 withErrorHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_sendResponseError:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (void)activateSession;
- (void)cancelFileTransfer:(id)arg1;
- (void)cancelUserInfo:(id)arg1;
- (id)createAndStartTimerOnWorkQueueWithHandler:(CDUnknownBlockType)arg1;
- (id)currentPairingID;
- (void)dealloc;
- (BOOL)didPairingIDChange:(id)arg1;
- (void)didSessionStateChange:(id)arg1 withChangeHandler:(CDUnknownBlockType)arg2;
- (BOOL)didWatchURLChange:(id)arg1;
- (id)errorIfNotReachable;
- (id)errorIfPreconditionsNotSatisfied;
- (id)fileSizeFromURL:(id)arg1;
- (void)handleActiveDeviceSwitchStarted;
- (void)handleApplicationContextWithPairingID:(id)arg1;
- (void)handleFileResultWithPairingID:(id)arg1;
- (void)handleIncomingFileWithPairingID:(id)arg1;
- (void)handleIncomingUserInfoWithPairingID:(id)arg1;
- (void)handleMessageSendingAllowed;
- (void)handleRequest:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleSentMessageWithIdentifier:(id)arg1 error:(id)arg2;
- (void)handleSessionStateChanged:(id)arg1;
- (void)handleUserInfoResultWithPairingID:(id)arg1;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)logAndTestIfUnactivatedOrMissingDelegate;
- (void)notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onDelegateQueueIfTriggeringKVO_updateSessionState:(id)arg1 triggerKVO:(BOOL)arg2;
- (void)onqueue_addOutstandingFileTransfer:(id)arg1;
- (id)onqueue_addOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_cancelFileTransfer:(id)arg1;
- (void)onqueue_cancelMessagesIfAppropriate;
- (void)onqueue_cancelTransfersIfAppropriate;
- (void)onqueue_cancelUserInfo:(id)arg1;
- (void)onqueue_completeSwitchTask:(id)arg1 withSessionState:(id)arg2;
- (void)onqueue_createProgressForFileTransfer:(id)arg1;
- (void)onqueue_dequeueContent;
- (void)onqueue_handleDataMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleDictionaryMessageRequest:(id)arg1 withPairingID:(id)arg2;
- (void)onqueue_handleMessageCompletionWithError:(id)arg1 withMessageID:(id)arg2;
- (void)onqueue_handleProgressFinishedForFileTransfer:(id)arg1;
- (void)onqueue_handleResponseData:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleResponseDictionary:(id)arg1 record:(id)arg2 withPairingID:(id)arg3;
- (void)onqueue_handleUpdateSessionState:(id)arg1;
- (void)onqueue_loadAppContexts;
- (void)onqueue_loadFileTransferProgress;
- (void)onqueue_loadOutstandingFileTransfers;
- (void)onqueue_loadOutstandingUserInfoTransfers;
- (void)onqueue_loadPersistedContent;
- (void)onqueue_notifyOfFileError:(id)arg1 withFileTransfer:(id)arg2;
- (void)onqueue_notifyOfUserInfoError:(id)arg1 withUserInfoTransfer:(id)arg2;
- (void)onqueue_removeOutstandingFileTransfer:(id)arg1;
- (void)onqueue_removeOutstandingUserInfoTransfer:(id)arg1;
- (void)onqueue_removeProgressForFileTransfer:(id)arg1;
- (void)onqueue_sendMessageData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3 dictionaryMessage:(BOOL)arg4;
- (void)onqueue_sendResponseData:(id)arg1 identifier:(id)arg2 dictionaryMessage:(BOOL)arg3;
- (void)onqueue_sendResponseDictionary:(id)arg1 identifier:(id)arg2;
- (void)onqueue_setCurrentComplicationUserInfoTransfer:(id)arg1;
- (void)onqueue_startNextDeviceSwitch;
- (void)onqueue_transferUserInfo:(id)arg1 withUserInfo:(id)arg2;
- (void)onqueue_updateClientProgressForFileTransfer:(id)arg1;
- (void)onqueue_updateProgressForFileTransfer:(id)arg1 progress:(id)arg2;
- (void)reportFileTransfer:(id)arg1;
- (unsigned long long)roundValue:(unsigned long long)arg1 toSignificantFigures:(int)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)sendMessageData:(id)arg1 replyHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)storeAppContext:(id)arg1 withAppContextData:(id)arg2;
- (void)storeReceivedAppContext:(id)arg1 withAppContextData:(id)arg2;
- (BOOL)supportsActiveDeviceSwitch;
- (id)transferCurrentComplicationUserInfo:(id)arg1;
- (id)transferFile:(id)arg1 metadata:(id)arg2;
- (id)transferUserInfo:(id)arg1;
- (BOOL)updateApplicationContext:(id)arg1 error:(id *)arg2;
- (void)updatePairingID:(id)arg1;
- (BOOL)verifySessionFile:(id)arg1;
- (void)xpcConnectionInterrupted;
- (void)xpcConnectionRestoredWithState:(id)arg1;

@end

