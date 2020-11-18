//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet;

@interface _EDThreadMigrationState : NSObject
{
    NSCountedSet *_objectIDsToMigrate;
    NSCountedSet *_recentlyMigratedObjectIDs;
    NSCountedSet *_recentlyDeletedObjectIDs;
    unsigned long long _state;
    unsigned long long _generation;
}

@property (readonly, nonatomic) unsigned long long generation; // @synthesize generation=_generation;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFullyMigrated;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) unsigned long long unmigratedCount;

- (void).cxx_destruct;
- (void)_removeAllObjectIDs;
- (BOOL)_verifyIsMigratingGeneration:(unsigned long long)arg1 stateVerifier:(CDUnknownBlockType)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(unsigned long long)arg5;
- (void)addDeletedObjectIDs:(id)arg1;
- (void)addObjectIDs:(id)arg1;
- (void)cancel;
- (void)fail;
- (id)init;
- (BOOL)isRecentlyMigrated:(id)arg1;
- (id)nextBatch;
- (void)removeDeletedObjectIDs:(id)arg1;
- (void)removeMigratedObjectIDs:(id)arg1;
- (void)removeObjectIDs:(id)arg1;
- (void)reset;
- (BOOL)verifyIsMigratingGeneration:(unsigned long long)arg1 andIsInState:(unsigned long long)arg2 logIdentifier:(id)arg3 logAction:(id)arg4 logCount:(unsigned long long)arg5;
- (BOOL)verifyIsMigratingGeneration:(unsigned long long)arg1 andIsInState:(unsigned long long)arg2 orState:(unsigned long long)arg3 logIdentifier:(id)arg4 logAction:(id)arg5 logCount:(unsigned long long)arg6;

@end
