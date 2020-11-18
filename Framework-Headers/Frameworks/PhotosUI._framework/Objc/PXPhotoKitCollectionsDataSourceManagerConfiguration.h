//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PHCollectionList, PHFetchOptions, PHFetchResult;

@interface PXPhotoKitCollectionsDataSourceManagerConfiguration : NSObject
{
    BOOL _separateSectionsForSmartAndUserCollections;
    BOOL _includePeopleAlbum;
    BOOL _skipKeyAssetFetches;
    BOOL _shouldIgnoreLibraryChanges;
    PHFetchResult *_collectionsFetchResult;
    PHCollectionList *_collectionList;
    unsigned long long _assetTypesToInclude;
    unsigned long long _collectionTypesToInclude;
}

@property (nonatomic) unsigned long long assetTypesToInclude; // @synthesize assetTypesToInclude=_assetTypesToInclude;
@property (readonly) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property (nonatomic) unsigned long long collectionTypesToInclude; // @synthesize collectionTypesToInclude=_collectionTypesToInclude;
@property (readonly) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property (readonly) PHFetchOptions *customFetchOptions;
@property (nonatomic) BOOL includePeopleAlbum; // @synthesize includePeopleAlbum=_includePeopleAlbum;
@property (nonatomic) BOOL separateSectionsForSmartAndUserCollections; // @synthesize separateSectionsForSmartAndUserCollections=_separateSectionsForSmartAndUserCollections;
@property BOOL shouldIgnoreLibraryChanges; // @synthesize shouldIgnoreLibraryChanges=_shouldIgnoreLibraryChanges;
@property (nonatomic) BOOL skipKeyAssetFetches; // @synthesize skipKeyAssetFetches=_skipKeyAssetFetches;

- (void).cxx_destruct;
- (id)_generatePredicateForAssetTypesToInclude;
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

