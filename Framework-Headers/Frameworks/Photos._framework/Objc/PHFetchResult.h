//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSFastEnumeration-Protocol.h>

@class NSArray, NSFetchRequest, PHBatchFetchingArray, PHQuery, _PHFetchRequestWrapper;
@protocol OS_dispatch_queue;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration>
{
    PHBatchFetchingArray *_fetchedObjects;
    NSArray *_seedOIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _registeredForChangeNotificationDeltas;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    unsigned long long _audiosCount;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    long long _chunkSizeForFetch;
    PHQuery *_query;
}

@property long long chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
@property (readonly) unsigned long long count;
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSArray *fetchedObjectIDs;
@property (readonly) NSArray *fetchedObjects;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;
@property (readonly) PHQuery *query; // @synthesize query=_query;

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 includeTrash:(BOOL)arg2;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;
- (void).cxx_destruct;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (id)description;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchedObjectIDsSet;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
- (void)getMediaTypeCounts;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4;
- (BOOL)isRegisteredForChangeNotificationDeltas;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectsAtIndexes:(id)arg1;
- (id)photoLibrary;
- (id)pl_photoLibraryObject;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end

