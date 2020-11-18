//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDSyncEngine-Protocol.h>

@class NSString;
@protocol HDHealthDaemon;

@interface HDDaemonSyncEngine : NSObject <HDSyncEngine>
{
    id<HDHealthDaemon> _healthDaemon;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HDHealthDaemon> healthDaemon; // @synthesize healthDaemon=_healthDaemon;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_performSyncSession:(id)arg1 error:(id *)arg2;
- (long long)_receivedAnchorForEntityClass:(Class)arg1 store:(id)arg2 error:(id *)arg3;
- (void)_resetStore:(id)arg1;
- (BOOL)_sendChanges:(id)arg1 session:(id)arg2 error:(id *)arg3;
- (BOOL)_setReceivedAnchor:(long long)arg1 forEntityClass:(Class)arg2 store:(id)arg3 error:(id *)arg4;
- (id)_syncAnchorMapForSyncEntityClass:(Class)arg1 session:(id)arg2 error:(id *)arg3;
- (BOOL)_synchronizeSyncEntityClass:(Class)arg1 session:(id)arg2 predicate:(id)arg3 startAnchor:(long long *)arg4 finalAnchor:(long long)arg5 postTransactionBlocks:(id)arg6 error:(id *)arg7;
- (BOOL)applyAcknowledgedAnchorMap:(id)arg1 forStore:(id)arg2 resetNext:(BOOL)arg3 error:(id *)arg4;
- (BOOL)applySyncChange:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (BOOL)applySyncObjectCollection:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (BOOL)getReceivedAnchorMap:(id)arg1 forStore:(id)arg2 error:(id *)arg3;
- (id)initWithHealthDaemon:(id)arg1;
- (BOOL)performSyncSession:(id)arg1 error:(id *)arg2;
- (void)resetAnchorsWithFailedChanges:(id)arg1 store:(id)arg2;
- (void)resetStore:(id)arg1;

@end

