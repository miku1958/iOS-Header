//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>
#import <Photos/NSFastEnumeration-Protocol.h>

@class NSArray, NSDictionary, NSError, NSFetchRequest, NSNumber, NSSet, NSString, PHBatchFetchingArray, PHFetchOptions, PHPhotoLibrary, PHQuery, _PHFetchRequestWrapper;
@protocol OS_dispatch_queue;

@interface PHFetchResult : NSObject <NSCopying, NSFastEnumeration>
{
    PHBatchFetchingArray *_fetchedObjects;
    NSArray *_thumbnailAssets;
    NSDictionary *_fetchedPropertySetsCache;
    NSArray *_seedOIDs;
    NSObject<OS_dispatch_queue> *_isolationQueue;
    BOOL _registeredForChangeNotificationDeltas;
    NSString *_fetchType;
    NSSet *_fetchPropertySets;
    unsigned long long _albumsCount;
    unsigned long long _sharedAlbumsCount;
    unsigned long long _foldersCount;
    unsigned long long _photosCount;
    unsigned long long _videosCount;
    unsigned long long _audiosCount;
    NSNumber *_prefetchCount;
    _PHFetchRequestWrapper *_fetchRequestWrapper;
    NSError *_fetchError;
    BOOL _preventsClearingOIDCache;
    PHQuery *_query;
    long long _chunkSizeForFetch;
}

@property long long chunkSizeForFetch; // @synthesize chunkSizeForFetch=_chunkSizeForFetch;
@property (readonly) unsigned long long count;
@property (readonly) NSError *fetchError;
@property (readonly, nonatomic) PHFetchOptions *fetchOptions;
@property (readonly) NSSet *fetchPropertySets; // @synthesize fetchPropertySets=_fetchPropertySets;
@property (readonly) NSFetchRequest *fetchRequest;
@property (readonly) NSArray *fetchSortDescriptors;
@property (readonly) NSString *fetchType; // @synthesize fetchType=_fetchType;
@property (readonly) NSArray *fetchedObjectIDs;
@property (readonly) NSSet *fetchedObjectIDsSet;
@property (readonly) NSArray *fetchedObjects;
@property (readonly, nonatomic) id firstObject;
@property (readonly, nonatomic) id lastObject;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary;
@property (nonatomic) BOOL preventsClearingOIDCache; // @synthesize preventsClearingOIDCache=_preventsClearingOIDCache;
@property (readonly) PHQuery *query; // @synthesize query=_query;
@property (readonly) NSArray *thumbnailAssets;

+ (id)_batchFetchingArrayForObjectIDs:(id)arg1 fetchResult:(id)arg2;
+ (id)_typesToCountForAssetCollections;
+ (id)_typesToCountForListCollections;
+ (id)cleanedAndSortedOIDsFrom:(id)arg1 usingFetchOptions:(id)arg2;
+ (id)fetchObjectCount:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDs:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)fetchObjectIDsForCombinableFetchResults:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)filteredOIDsFrom:(id)arg1 usingEntityName:(id)arg2 withPhotoLibrary:(id)arg3;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2;
+ (id)pl_fetchResultContainingAssetContainer:(id)arg1 photoLibrary:(id)arg2 includeTrash:(BOOL)arg3;
+ (id)pl_fetchResultForAssetContainerList:(id)arg1 photoLibrary:(id)arg2;
+ (id)pl_fetchResultForStandInAssetCollection:(id)arg1;
+ (id)pl_filterPredicateForAssetContainer:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_canCreateFetchedPropertyObjectsWithClass:(Class)arg1;
- (id)_createFetchedPropertyObjectsWithClass:(Class)arg1 fetchedObjectIDs:(id)arg2;
- (unsigned long long)_possibleChangesFromDetectionCriteriaForChange:(id)arg1;
- (unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1;
- (unsigned long long)cachedCountOfCollectionsWithCollectionTypes:(id)arg1;
- (id)changeHandlingKey;
- (id)changeHandlingValueUsingSeedOids:(id)arg1 withChange:(id)arg2 usingManagedObjectContext:(id)arg3;
- (long long)collectionFetchType;
- (id)containerIdentifier;
- (BOOL)containsObject:(id)arg1;
- (id)copyWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)countOfAssetCollections;
- (unsigned long long)countOfAssetsWithMediaType:(long long)arg1;
- (unsigned long long)countOfCollectionsLists;
- (void)dealloc;
- (id)description;
- (void)enumerateObjectsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateObjectsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)fetchPropertiesForPropertySetClass:(Class)arg1 forObjectsAtIndexes:(id)arg2;
- (id)fetchResultWithChangeHandlingValue:(id)arg1;
- (id)fetchedObjectsUsingManagedObjectContext:(id)arg1;
- (id)fetchedPropertiesForPropertySetClass:(Class)arg1;
- (void)getCountOfCollectionsWithCollectionTypes:(id)arg1;
- (void)getMediaTypeCounts;
- (unsigned long long)indexOfObject:(id)arg1;
- (unsigned long long)indexOfObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)init;
- (id)initWithExistingFetchResult:(id)arg1 filteredObjectIDs:(id)arg2;
- (id)initWithQuery:(id)arg1;
- (id)initWithQuery:(id)arg1 oids:(id)arg2 registerIfNeeded:(BOOL)arg3 usingManagedObjectContext:(id)arg4;
- (BOOL)isFullyBackedByObjectIDs;
- (BOOL)isRegisteredForChangeNotificationDeltas;
- (id)localIdentifiers;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)objectIDAtIndex:(unsigned long long)arg1;
- (id)objectIDs;
- (id)objectsAtIndexes:(id)arg1;
- (id)pl_photoLibraryObject;
- (unsigned long long)possibleChangesForChange:(id)arg1;
- (void)prefetchObjectsAtIndexes:(id)arg1;
- (void)prefetchThumbnailAssetsAtIndexes:(id)arg1;
- (void)setRegisteredForChangeNotificationDeltas:(BOOL)arg1;
- (void)updateRegistrationForChangeNotificationDeltas;

@end
