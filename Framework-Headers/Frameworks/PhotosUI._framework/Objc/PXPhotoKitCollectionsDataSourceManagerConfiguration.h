//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, PHCollectionList, PHFetchOptions, PHFetchResult;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject
{
    BOOL _separateSectionsForSmartAndUserCollections;
    BOOL _includePeopleAlbum;
    BOOL _skipKeyAssetFetches;
    BOOL _skipKeyAssetFetchesForSmartAlbums;
    BOOL _skipAssetFetches;
    BOOL _updateKeyAssetFetchesInBackground;
    BOOL _shouldIgnoreLibraryChanges;
    PHFetchResult *_collectionsFetchResult;
    PHCollectionList *_collectionList;
    NSPredicate *_assetsFilterPredicate;
    unsigned long long _assetTypesToInclude;
    unsigned long long _collectionTypesToInclude;
}

@property (nonatomic) unsigned long long assetTypesToInclude; // @synthesize assetTypesToInclude=_assetTypesToInclude;
@property (strong, nonatomic) NSPredicate *assetsFilterPredicate; // @synthesize assetsFilterPredicate=_assetsFilterPredicate;
@property (readonly) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property (nonatomic) unsigned long long collectionTypesToInclude; // @synthesize collectionTypesToInclude=_collectionTypesToInclude;
@property (readonly) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property (readonly) PHFetchOptions *customFetchOptions;
@property (nonatomic) BOOL includePeopleAlbum; // @synthesize includePeopleAlbum=_includePeopleAlbum;
@property (nonatomic) BOOL separateSectionsForSmartAndUserCollections; // @synthesize separateSectionsForSmartAndUserCollections=_separateSectionsForSmartAndUserCollections;
@property BOOL shouldIgnoreLibraryChanges; // @synthesize shouldIgnoreLibraryChanges=_shouldIgnoreLibraryChanges;
@property (nonatomic) BOOL skipAssetFetches; // @synthesize skipAssetFetches=_skipAssetFetches;
@property (nonatomic) BOOL skipKeyAssetFetches; // @synthesize skipKeyAssetFetches=_skipKeyAssetFetches;
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums; // @synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums;
@property (nonatomic) BOOL updateKeyAssetFetchesInBackground; // @synthesize updateKeyAssetFetchesInBackground=_updateKeyAssetFetchesInBackground;

+ (id)_generatePredicateForAssetTypesToInclude:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_newConfigurationWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)init;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionList:(id)arg1 collectionsFetchResult:(id)arg2;
- (id)initWithCollectionsFetchResult:(id)arg1;
- (BOOL)isRootFolder;
- (id)newConfigurationWithCollectionList:(id)arg1;
- (id)newConfigurationWithCollectionsFetchResult:(id)arg1;
- (void)setIsRootFolder:(BOOL)arg1;

@end

