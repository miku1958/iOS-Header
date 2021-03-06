//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHCollection.h>

@class CLLocation, NSArray, NSDate, NSManagedObjectID, NSString, NSURL, PHQuery, PLQuery;

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
    NSManagedObjectID *_parentFolderObjectID;
    BOOL _didFetchDates;
    struct os_unfair_lock_s _datesLock;
    BOOL _isPendingPhotoStreamAlbum;
    BOOL _shouldDeleteWhenEmpty;
    BOOL _isLibrary;
    BOOL _isCameraRoll;
    BOOL _isPanoramasCollection;
    BOOL _isPhotoStreamCollection;
    BOOL _isCloudSharedAlbum;
    BOOL _isStandInCollection;
    BOOL _isOwnedCloudSharedAlbum;
    BOOL _isMultipleContributorCloudSharedAlbum;
    BOOL _isSmartCollection;
    BOOL _hasUnseenContentBoolValue;
    BOOL _canContributeToCloudSharedAlbum;
    int _plAlbumKind;
    int _pendingItemsCount;
    int _pendingItemsType;
    PLQuery *_userQuery;
    NSString *_titleFontName;
    NSString *_transientSubtitle;
    NSArray *_assetOids;
    NSString *_title;
    NSString *_cloudGUID;
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
@property (readonly, nonatomic) NSArray *assetOids; // @synthesize assetOids=_assetOids;
@property (readonly, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property (readonly, nonatomic) BOOL canContainCustomKeyAssets;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum; // @synthesize canContributeToCloudSharedAlbum=_canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (readonly, nonatomic) NSString *cloudGUID; // @synthesize cloudGUID=_cloudGUID;
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
@property (readonly, nonatomic) BOOL isPlacesAlbum;
@property (readonly, nonatomic) BOOL isSmartCollection; // @synthesize isSmartCollection=_isSmartCollection;
@property (readonly, nonatomic) BOOL isStandInCollection; // @synthesize isStandInCollection=_isStandInCollection;
@property (readonly, nonatomic) BOOL isTrashBin;
@property (readonly, nonatomic) BOOL isUserSmartAlbum;
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
@property (readonly, nonatomic) long long titleCategory;
@property (readonly, nonatomic) NSString *titleFontName; // @synthesize titleFontName=_titleFontName;
@property (readonly, nonatomic) unsigned long long titleFontNameHash;
@property (readonly, nonatomic) NSString *transientIdentifier; // @synthesize transientIdentifier=_transientIdentifier;
@property (readonly, nonatomic) NSString *transientSubtitle; // @synthesize transientSubtitle=_transientSubtitle;
@property (strong, nonatomic) PLQuery *userQuery; // @synthesize userQuery=_userQuery;

+ (id)_composePropertiesToFetchWithHint:(unsigned long long)arg1;
+ (id)corePropertiesToFetch;
+ (id)defaultTitleFontNames;
+ (id)descriptionForSubtype:(long long)arg1;
+ (id)descriptionForType:(long long)arg1;
+ (id)descriptionOfTitleCategory:(long long)arg1;
+ (id)entityKeyMap;
+ (id)fetchAssetCollectionsContainingAsset:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsContainingAssets:(id)arg1 withType:(long long)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsForReferences:(id)arg1 photoLibrary:(id)arg2;
+ (id)fetchAssetCollectionsWithALAssetGroupURLs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithCloudIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithObjectIDs:(id)arg1 options:(id)arg2;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 localIdentifiers:(id)arg2 options:(id)arg3;
+ (id)fetchAssetCollectionsWithType:(long long)arg1 subtype:(long long)arg2 options:(id)arg3;
+ (id)fetchMomentsBackingMemory:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsBackingSuggestion:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsInHighlight:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsInMomentList:(id)arg1 options:(id)arg2;
+ (id)fetchMomentsWithOptions:(id)arg1;
+ (id)fetchPhotosHighlightsContainingMoments:(id)arg1 options:(id)arg2;
+ (id)fetchPhotosHighlightsContainingMomentsWithLocalIdentifiers:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedContributionsForAssetsFetchResult:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedContributionsForAssetsMetadata:(id)arg1 options:(id)arg2;
+ (id)fetchSuggestedContributionsForFileURLs:(id)arg1 options:(id)arg2;
+ (id)fetchType;
+ (id)fetchUserLibraryAlbumWithOptions:(id)arg1;
+ (id)graphOptionsForTransientAssetCollection:(id)arg1 needsCompleteMomentsInfo:(BOOL)arg2 options:(id)arg3;
+ (id)identifierCode;
+ (id)managedEntityName;
+ (BOOL)managedObjectSupportsTrashedState;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1 photoLibrary:(id)arg2;
+ (id)pl_PHAssetCollectionForAssetContainer:(id)arg1 photoLibrary:(id)arg2 includeTrash:(BOOL)arg3;
+ (id)posterImageForAssetCollection:(id)arg1;
+ (id)propertiesToFetchWithHint:(unsigned long long)arg1;
+ (long long)titleCategoryForTitleFontName:(id)arg1;
+ (id)titleFontNameForTitleCategory:(long long)arg1;
+ (unsigned long long)titleFontNameHashFromDate:(id)arg1;
+ (unsigned long long)titleFontNameHashFromHash:(unsigned long long)arg1 andHash:(unsigned long long)arg2;
+ (unsigned long long)titleFontNameHashFromString:(id)arg1;
+ (id)transformValueExpression:(id)arg1 forKeyPath:(id)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 subtype:(long long)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 identifier:(id)arg3;
+ (id)transientAssetCollectionWithAssetFetchResult:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2;
+ (id)transientAssetCollectionWithAssets:(id)arg1 title:(id)arg2 identifier:(id)arg3 photoLibrary:(id)arg4;
+ (id)transientAssetCollectionWithFetchOptions:(id)arg1 title:(id)arg2 subtitle:(id)arg3 titleFontName:(id)arg4 identifier:(id)arg5;
- (void).cxx_destruct;
- (id)_fetchAggregateDatesForSmartAlbum;
- (void)_fetchDatesIfNeeded;
- (BOOL)_shouldFetchDatesIfNeeded;
- (BOOL)canContainAssets;
- (BOOL)canPerformEditOperation:(long long)arg1;
- (Class)changeRequestClass;
- (unsigned long long)collectionFixedOrderPriority;
- (BOOL)collectionHasFixedOrder;
- (id)description;
- (id)effectiveCustomSortKey;
- (unsigned long long)estimatedPhotosCount;
- (unsigned long long)estimatedVideosCount;
- (BOOL)hasLocationInfo;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 orQuery:(id)arg3 title:(id)arg4 subtitle:(id)arg5 titleFontName:(id)arg6 identifier:(id)arg7 albumKind:(int)arg8 subtype:(long long)arg9 photoLibrary:(id)arg10;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 identifier:(id)arg4 albumKind:(int)arg5 subtype:(long long)arg6;
- (id)initTransientWithAssets:(id)arg1 orFetchResult:(id)arg2 title:(id)arg3 subtitle:(id)arg4 titleFontName:(id)arg5 identifier:(id)arg6 albumKind:(int)arg7 subtype:(long long)arg8 photoLibrary:(id)arg9;
- (id)initWithFetchDictionary:(id)arg1 propertyHint:(unsigned long long)arg2 photoLibrary:(id)arg3;
- (BOOL)isAlbumContentSort;
- (BOOL)isAlbumContentTitleSort;
- (id)localizedSharedByLabelAllowsEmail:(BOOL)arg1;
- (id)localizedSubtitle;
- (id)localizedTitle;
- (id)objectReference;
- (id)parentFolderID;
- (id)pl_assetContainer;
- (BOOL)startsAtEnd;

@end

