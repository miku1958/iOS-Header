//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/BRItemNotificationReceiving-Protocol.h>

@class BRNotificationQueue, NSMutableDictionary, NSString;
@protocol BRItemNotificationSending, BRNotificationReceiverDelegate, NSObject, OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface BRNotificationReceiver : NSObject <BRItemNotificationReceiving>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    BRNotificationQueue *_notifs;
    id<BRItemNotificationSending> _sender;
    _Atomic int _gatherDones;
    id<BRNotificationReceiverDelegate> _delegate;
    NSObject<OS_dispatch_source> *_source;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _receivedChanges;
    unsigned long long _batchingChanges;
    double _batchingDelay;
    unsigned long long _lastBatchTime;
    NSMutableDictionary *_progressObserverByID;
    NSMutableDictionary *_itemInTransferByID;
    _Atomic int _suspendCount;
    int _networkReachabilityToken;
    BOOL _isNetworkReachable;
    BOOL _isInvalidated;
    id<NSObject> _accountTokenDidChangeNotificationObserver;
}

@property (nonatomic) unsigned long long batchingChanges; // @synthesize batchingChanges=_batchingChanges;
@property (nonatomic) double batchingDelay; // @synthesize batchingDelay=_batchingDelay;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) id<BRNotificationReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long pendingCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAndNotify:(BOOL)arg1;
- (id)_obtainNotificationSenderFromDaemon;
- (void)_receiveUpdates:(id)arg1;
- (void)_signalSourceIfNeeded;
- (void)_watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;
- (void)dealloc;
- (void)dequeue:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (void)disableUpdatesFromIPCBeforeStitching;
- (void)enableUpdatesFromIPCAfterStitching;
- (void)flush;
- (id)init;
- (oneway void)invalidate;
- (oneway void)invalidateAndDontNotifyDelegate;
- (void)invalidateAndNotify:(BOOL)arg1;
- (void)networkDidChangeReachabilityStatusTo:(BOOL)arg1;
- (void)receiveProgressUpdates:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)receiveStitchingUpdates:(id)arg1;
- (void)receiveUpdates:(id)arg1 logicalExtensions:(id)arg2 physicalExtensions:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)resume;
- (void)suspend;
- (void)watchUbiquitousScopes:(id)arg1 bundleID:(id)arg2 predicate:(id)arg3;

@end

