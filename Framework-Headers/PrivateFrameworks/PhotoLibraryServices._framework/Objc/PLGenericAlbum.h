//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/_PLGenericAlbum.h>

#import <PhotoLibraryServices/PLAlbumProtocol-Protocol.h>
#import <PhotoLibraryServices/PLDerivedAlbumOrigin-Protocol.h>
#import <PhotoLibraryServices/PLIndexMappersDataOrigin-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSMutableOrderedSet, NSNumber, NSObject, NSOrderedSet, NSString, NSURL, PLManagedAsset, PLPhotoLibrary, UIImage;
@protocol PLIndexMappingCache;

@interface PLGenericAlbum : _PLGenericAlbum <PLAlbumProtocol, PLDerivedAlbumOrigin, PLIndexMappersDataOrigin>
{
    NSObject<PLIndexMappingCache> *_derivededAlbums[5];
    BOOL isRegisteredForChanges;
    BOOL didRegisteredWithUserInterfaceContext;
}

@property (readonly, nonatomic) unsigned long long approximateCount;
@property (readonly, strong, nonatomic) NSOrderedSet *assets; // @dynamic assets;
@property (readonly, nonatomic) unsigned long long assetsCount;
@property (nonatomic) unsigned long long batchSize;
@property (readonly, nonatomic) BOOL canContributeToCloudSharedAlbum;
@property (readonly, nonatomic) BOOL canShowAvalancheStacks;
@property (readonly, nonatomic) BOOL canShowComments;
@property (strong, nonatomic) NSString *cloudGUID; // @dynamic cloudGUID;
@property (nonatomic) short cloudLocalState; // @dynamic cloudLocalState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didRegisteredWithUserInterfaceContext; // @synthesize didRegisteredWithUserInterfaceContext;
@property (strong, nonatomic) NSDate *endDate; // @dynamic endDate;
@property (readonly, strong, nonatomic) NSURL *groupURL;
@property (nonatomic) BOOL hasUnseenContentBoolValue;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *importSessionID; // @dynamic importSessionID;
@property (readonly, nonatomic) BOOL isCameraAlbum;
@property (readonly, nonatomic) BOOL isCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isFamilyCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isFolder;
@property (readonly, nonatomic) BOOL isInTrash;
@property (readonly, nonatomic) BOOL isLibrary;
@property (readonly, nonatomic) BOOL isMultipleContributorCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isOwnPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isOwnedCloudSharedAlbum;
@property (readonly, nonatomic) BOOL isPanoramasAlbum;
@property (readonly, nonatomic) BOOL isPendingPhotoStreamAlbum;
@property (readonly, nonatomic) BOOL isPhotoStreamAlbum;
@property (nonatomic) BOOL isPinned; // @dynamic isPinned;
@property (readonly, nonatomic) BOOL isRecentlyAddedAlbum;
@property (nonatomic) BOOL isRegisteredForChanges; // @synthesize isRegisteredForChanges;
@property (readonly, nonatomic) BOOL isRootFolder;
@property (readonly, nonatomic) BOOL isSmartAlbum;
@property (readonly, nonatomic) BOOL isStandInAlbum;
@property (readonly, nonatomic) BOOL isUserLibraryAlbum;
@property (readonly, nonatomic) BOOL isWallpaperAlbum;
@property (strong, nonatomic) PLManagedAsset *keyAsset; // @dynamic keyAsset;
@property (readonly, strong, nonatomic) NSNumber *kind;
@property (nonatomic) int kindValue;
@property (readonly, copy, nonatomic) NSArray *localizedLocationNames;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, strong, nonatomic) NSMutableOrderedSet *mutableAssets; // @dynamic mutableAssets;
@property (readonly, copy, nonatomic) NSString *name;
@property (nonatomic) int pendingItemsCount; // @dynamic pendingItemsCount;
@property (nonatomic) int pendingItemsType; // @dynamic pendingItemsType;
@property (readonly, strong, nonatomic) PLPhotoLibrary *photoLibrary;
@property (readonly, nonatomic) unsigned long long photosCount;
@property (readonly, strong, nonatomic) UIImage *posterImage;
@property (strong, nonatomic) PLManagedAsset *secondaryKeyAsset; // @dynamic secondaryKeyAsset;
@property (readonly, nonatomic) BOOL shouldDeleteWhenEmpty;
@property (strong, nonatomic) NSDictionary *slideshowSettings; // @dynamic slideshowSettings;
@property (readonly, copy, nonatomic) CDUnknownBlockType sortingComparator;
@property (strong, nonatomic) NSDate *startDate; // @dynamic startDate;
@property (readonly) Class superclass;
@property (strong, nonatomic) PLManagedAsset *tertiaryKeyAsset; // @dynamic tertiaryKeyAsset;
@property (strong, nonatomic) NSString *title; // @dynamic title;
@property (strong, nonatomic) NSDate *trashedDate; // @dynamic trashedDate;
@property (nonatomic) short trashedState; // @dynamic trashedState;
@property (strong, nonatomic) NSString *uuid; // @dynamic uuid;
@property (readonly, nonatomic) unsigned long long videosCount;

