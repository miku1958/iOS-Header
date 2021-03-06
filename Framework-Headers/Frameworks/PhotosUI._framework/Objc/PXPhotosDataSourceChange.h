//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSIndexSet, PHChange, PHFetchResultChangeDetails, PXSectionedDataSourceChangeDetails;

@interface PXPhotosDataSourceChange : NSObject
{
    long long _previousCollectionsCount;
    NSDictionary *_assetCollectionToSectionCache;
    PHFetchResultChangeDetails *_collectionListChangeDetails;
    NSDictionary *_assetCollectionChangeDetails;
    BOOL _prepared;
    NSIndexSet *_deletedSections;
    NSIndexSet *_insertedSections;
    NSIndexSet *_changedSections;
    NSArray *_deletedIndexPaths;
    NSArray *_insertedIndexPaths;
    NSArray *_changedIndexPaths;
    NSArray *_contentChangedIndexPaths;
    NSArray *_favoriteChangedIndexPaths;
    BOOL _changesAreNoOp;
    PXSectionedDataSourceChangeDetails *_sectionedDataSourceChangeDetails;
    NSIndexSet *_sectionsWithKeyAssetChanges;
    PHChange *_originatingPhotoLibraryChange;
}

@property (readonly, copy) NSArray *changedIndexPaths;
@property (readonly, copy) NSIndexSet *changedSections;
@property (readonly) BOOL changesAreNoOp;
@property (readonly, copy) NSArray *contentChangedIndexPaths;
@property (readonly, copy) NSArray *deletedIndexPaths;
@property (readonly, copy) NSIndexSet *deletedSections;
@property (readonly, copy) NSArray *favoriteChangedIndexPaths;
@property (readonly) BOOL hasIncrementalChanges;
@property (readonly, copy) NSArray *insertedIndexPaths;
@property (readonly, copy) NSIndexSet *insertedSections;
@property (readonly, weak) PHChange *originatingPhotoLibraryChange; // @synthesize originatingPhotoLibraryChange=_originatingPhotoLibraryChange;
@property (readonly) PXSectionedDataSourceChangeDetails *sectionedDataSourceChangeDetails; // @synthesize sectionedDataSourceChangeDetails=_sectionedDataSourceChangeDetails;
@property (readonly, nonatomic) NSIndexSet *sectionsWithKeyAssetChanges; // @synthesize sectionsWithKeyAssetChanges=_sectionsWithKeyAssetChanges;

- (void).cxx_destruct;
- (void)_prepareIncrementalDetails;
- (BOOL)_shouldPerformFullReloadForCollectionListChangeNotifications:(id)arg1 collectionChangeNotifications:(id)arg2;
- (BOOL)affectsSectionsInRange:(struct _NSRange)arg1;
- (id)description;
- (id)indexPathAfterApplyingIncrementalChangesToIndexPath:(id)arg1;
- (id)indexPathAfterRevertingIncrementalChangeDetailsFromIndexPath:(id)arg1;
- (id)initWithFromIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (id)initWithIncrementalChanges:(id)arg1 assetCollectionChangeDetails:(id)arg2 sectionsWithKeyAssetChanges:(id)arg3 previousCollectionsCount:(long long)arg4 assetCollectionToSectionCache:(id)arg5 originatingPhotoLibraryChange:(id)arg6 fromIdentifier:(unsigned long long)arg7 toIdentifier:(unsigned long long)arg8;
- (void)prepareIfNeeded;

@end

