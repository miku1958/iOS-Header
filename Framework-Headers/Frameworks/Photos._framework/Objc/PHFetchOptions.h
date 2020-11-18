//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSCopying-Protocol.h>

@class NSArray, NSMutableSet, NSNumber, NSPredicate, NSSet, NSString, PHPhotoLibrary;

@interface PHFetchOptions : NSObject <NSCopying>
{
    NSNumber *_includeHiddenAssetsNumber;
    NSNumber *_includeAllBurstAssetsNumber;
    NSNumber *_includeAssetSourceTypesNumber;
    NSNumber *_fetchLimitNumber;
    NSNumber *_wantsIncrementalChangeDetailsNumber;
    NSNumber *_chunkSizeForFetchNumber;
    NSNumber *_cacheSizeForFetchNumber;
    NSNumber *_reverseSortOrderNumber;
    NSNumber *_includeWallpaperAssetsNumber;
    NSNumber *_includeDuplicateAssetsNumber;
    NSNumber *_includePendingMemoriesNumber;
    NSNumber *_includeRejectedMemoriesNumber;
    NSNumber *_personContextNumber;
    NSNumber *_includeTrashedAssetsNumber;
    NSNumber *_includeFavoriteMemoriesCollectionListNumber;
    NSNumber *_includePlacesSmartAlbumNumber;
    NSNumber *_excludeMontageAssetsNumber;
    NSNumber *_minimumVerifiedFaceCountNumber;
    NSNumber *_minimumUnverifiedFaceCountNumber;
    NSNumber *_includeNonvisibleFacesNumber;
    NSMutableSet *_propertySets;
    NSNumber *_shouldPrefetchCountNumber;
    NSPredicate *_predicate;
    NSArray *_sortDescriptors;
    NSArray *_customObjectIDSortOrder;
    NSString *_transientIdentifier;
    NSPredicate *_internalPredicate;
    NSArray *_internalSortDescriptors;
    NSPredicate *_internalInclusionPredicate;
    PHPhotoLibrary *_photoLibrary;
}

@property (nonatomic) long long cacheSizeForFetch;
@property (nonatomic) long long chunkSizeForFetch;
@property (strong, nonatomic) NSArray *customObjectIDSortOrder; // @synthesize customObjectIDSortOrder=_customObjectIDSortOrder;
@property (nonatomic) BOOL excludeMontageAssets;
@property (nonatomic) unsigned long long fetchLimit;
@property (strong, nonatomic) NSArray *fetchPropertySets;
@property (readonly, nonatomic) NSSet *fetchPropertySetsAsSet;
@property (nonatomic) BOOL includeAllBurstAssets;
@property (nonatomic) unsigned long long includeAssetSourceTypes;
@property (nonatomic) BOOL includeDuplicateAssets;
@property (nonatomic) BOOL includeFavoriteMemoriesCollectionList;
@property (nonatomic) BOOL includeHiddenAssets;
@property (nonatomic) BOOL includeNonvisibleFaces;
@property (nonatomic) BOOL includePendingMemories;
@property (nonatomic) BOOL includePlacesSmartAlbum;
@property (nonatomic) BOOL includeRejectedMemories;
@property (nonatomic) BOOL includeTrashedAssets;
@property (nonatomic) BOOL includeWallpaperAssets;
@property (strong, nonatomic) NSPredicate *internalInclusionPredicate; // @synthesize internalInclusionPredicate=_internalInclusionPredicate;
@property (strong, nonatomic) NSPredicate *internalPredicate; // @synthesize internalPredicate=_internalPredicate;
@property (strong, nonatomic) NSArray *internalSortDescriptors; // @synthesize internalSortDescriptors=_internalSortDescriptors;
@property (nonatomic) unsigned long long minimumUnverifiedFaceCount;
@property (nonatomic) unsigned long long minimumVerifiedFaceCount;
@property (nonatomic) long long personContext;
@property (strong, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (nonatomic) BOOL reverseSortOrder;
@property (nonatomic) BOOL shouldPrefetchCount;
@property (strong, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;
@property (strong, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property (nonatomic) BOOL wantsIncrementalChangeDetails;

+ (id)fetchOptionsWithInclusiveDefaults;
- (void).cxx_destruct;
- (void)addFetchPropertySets:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (void)mergeWithFetchOptions:(id)arg1;

@end
