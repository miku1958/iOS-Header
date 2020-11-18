//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSError, NSHashTable, NSNumber, NSPredicate, NSSet, WFCoreDataResultState, WFDatabase, WFDatabaseResultFetchOperation;
@protocol OS_dispatch_queue;

@interface WFDatabaseResult : NSObject
{
    NSArray *_descriptors;
    WFDatabase *_database;
    NSError *_fetchError;
    NSPredicate *_searchPredicate;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSHashTable *_observersTable;
    NSNumber *_cachedCount;
    WFDatabaseResultFetchOperation *_fetchOperation;
    NSSet *_relationshipKeysAffectingDescriptors;
    NSSet *_lastFetchedObjectIDs;
}

@property (strong, nonatomic) NSNumber *cachedCount; // @synthesize cachedCount=_cachedCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue; // @synthesize callbackQueue=_callbackQueue;
@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) WFDatabase *database; // @synthesize database=_database;
@property (readonly, nonatomic) NSArray *descriptors; // @synthesize descriptors=_descriptors;
@property (readonly, nonatomic) NSError *fetchError; // @synthesize fetchError=_fetchError;
@property (readonly, nonatomic) WFDatabaseResultFetchOperation *fetchOperation; // @synthesize fetchOperation=_fetchOperation;
@property (copy, nonatomic) NSSet *lastFetchedObjectIDs; // @synthesize lastFetchedObjectIDs=_lastFetchedObjectIDs;
@property (readonly, nonatomic) NSArray *observers;
@property (readonly, nonatomic) NSHashTable *observersTable; // @synthesize observersTable=_observersTable;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, copy, nonatomic) NSSet *relationshipKeysAffectingDescriptors; // @synthesize relationshipKeysAffectingDescriptors=_relationshipKeysAffectingDescriptors;
@property (copy, nonatomic) NSPredicate *searchPredicate; // @synthesize searchPredicate=_searchPredicate;
@property (readonly, nonatomic) WFCoreDataResultState *state;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)description;
- (id)descriptorsIfLoaded;
- (id)initWithDatabase:(id)arg1 fetchOperation:(id)arg2;
- (id)initWithDatabase:(id)arg1 fetchOperation:(id)arg2 relationshipKeysAffectingDescriptors:(id)arg3;
- (id)initWithDatabase:(id)arg1 fetchRequest:(id)arg2;
- (id)initWithDatabase:(id)arg1 fetchRequest:(id)arg2 relationshipKeysAffectingDescriptors:(id)arg3;
- (void)invalidateCacheWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)notifyObserversAboutChange:(id)arg1 fromPreviousDescriptors:(id)arg2;
- (void)removeObserver:(id)arg1;

@end
