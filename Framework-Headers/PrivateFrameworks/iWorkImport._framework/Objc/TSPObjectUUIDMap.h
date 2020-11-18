//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, TSPObjectContext, TSPPersistedObjectUUIDMap;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface TSPObjectUUIDMap : NSObject
{
    _Atomic int _assertOnReadCount;
    TSPObjectContext *_context;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableDictionary *_inMemoryUUIDDictionary;
    NSMutableSet *_UUIDsWithSuppressedAssertions;
    TSPPersistedObjectUUIDMap *_persistedUUIDMap;
}

- (void).cxx_destruct;
- (void)beginAssertOnRead;
- (void)endAssertOnRead;
- (id)init;
- (id)initWithContext:(id)arg1;
- (void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3;
- (BOOL)objectUUIDIsInDocument:(id)arg1;
- (void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2;
- (void)objectWillBeRemovedFromDocument:(id)arg1;
- (id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long *)arg4;
- (void)setPersistedUUIDMap:(id)arg1;
- (BOOL)shouldSuppressAssertionForObjectUUID:(id)arg1;

@end
