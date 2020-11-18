//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncEngine-Protocol.h>

@class HDProfile, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine>
{
    NSArray *_queue_allOrderedSyncEntities;
    NSDictionary *_queue_allSyncEntitiesByIdentifier;
    CDUnknownBlockType _unitTest_didCompleteReadTransaction;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy, nonatomic) NSArray *allOrderedSyncEntities;
@property (readonly, copy, nonatomic) NSDictionary *allSyncEntitiesByIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HDProfile *profile; // @synthesize profile=_profile;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType unitTest_didCompleteReadTransaction; // @synthesize unitTest_didCompleteReadTransaction=_unitTest_didCompleteReadTransaction;

- (void).cxx_destruct;
- (BOOL)_applySyncChange:(id)arg1 entity:(Class)arg2 store:(id)arg3 error:(id *)arg4;
- (BOOL)_performSyncSession:(id)arg1 error:(id *)arg2;
- (void)_queue_loadSyncEntities;
- (long long)_receivedAnchorForEntityIdentifier:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (void)_resetStore:(id)arg1;
- (long long)_sendChanges:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (BOOL)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id *)arg4;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id *)arg3;
- (long long)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 predicate:(id)arg3 startAnchor:(long long *)arg4 finalAnchor:(long long)arg5 postTransactionBlocks:(id)arg6 error:(id *)arg7;
- (BOOL)_transactionDidEndForSession:(id)arg1 error:(id *)arg2;
- (long long)_validateAnchorsForSyncChange:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (BOOL)_validateSequenceNumberForSyncChange:(id)arg1 store:(id)arg2 error:(id *)arg3;
- (BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 resetInvalid:(BOOL)arg4 error:(id *)arg5;
- (BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (id)initWithProfile:(id)arg1;
- (BOOL)performSyncSession:(id)arg1 error:(id *)arg2;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (void)resetStore:(id)arg1;

@end

