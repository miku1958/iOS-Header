//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSError, SYStore;
@protocol SYObject;

@protocol SYStoreDelegate <NSObject>
- (void)syncStore:(SYStore *)arg1 objectAdded:(id<SYObject>)arg2;
- (void)syncStore:(SYStore *)arg1 objectDeleted:(id<SYObject>)arg2;
- (void)syncStore:(SYStore *)arg1 objectUpdated:(id<SYObject>)arg2;

@optional
- (long long (^)(NSMutableArray *, id *))beginSyncingAllObjectsForStore:(SYStore *)arg1;
- (void)syncStore:(SYStore *)arg1 encounteredError:(NSError *)arg2 context:(NSDictionary *)arg3;
- (void)syncStore:(SYStore *)arg1 encounteredErrorInFullSync:(NSError *)arg2;
- (void)syncStore:(SYStore *)arg1 peerFinishedProcessingMessageWithContext:(NSDictionary *)arg2;
- (void)syncStore:(SYStore *)arg1 sentMessageWithContext:(NSDictionary *)arg2;
- (NSArray *)syncStoreAllObjects:(SYStore *)arg1;
- (void)syncStoreAllObjectsDeleted:(SYStore *)arg1;
- (void)syncStoreDidCompleteFullSync:(SYStore *)arg1;
- (void)syncStoreDidSetupAfterPairing:(SYStore *)arg1;
- (void)syncStoreDidUnpair:(SYStore *)arg1;
- (void)syncStoreDidUpdate:(SYStore *)arg1;
- (void)syncStoreEnqueuedAllFullSyncMessages:(SYStore *)arg1 context:(NSDictionary *)arg2;
- (BOOL)syncStoreShouldDeleteRemoteObjectsOnFailedFullSync:(SYStore *)arg1;
- (BOOL)syncStoreShouldPerformInitialFullSync:(SYStore *)arg1;
- (void)syncStoreWillUpdate:(SYStore *)arg1;
- (void)syncStoreWillUpdate:(SYStore *)arg1 objectCount:(unsigned long long)arg2;
@end

