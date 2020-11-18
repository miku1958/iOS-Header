//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailDaemon/EFLoggable-Protocol.h>

@class EDInMemoryThreadQueryHandler, EDThreadPersistence, EFLocked, EMThreadScope, NSString;
@protocol EDThreadMigratorDelegate, OS_dispatch_queue;

@interface EDThreadMigrator : NSObject <EFLoggable>
{
    struct os_unfair_lock_s _migrationLock;
    _Atomic BOOL _cancelled;
    EMThreadScope *_threadScope;
    EFLocked *_state;
    NSObject<OS_dispatch_queue> *_workQueue;
    EDThreadPersistence *_threadPersistence;
    EDInMemoryThreadQueryHandler *_queryHandler;
    id<EDThreadMigratorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<EDThreadMigratorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long migrationState;
@property (readonly, nonatomic) EDInMemoryThreadQueryHandler *queryHandler; // @synthesize queryHandler=_queryHandler;
@property (readonly, nonatomic) EFLocked *state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) EDThreadPersistence *threadPersistence; // @synthesize threadPersistence=_threadPersistence;
@property (readonly, nonatomic) EMThreadScope *threadScope; // @synthesize threadScope=_threadScope;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)log;
- (void).cxx_destruct;
- (void)_failMigration;
- (void)_performMigration;
- (void)_resumeMigration;
- (void)_scheduleCleanupForBatchedObjectIDs:(id)arg1;
- (void)addObjectIDsToMigrate:(id)arg1;
- (void)cancel;
- (void)changeObjectIDsToMigrate:(id)arg1;
- (void)deleteObjectIDsToMigrate:(id)arg1;
- (id)initWithThreadScope:(id)arg1 threadPersistence:(id)arg2 queryHandler:(id)arg3 delegate:(id)arg4;
- (void)reset;
- (void)start;

@end
