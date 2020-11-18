//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPersistentHistoryToken, NSPersistentStoreCoordinator, PLChangeHandlingNotificationObserver, PLCoreDataChangeMerger;
@protocol OS_dispatch_queue;

@interface PLPersistentHistoryChangeDistributor : NSObject
{
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    PLCoreDataChangeMerger *_changeMerger;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    NSPersistentHistoryToken *_lastToken;
    PLChangeHandlingNotificationObserver *_notificationObserver;
}

- (void).cxx_destruct;
- (void)_inq_distributeNewTransactionsSinceLastTokenWithReason:(id)arg1 xpcTransaction:(id)arg2;
- (void)_inq_startObservingRemoteNotifications;
- (void)dealloc;
- (void)distributeNewTransactionsSinceLastToken;
- (void)distributeTransactions:(id)arg1 withXPCTransaction:(id)arg2;
- (id)fetchTransactionsSinceLastToken;
- (void)forceUserInterfaceReload;
- (void)handleRemoteNotificationOfType:(long long)arg1 withTransaction:(id)arg2;
- (id)initWithPersistentStoreCoordinator:(id)arg1 changeMerger:(id)arg2;
- (void)invalidate;
- (id)localEventFromTransactions:(id)arg1;
- (id)makeManagedObjectContext;
- (void)startObservingRemoteNotifications;
- (void)stopObservingRemoteNotifications;

@end
