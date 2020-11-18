//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMapTable;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface MSVXPCTransactionController : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSMapTable *_openTransactions;
    BOOL _inTransaction;
    NSObject<OS_dispatch_source> *_signalUSR2DispatchSource;
}

@property (readonly, nonatomic, getter=isInTransaction) BOOL inTransaction;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_onQueueCleanupEndedTransactions;
- (void)_onQueueUpdateInternalTransactionState;
- (void)_saveActiveTransactionsToFile;
- (void)_setupSignalHandler;
- (void)_tearDownSignalHandler;
- (id)activeTransactions;
- (void)addActiveTransaction:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isTransactionActive:(id)arg1;
- (void)removeActiveTransaction:(id)arg1;

@end
