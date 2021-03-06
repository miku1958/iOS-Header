//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXSearchDataSourceSectionProvider-Protocol.h>

@class NSArray, NSDictionary, NSString, PHCachingImageManager, PHPhotoLibrary;
@protocol PXSearchDataSourceSectionProviderChangeObserver;

@interface PXSearchResultsSectionProvider : NSObject <PXSearchDataSourceSectionProvider>
{
    id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver;
    CDUnknownBlockType _assetsSeeAllButtonHandler;
    CDUnknownBlockType _collectionsSeeAllButtonHandler;
    NSDictionary *_sectionIdentifierToSectionMap;
    NSArray *_sectionIdentifiers;
    PHCachingImageManager *_cachingImageManager;
    NSString *_localizedQueryString;
    PHPhotoLibrary *_photoLibrary;
}

@property (copy, nonatomic) CDUnknownBlockType assetsSeeAllButtonHandler; // @synthesize assetsSeeAllButtonHandler=_assetsSeeAllButtonHandler;
@property (strong, nonatomic) PHCachingImageManager *cachingImageManager; // @synthesize cachingImageManager=_cachingImageManager;
@property (weak, nonatomic) id<PXSearchDataSourceSectionProviderChangeObserver> changeObserver; // @synthesize changeObserver;
@property (copy, nonatomic) CDUnknownBlockType collectionsSeeAllButtonHandler; // @synthesize collectionsSeeAllButtonHandler=_collectionsSeeAllButtonHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *localizedQueryString; // @synthesize localizedQueryString=_localizedQueryString;
@property (readonly, nonatomic) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (copy, nonatomic) NSDictionary *sectionIdentifierToSectionMap; // @synthesize sectionIdentifierToSectionMap=_sectionIdentifierToSectionMap;
@property (copy, nonatomic) NSArray *sectionIdentifiers; // @synthesize sectionIdentifiers=_sectionIdentifiers;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long type;

+ (id)_assetGridLayoutGroupWithEnvironment:(id)arg1;
+ (id)_headerViewSupplementaryItem;
+ (id)assetGridLayoutSectionWithEnvironment:(id)arg1;
+ (id)rowStyleLayoutSectionWithEnvironment:(id)arg1;
- (void).cxx_destruct;
- (id)_allAssetResultUUIDsForSection:(id)arg1;
- (void)_configureCellThumbnailImageWithAssetUUID:(id)arg1 orAsset:(id)arg2 forCell:(id)arg3;
- (void)_configureCellThumbnailImageWithPersonUUID:(id)arg1 forCell:(id)arg2;
- (void)_configureTitledCell:(id)arg1 forSearchResult:(id)arg2;
- (BOOL)_isTopAssetsSection:(long long)arg1;
- (id)_searchResultsSectionForItemIdentifier:(id)arg1;
- (id)_sectionIdentifierToSectionMapWithResults:(id)arg1 allAssetResults:(id)arg2 assetsFetchResult:(id)arg3;
- (long long)_sectionTypeForAssetAggregationType:(unsigned long long)arg1;
- (long long)_sectionTypeForCollectionType:(unsigned long long)arg1;
- (long long)_sectionTypeForSearchResult:(id)arg1;
- (id)_seeAllButtonTitleForSection:(id)arg1;
- (id)_sortedSectionIdentifiersForSections:(id)arg1;
- (id)assetForSearchResult:(id)arg1;
- (id)assetSearchResultForAsset:(id)arg1 inSection:(long long)arg2;
- (id)assetsFetchResultForSection:(id)arg1;
- (id)cellReuseIdentifierForItemIdentifier:(id)arg1;
- (void)configureCell:(id)arg1 forItemIdentifier:(id)arg2;
- (void)configureSupplementaryView:(id)arg1 kind:(id)arg2 indexPath:(id)arg3;
- (id)initWithPhotoLibrary:(id)arg1;
- (BOOL)isSectionExpanded:(id)arg1;
- (id)itemIdentifiersInSectionWithIdentifier:(id)arg1;
- (id)layoutForSectionIdentifier:(id)arg1 environment:(id)arg2 collectionViewLayoutMargins:(struct UIEdgeInsets)arg3;
- (void)prefetchItemsForItemIdentifiers:(id)arg1;
- (void)registerClassesForCellReuseIdentifiers:(CDUnknownBlockType)arg1;
- (void)registerClassesForSupplementaryViewReuseIdentifiers:(CDUnknownBlockType)arg1;
- (void)requestImageForAssetUUID:(id)arg1 orAsset:(id)arg2 withPhotoLibrary:(id)arg3 cachingImageManager:(id)arg4 imageRequestSize:(struct CGSize)arg5 resultHandler:(CDUnknownBlockType)arg6;
- (void)requestImageForPersonUUID:(id)arg1 photoLibrary:(id)arg2 imageRequestSize:(struct CGSize)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (id)searchResultForIdentifier:(id)arg1;
- (unsigned long long)searchResultTypeForSection:(id)arg1;
- (void)setExpanded:(BOOL)arg1 forSection:(id)arg2 sectionHeaderView:(id)arg3;
- (void)setSearchResults:(id)arg1 searchAssetResults:(id)arg2 curatedAssetsFetchResult:(id)arg3 reloadItemIdentifiers:(id)arg4 localizedQueryString:(id)arg5;
- (id)supplementaryViewReuseIdentifierForKind:(id)arg1 indexPath:(id)arg2;

@end

