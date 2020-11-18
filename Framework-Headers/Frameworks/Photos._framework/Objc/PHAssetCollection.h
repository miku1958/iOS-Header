//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHCollection.h>

@class CLLocation, NSArray, NSDate, NSString, NSURL, PHQuery;

@interface PHAssetCollection : PHCollection
{
    NSString *_localizedTitle;
    long long _assetCollectionType;
    long long _assetCollectionSubtype;
    NSDate *_startDate;
    NSDate *_endDate;
    CLLocation *_approximateLocation;
    NSArray *_localizedLocationNames;
    NSArray *_assets;
    PHQuery *_query;
    NSString *_transientIdentifier;
    BOOL _canShowCloudComments;
    BOOL _isPendingPhotoStreamAlbum;
    BOOL _shouldDeleteWhenEmpty;
    BOOL _isLibrary;
    BOOL _isCameraRoll;
    BOOL _isPanoramasCollection;
    BOOL _isWallpaperCollection;
    BOOL _isPhotoStreamCollection;
    BOOL _isCloudSharedAlbum;
    BOOL _isStandInCollection;
    BOOL _isOwnedCloudSharedAlbum;
    BOOL _isMultipleContributorCloudSharedAlbum;
    BOOL _isSmartCollection;
    BOOL _hasUnseenContentBoolValue;
    BOOL _canContributeToCloudSharedAlbum;
    int _pendingItemsCount;
    int _pendingItemsType;
    int _plAlbumKind;
    NSString *_title;
    unsigned long long _approximateCount;
    unsigned long long _approximatePhotosCount;
    unsigned long long _approximateVideosCount;
    NSURL *_groupURL;
    CDUnknownBlockType _sortingComparator;
    NSString *_importSessionID;
}

@property (nonatomic, getter=_canShowCloudComments, setter=_setCanShowCloudComments:) BOOL _canShowCloudComments; // @synthesize _canShowCloudComments;
@property (readonly, nonatomic) unsigned long long approximateCount; // @synthesize approximateCount=_approximateCount;
@property (readonly, nonatomic) CLLocation *approximateLocation; // @synthesize approximateLocation=_approximateLocation;
@property (readonly, nonatomic) unsigned long long approximatePhotosCount; // @synthesize approximatePhotosCount=_approximatePhotosCount;
@property (readonly, nonatomic) unsigned long long approximateVideosCount; // @synthesize approximateVideosCount=_approximateVideosCount;
@property (readonly, nonatomic) long long assetCollectionSubtype; // @synthesize assetCollectionSubtype=_assetCollectionSubtype;
@property (readonly, nonatomic) long long assetCollectionType; // @synthesize assetCollectionType=_assetCollectionType;
@property (readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property (readonly, nonatomic) BOOL canContainCustomKeyAssets;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum; // @synthesize canContributeToCloudSharedAlbum=_canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) unsigned long long estimatedAssetCount;
@property (readonly, nonatomic) NSURL *groupURL; // @synthesize groupURL=_groupURL;
@property (readonly, nonatomic) BOOL hasUnseenContentBoolValue; // @synthesize hasUnseenContentBoolValue=_hasUnseenContentBoolValue;
@property (readonly, nonatomic) NSString *importSessionID; // @synthesize importSessionID=_importSessionID;
@property (readonly, nonatomic) BOOL isCameraRoll; // @synthesize isCameraRoll=_isCameraRoll;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum; // @synthesize isCloudSharedAlbum=_isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isLastImportedAlbum;
@property (readonly, nonatomic) BOOL isLibrary; // @synthesize isLibrary=_isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum; // @synthesize isMultipleContributorCloudSharedAlbum=_isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum; // @synthesize isOwnedCloudSharedAlbum=_isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPanoramasCollection; // @synthesize isPanoramasCollection=_isPanoramasCollection;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum; // @synthesize isPendingPhotoStreamAlbum=_isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamCollection; // @synthesize isPhotoStreamCollection=_isPhotoStreamCollection;
@property (readonly, nonatomic) BOOL isSmartCollection; // @synthesize isSmartCollection=_isSmartCollection;
@property (readonly, nonatomic) BOOL isStandInCollection; // @synthesize isStandInCollection=_isStandInCollection;
@property (readonly, nonatomic) BOOL isTrashBin;
@property (readonly, nonatomic) BOOL isWallpaperCollection; // @synthesize isWallpaperCollection=_isWallpaperCollection;
@property (readonly, nonatomic) BOOL keyAssetsAtEnd;
@property (readonly, nonatomic) NSArray *localizedLocationNames; // @synthesize localizedLocationNames=_localizedLocationNames;
@property (readonly, nonatomic) int pendingItemsCount; // @synthesize pendingItemsCount=_pendingItemsCount;
@property (readonly, nonatomic) int pendingItemsType; // @synthesize pendingItemsType=_pendingItemsType;
@property (readonly, nonatomic) int plAlbumKind; // @synthesize plAlbumKind=_plAlbumKind;
@property (readonly, nonatomic) PHQuery *query; // @synthesize query=_query;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty; // @synthesize shouldDeleteWhenEmpty=_shouldDeleteWhenEmpty;
@property (readonly, copy, nonatomic) CDUnknownBlockType sortingComparator; // @synthesize sortingComparator=_sortingComparator;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;

+ (id)_transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)entityKeyForPropertyKey:(id)arg1;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchPredicateFromComparisonPredicate:(id)arg1 options:(id)arg2;
+ (id)fetchUserLibraryAlbumWithOptions:(id)arg1;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1 includeTrash:(BOOL)arg2;
+ (id)posterImageForAssetCollection:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3;
- (void).cxx_destruct;
- (BOOL)canContainAssets;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (BOOL)collectionCanBePinned;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (id)localizedTitle;
- (id)pl_assetContainer;
- (BOOL)pl_isWallpaperAlbum;

@end

