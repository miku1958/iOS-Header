//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol NNMKInitialSyncProgressTrackerDelegate, NNMKSyncStateManager, OS_dispatch_queue;

@interface NNMKInitialSyncProgressTracker : NSObject
{
    BOOL _trackingInitialSync;
    BOOL _isWaitingForAccounts;
    BOOL _isWaitingForMessageHeaders;
    BOOL _isWaitingForMessageContent;
    BOOL _timeoutCanceledForAccounts;
    BOOL _timeoutCanceledForMessageHeaders;
    BOOL _timeoutCanceledForMessageContent;
    id<NNMKInitialSyncProgressTrackerDelegate> _delegate;
    id<NNMKSyncStateManager> _syncStateManager;
    NSObject<OS_dispatch_queue> *_executionQueue;
    double _initialSyncProgress;
    unsigned long long _initialSyncMessagesCount;
    NSMutableSet *_initialSyncMessageIdsToSyncContent;
    NSMutableSet *_initialSyncMessageIdsOfContentToAck;
}

@property (weak, nonatomic) id<NNMKInitialSyncProgressTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *executionQueue; // @synthesize executionQueue=_executionQueue;
@property (strong, nonatomic) NSMutableSet *initialSyncMessageIdsOfContentToAck; // @synthesize initialSyncMessageIdsOfContentToAck=_initialSyncMessageIdsOfContentToAck;
@property (strong, nonatomic) NSMutableSet *initialSyncMessageIdsToSyncContent; // @synthesize initialSyncMessageIdsToSyncContent=_initialSyncMessageIdsToSyncContent;
@property (nonatomic) unsigned long long initialSyncMessagesCount; // @synthesize initialSyncMessagesCount=_initialSyncMessagesCount;
@property (nonatomic) double initialSyncProgress; // @synthesize initialSyncProgress=_initialSyncProgress;
@property (readonly, nonatomic) BOOL isTrackingInitialSync;
@property (nonatomic) BOOL isWaitingForAccounts; // @synthesize isWaitingForAccounts=_isWaitingForAccounts;
@property (nonatomic) BOOL isWaitingForMessageContent; // @synthesize isWaitingForMessageContent=_isWaitingForMessageContent;
@property (nonatomic) BOOL isWaitingForMessageHeaders; // @synthesize isWaitingForMessageHeaders=_isWaitingForMessageHeaders;
@property (strong, nonatomic) id<NNMKSyncStateManager> syncStateManager; // @synthesize syncStateManager=_syncStateManager;
@property (nonatomic) BOOL timeoutCanceledForAccounts; // @synthesize timeoutCanceledForAccounts=_timeoutCanceledForAccounts;
@property (nonatomic) BOOL timeoutCanceledForMessageContent; // @synthesize timeoutCanceledForMessageContent=_timeoutCanceledForMessageContent;
@property (nonatomic) BOOL timeoutCanceledForMessageHeaders; // @synthesize timeoutCanceledForMessageHeaders=_timeoutCanceledForMessageHeaders;
@property (nonatomic) BOOL trackingInitialSync; // @synthesize trackingInitialSync=_trackingInitialSync;

+ (double)syncTimeout;
- (void).cxx_destruct;
- (void)_handleInitialSyncCompleted;
- (void)cancelTimeout;
- (void)finishedSendingInitialSyncContentToPairedDevice;
- (void)incrementProgressBy:(double)arg1;
- (void)initialSyncTimedOut;
- (void)resetFlags;
- (void)startSyncTimeoutForAccounts;
- (void)startSyncTimeoutForMessageContent;
- (void)startSyncTimeoutForMessageHeaders;
- (void)startTrackingInitialSync;
- (void)syncCompleted;
- (void)syncFailedWithError:(id)arg1;
- (void)updateProgressWithAccountsArrivedInPairedDevice;
- (void)updateProgressWithAccountsSent;
- (void)updateProgressWithContentCompletelySyncedForMessageId:(id)arg1;
- (void)updateProgressWithMessageContentArrivedInPairedDevice:(id)arg1;
- (void)updateProgressWithMessageContentDownloadFailed:(id)arg1;
- (void)updateProgressWithMessageHeadersArrivedInPairedDevice;
- (void)updateProgressWithMessageHeadersSent:(id)arg1;

@end
