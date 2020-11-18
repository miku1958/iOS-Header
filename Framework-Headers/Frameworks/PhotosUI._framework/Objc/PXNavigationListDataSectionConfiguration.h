//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSPredicate, PHCollectionList, PHFetchResult;

@interface PXNavigationListDataSectionConfiguration : NSObject
{
    BOOL _emptyCollectionsHidden;
    BOOL _showSyncedFromMacAlbums;
    BOOL _includeKeyAssetFetches;
    BOOL _includeUserSmartAlbums;
    BOOL _hideHiddenAlbum;
    BOOL _skipKeyAssetFetchesForSmartAlbums;
    BOOL _skipAssetFetches;
    BOOL _skipAssetCountFetches;
    PHCollectionList *_collectionList;
    PHFetchResult *_collectionsFetchResult;
    NSPredicate *_assetsFilterPredicate;
}

@property (copy, nonatomic) NSPredicate *assetsFilterPredicate; // @synthesize assetsFilterPredicate=_assetsFilterPredicate;
@property (readonly, nonatomic) PHCollectionList *collectionList; // @synthesize collectionList=_collectionList;
@property (readonly, nonatomic) PHFetchResult *collectionsFetchResult; // @synthesize collectionsFetchResult=_collectionsFetchResult;
@property (nonatomic) BOOL emptyCollectionsHidden; // @synthesize emptyCollectionsHidden=_emptyCollectionsHidden;
@property (nonatomic) BOOL hideHiddenAlbum; // @synthesize hideHiddenAlbum=_hideHiddenAlbum;
@property (nonatomic) BOOL includeKeyAssetFetches; // @synthesize includeKeyAssetFetches=_includeKeyAssetFetches;
@property (nonatomic) BOOL includeUserSmartAlbums; // @synthesize includeUserSmartAlbums=_includeUserSmartAlbums;
@property (nonatomic) BOOL showSyncedFromMacAlbums; // @synthesize showSyncedFromMacAlbums=_showSyncedFromMacAlbums;
@property (nonatomic) BOOL skipAssetCountFetches; // @synthesize skipAssetCountFetches=_skipAssetCountFetches;
@property (nonatomic) BOOL skipAssetFetches; // @synthesize skipAssetFetches=_skipAssetFetches;
@property (nonatomic) BOOL skipKeyAssetFetchesForSmartAlbums; // @synthesize skipKeyAssetFetchesForSmartAlbums=_skipKeyAssetFetchesForSmartAlbums;

+ (id)configurationWithCollectionList:(id)arg1;
+ (id)configurationWithCollectionsFetchResult:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCollectionList:(id)arg1;
- (id)initWithCollectionsFetchResult:(id)arg1;

@end
