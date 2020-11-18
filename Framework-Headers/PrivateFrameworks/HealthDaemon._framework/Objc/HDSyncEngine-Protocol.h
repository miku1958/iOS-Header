//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSyncSession, NSArray;
@protocol HDSyncAnchorMap, HDSyncChange, HDSyncObjectCollection, HDSyncStore;

@protocol HDSyncEngine <NSObject>
- (BOOL)applyAcknowledgedAnchorMap:(id<HDSyncAnchorMap>)arg1 forStore:(id<HDSyncStore>)arg2 resetNext:(BOOL)arg3 error:(id *)arg4;
- (BOOL)applySyncChange:(id<HDSyncChange>)arg1 forStore:(id<HDSyncStore>)arg2 error:(id *)arg3;
- (BOOL)applySyncObjectCollection:(id<HDSyncObjectCollection>)arg1 forStore:(id<HDSyncStore>)arg2 error:(id *)arg3;
- (BOOL)getReceivedAnchorMap:(id<HDSyncAnchorMap>)arg1 forStore:(id<HDSyncStore>)arg2 error:(id *)arg3;
- (BOOL)performSyncSession:(HDSyncSession *)arg1 error:(id *)arg2;
- (void)resetAnchorsWithFailedChanges:(NSArray *)arg1 store:(id<HDSyncStore>)arg2;
- (void)resetStore:(id<HDSyncStore>)arg1;
@end