+ (id)_insertNewAlbumWithKind:(int)arg1 title:(id)arg2 lastInterestingDate:(id)arg3 intoLibrary:(id)arg4;
+ (id)_predicateForSupportedAlbumTypes;
+ (id)_singletonFetchingAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_singletonManagedAlbumWithKind:(int)arg1 library:(id)arg2;
+ (id)_unpushedParentsOfAlbums:(id)arg1;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (struct NSObject *)albumFromGroupURL:(id)arg1 photoLibrary:(id)arg2;
+ (id)albumWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumWithName:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithObjectID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumWithUUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsForStreamID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsMatchingPredicate:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsToUploadInitiallyInLibrary:(id)arg1 limit:(unsigned long long)arg2;
+ (id)albumsWithCloudGUID:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithCloudGUIDs:(id)arg1 inLibrary:(id)arg2;
+ (id)albumsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)albumsWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)allAlbumsInLibrary:(id)arg1;
+ (id)allAlbumsInManagedObjectContext:(id)arg1;
+ (id)allAlbumsRegisteredWithManagedObjectContext:(id)arg1;
+ (id)allAssetsAlbumInLibrary:(id)arg1;
+ (id)allFavoritesAlbumInLibrary:(id)arg1;
+ (id)allHorizontalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allNonPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allPanoramasAlbumInLibrary:(id)arg1;
+ (id)allPhotoStreamAssetsAlbumInLibrary:(id)arg1;
+ (id)allSyncedAlbumsInManagedObjectContext:(id)arg1;
+ (id)allVerticalPanoramasAlbumInLibrary:(id)arg1;
+ (id)allVideosAlbumInLibrary:(id)arg1;
+ (id)cameraRollAlbumInLibrary:(id)arg1;
+ (id)childKeyForOrdering;
+ (id)eventsWithName:(id)arg1 andImportSessionIdentifier:(id)arg2 inManagedObjectContext:(id)arg3;
+ (id)filesystemImportProgressAlbumInLibrary:(id)arg1;
+ (id)iTunesLibraryAlbumInLibrary:(id)arg1;
+ (id)includeUnpushedParentsForAlbums:(id)arg1 limit:(unsigned long long)arg2;
+ (id)insertAlbumWithKind:(int)arg1 title:(id)arg2 uuid:(id)arg3 inManagedObjectContext:(id)arg4;
+ (id)insertNewAlbumIntoLibrary:(id)arg1;
+ (id)insertNewAlbumWithKind:(int)arg1 title:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewAlbumWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewCloudSharedAlbumWithTitle:(id)arg1 lastInterestingDate:(id)arg2 intoLibrary:(id)arg3;
+ (id)insertNewFaceAlbumIntoLibrary:(id)arg1;
+ (id)insertNewFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedEventIntoLibrary:(id)arg1;
+ (id)insertNewSyncedEventWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (id)insertNewSyncedFolderWithTitle:(id)arg1 intoLibrary:(id)arg2;
+ (BOOL)is1WaySyncKind:(int)arg1;
+ (BOOL)isFolder:(int)arg1;
+ (BOOL)isSmartAlbumForKind:(int)arg1;
+ (id)keyPathsForValuesAffectingKindValue;
+ (id)keyPathsForValuesAffectingName;
+ (id)localizedTitleForAlbumKind:(int)arg1;
+ (id)otaRestoreProgressAlbumInLibrary:(id)arg1;
+ (void)removeEmptyAlbumsForCloudResetInLibrary:(id)arg1;
+ (void)removeTrashedAlbumsAndFoldersForCloudResetInLibrary:(id)arg1;
+ (void)resetAlbumStateForCloudInLibrary:(id)arg1;
+ (id)rootFolderInLibrary:(id)arg1;
+ (id)syncProgressAlbumInLibrary:(id)arg1;
+ (id)trashBinAlbumInLibrary:(id)arg1;
+ (id)userLibraryAlbumInLibrary:(id)arg1;
+ (id)uuidFromGroupURL:(id)arg1;
+ (id)wallpaperAlbumInLibrary:(id)arg1;
- (void)_applyTrashedState:(short)arg1 date:(BOOL)arg2:(id)arg3;
- (id)_compactDebugDescription;
- (id)_itemIdentifier;
- (id)_kindDescription;
- (id)_prettyDescription;
- (void)applyPropertiesFromAlbumChange:(id)arg1;
- (void)applyTrashedState:(short)arg1;
- (id)assetsByObjectIDAtIndexes:(id)arg1;
- (void)awakeFromFetch;
- (void)awakeFromInsert;
- (void)batchFetchAssets:(id)arg1;
- (BOOL)canMoveToTrash;
- (BOOL)canPerformEditOperation:(unsigned long long)arg1;
- (id)childKeyForOrdering;
- (id)childManagedObject;
- (unsigned long long)count;
- (unsigned long long)countForAssetsOfKind:(short)arg1;
- (id)cplAlbumChangeInPhotoLibrary:(id)arg1;
- (void)dealloc;
- (void)delete;
- (void)enumerateDerivedAlbums:(CDUnknownBlockType)arg1;
- (void)enumerateDerivedIndexMappers:(CDUnknownBlockType)arg1;
- (BOOL)hasDerivedIndexMappers;
- (void)reducePendingItemsCountBy:(unsigned long long)arg1;
- (void)registerDerivedAlbum:(struct NSObject *)arg1;
- (void)registerForChanges;
- (void)unregisterAllDerivedAlbums;
- (void)unregisterForChanges;
- (void)updateAlbumFolderRelation:(id)arg1 inLibrary:(id)arg2;
- (void)willTurnIntoFault;

@end

