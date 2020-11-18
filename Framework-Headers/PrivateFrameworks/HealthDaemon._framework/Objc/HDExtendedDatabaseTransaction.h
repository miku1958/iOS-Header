//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabase, NSError, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_source;

@interface HDExtendedDatabaseTransaction : NSObject
{
    BOOL _pendingWorkDidSucceed;
    NSUUID *_transactionIdentifier;
    HDDatabase *_database;
    NSObject<OS_dispatch_queue> *_transactionQueue;
    NSObject<OS_dispatch_queue> *_dataQueue;
    NSObject<OS_dispatch_semaphore> *_completionSemaphore;
    NSObject<OS_dispatch_semaphore> *_pendingWorkSemaphore;
    NSObject<OS_dispatch_source> *_automaticRollbackTimer;
    CDUnknownBlockType _pendingWork;
    unsigned long long _status;
    NSError *_lastError;
    double _transactionTimeout;
    double _continuationTimeout;
}

@property (strong, nonatomic) NSObject<OS_dispatch_source> *automaticRollbackTimer; // @synthesize automaticRollbackTimer=_automaticRollbackTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *completionSemaphore; // @synthesize completionSemaphore=_completionSemaphore;
@property (readonly, nonatomic) double continuationTimeout; // @synthesize continuationTimeout=_continuationTimeout;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dataQueue; // @synthesize dataQueue=_dataQueue;
@property (readonly, weak, nonatomic) HDDatabase *database; // @synthesize database=_database;
@property (strong, nonatomic) NSError *lastError; // @synthesize lastError=_lastError;
@property (copy, nonatomic) CDUnknownBlockType pendingWork; // @synthesize pendingWork=_pendingWork;
@property (nonatomic) BOOL pendingWorkDidSucceed; // @synthesize pendingWorkDidSucceed=_pendingWorkDidSucceed;
@property (strong, nonatomic) NSObject<OS_dispatch_semaphore> *pendingWorkSemaphore; // @synthesize pendingWorkSemaphore=_pendingWorkSemaphore;
@property (nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly, copy, nonatomic) NSUUID *transactionIdentifier; // @synthesize transactionIdentifier=_transactionIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property (readonly, nonatomic) double transactionTimeout; // @synthesize transactionTimeout=_transactionTimeout;

- (void).cxx_destruct;
- (void)_enableAutomaticRollbackTimer;
- (void)_transaction_runTransactionWithOptions:(unsigned long long)arg1;
- (BOOL)commitWithErrorOut:(id *)arg1;
- (void)dealloc;
- (id)initWithDatabase:(id)arg1 options:(unsigned long long)arg2 transactionTimeout:(double)arg3 continuationTimeout:(double)arg4 error:(id *)arg5;
- (BOOL)performInTransactionWithErrorOut:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)rollbackDueToError:(id)arg1 errorOut:(id *)arg2;

@end

