//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSSet;
@protocol OS_dispatch_queue;

@interface PHChange : NSObject
{
    NSSet *_insertedObjectIDs;
    NSSet *_changedObjectIDs;
    NSSet *_deletedObjectIDs;
    NSDictionary *_changedAttributesByOID;
    NSDictionary *_changedRelationshipsByOID;
    NSMutableDictionary *_updatedObjectsChangedAttributesByEntityName;
    NSMutableDictionary *_updatedObjectsChangedRelationshipsByEntityName;
    NSArray *_changedObjectIDsArray;
    NSMutableDictionary *_changeDetailsForObjects;
    NSMutableDictionary *_collectionChangeDetailsForObjects;
    NSObject<OS_dispatch_queue> *_changeDetailIsolation;
    NSMapTable *_changeHandlingMap;
    BOOL _unknownMergeEvent;
}

@property (readonly, nonatomic) BOOL hasIncrementalChanges;

+ (id)handlerQueue;
+ (void)pl_simulateChangeWithAssetContainerList:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (id)_preloadChangeDetailsWithClearCacheForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (id)_preloadChangeDetailsWithRefetchForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
- (void)_prepareCachedValuesForEntity:(id)arg1;
- (BOOL)anyUpdatedObjectsWithChangedAttributes:(unsigned long long)arg1 ofEntity:(id)arg2;
- (BOOL)anyUpdatedObjectsWithChangedRelationships:(unsigned long long)arg1 ofEntity:(id)arg2;
- (id)changeDetailsForFetchResult:(id)arg1;
- (id)changeDetailsForObject:(id)arg1;
- (id)changedAttributesByOID;
- (id)changedRelationshipsByOID;
- (BOOL)containsChangesForEntityClass:(Class)arg1;
- (BOOL)contentOrThumbnailChangedForAsset:(id)arg1;
- (BOOL)contentOrThumbnailChangedForPHAssetOID:(id)arg1;
- (id)deletedObjectIDs;
- (id)description;
- (BOOL)hiddenStateChangedForPHAssetOID:(id)arg1;
- (id)init;
- (id)initWithChangedIdentifiers:(id)arg1 unknownMergeEvent:(BOOL)arg2;
- (id)insertedObjectIDs;
- (void)preloadChangeDetailsForFetchResults:(id)arg1 inManagedObjectContext:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)preloadSimulatedChangeDetailsForManualFetchResults:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (BOOL)trashedStateChangedForPHAssetOID:(id)arg1;
- (id)updatedObjectIDs;

@end

