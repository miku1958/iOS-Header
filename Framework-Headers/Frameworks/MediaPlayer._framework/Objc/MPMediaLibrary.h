//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSSecureCoding-Protocol.h>

@class ML3MusicLibrary, NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSPointerArray, NSString, NSURL, QueryCriteriaResultsCache;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaLibrary : NSObject <NSSecureCoding>
{
    id<MPMediaLibraryDataProviderPrivate> _libraryDataProvider;
    long long _libraryChangeObservers;
    NSObject<OS_dispatch_queue> *_entityCacheQueue;
    NSObject<OS_dispatch_queue> *_fixedQueue;
    NSArray *_notificationObservers;
    QueryCriteriaResultsCache *_itemsForCriteriaCache;
    QueryCriteriaResultsCache *_hasItemsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfItemsForCriteriaCache;
    QueryCriteriaResultsCache *_itemResultSetsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsForCriteriaCache;
    QueryCriteriaResultsCache *_hasCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_countOfCollectionsForCriteriaCache;
    QueryCriteriaResultsCache *_collectionsResultSetsForCriteriaCache;
    NSMutableDictionary *_hasItemsDidLoadForCriteria;
    NSMutableDictionary *_hasCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfCollectionsDidLoadForCriteria;
    NSMutableDictionary *_countOfItemsDidLoadForCriteria;
    NSMutableArray *_additionalLibraryFilterPredicates;
    NSObject<OS_dispatch_queue> *_additionalLibraryFilterPredicatesAccessQueue;
    NSPointerArray *_connectionAssertions;
    NSObject<OS_dispatch_queue> *_connectionAssertionsQueue;
    BOOL _disconnectAfterReleasingAssertions;
    float _connectionProgress;
    long long _removalReason;
    unsigned int _determinedHasMedia:1;
    unsigned int _hasMedia:1;
    unsigned int _determinedHasSongs:1;
    unsigned int _hasSongs:1;
    unsigned int _determinedHasGeniusMixes:1;
    unsigned int _hasGeniusMixes:1;
    unsigned int _determinedHasPlaylists:1;
    unsigned int _hasPlaylists:1;
    unsigned int _determinedHasComposers:1;
    unsigned int _hasComposers:1;
    unsigned int _determinedHasPodcasts:1;
    unsigned int _hasPodcasts:1;
    unsigned int _determinedHasUbiquitousBookmarkableItems:1;
    unsigned int _hasUbiquitousBookmarkableContent:1;
    unsigned int _determinedHasAudiobooks:1;
    unsigned int _hasAudiobooks:1;
    long long _cloudFilteringType;
    BOOL _filteringDisabled;
    BOOL _hasVideos;
    BOOL _determinedHasVideos;
    BOOL _hasMusicVideos;
    BOOL _determinedHasMusicVideos;
    BOOL _hasAudibleAudioBooks;
    BOOL _determinedHasAudibleAudioBooks;
    BOOL _hasMovies;
    BOOL _determinedHasMovies;
    BOOL _hasCompilations;
    BOOL _determinedHasCompilations;
    BOOL _hasITunesU;
    BOOL _determinedHasITunesU;
    BOOL _hasVideoITunesU;
    BOOL _determinedHasVideoITunesU;
    BOOL _hasMovieRentals;
    BOOL _determinedHasMovieRentals;
    BOOL _hasTVShows;
    BOOL _determinedHasTVShows;
    BOOL _hasHomeVideos;
    BOOL _determinedHasHomeVideos;
    BOOL _hasVideoPodcasts;
    BOOL _determinedHasVideoPodcasts;
    unsigned char _originalCellNetworkFlags;
    unsigned char _originalWiFiNetworkFlags;
    id __MLCoreStorage;
}

@property (strong, nonatomic) id _MLCoreStorage; // @synthesize _MLCoreStorage=__MLCoreStorage;
@property (readonly, nonatomic) shared_ptr_0f3dbfb3 _MediaLibrary_coreLibrary;
@property (readonly, nonatomic) NSString *_syncValidity;
@property (readonly, nonatomic) NSDate *lastModifiedDate;
@property (readonly, nonatomic) ML3MusicLibrary *ml3Library;
@property (readonly, nonatomic) NSURL *protectedContentSupportStorageURL;
@property (nonatomic) long long removalReason;

+ (void)_endDiscoveringMediaLibrariesIfAllowed;
+ (id)_libraryDataProviders;
+ (id)_libraryForDataProvider:(id)arg1;
+ (id)_mediaLibraries;
+ (void)addLibraryDataProvider:(id)arg1;
+ (long long)authorizationStatus;
+ (void)beginDiscoveringMediaLibraries;
+ (BOOL)companionDeviceActiveStoreAccountIsSubscriber;
+ (id)defaultMediaLibrary;
+ (id)deviceMediaLibrary;
+ (void)endDiscoveringMediaLibraries;
+ (void)initialize;
+ (BOOL)isLibraryServerDisabled;
+ (id)libraryDataProviders;
+ (id)mediaLibraries;
+ (id)mediaLibraryWithUniqueIdentifier:(id)arg1;
+ (void)postEntitiesAddedOrRemovedNotificationForLibraryDataProvider:(id)arg1;
+ (void)reloadDisplayValuesForLibraryDataProvider:(id)arg1;
+ (void)reloadDynamicPropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadInvisiblePropertiesForLibraryDataProvider:(id)arg1;
+ (void)reloadLibraryDataProvider:(id)arg1;
+ (void)removeLibraryDataProvider:(id)arg1 removalReason:(long long)arg2;
+ (void)requestAuthorization:(CDUnknownBlockType)arg1;
+ (void)setDefaultMediaLibrary:(id)arg1;
+ (void)setLibraryServerDisabled:(BOOL)arg1;
+ (void)setRunLoopForNotifications:(id)arg1;
+ (id)sharedMediaLibraries;
+ (BOOL)supportsSecureCoding;
+ (void)syncGenerationDidChangeForLibraryDataProvider:(id)arg1;
+ (void)uniqueIdentifierDidChangeForLibraryDataProvider:(id)arg1;
- (void).cxx_destruct;
- (id)URLForHomeSharingRequest:(id)arg1;
- (void)_canShowCloudTracksDidChangeNotification:(id)arg1;
- (BOOL)_checkHasContent:(BOOL *)arg1 determined:(BOOL *)arg2 mediaType:(unsigned long long)arg3 queryHasEntitiesBlock:(CDUnknownBlockType)arg4;
- (BOOL)_checkHasContent:(BOOL *)arg1 determined:(BOOL *)arg2 queryHasEntitiesBlock:(CDUnknownBlockType)arg3;
- (void)_clearCachedContentDataAndResultSets:(BOOL)arg1;
- (void)_clearCachedEntitiesIncludingResultSets:(BOOL)arg1;
- (void)_clearPendingDisconnection;
- (id)_collectionPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_collectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfCollectionsForQueryCriteria:(id)arg1;
- (unsigned long long)_countOfItemsForQueryCriteria:(id)arg1;
- (void)_didReceiveMemoryWarning:(id)arg1;
- (void)_disconnect;
- (void)_displayValuesDidChangeNotification:(id)arg1;
- (id)_getCachedValueForQueryCritiera:(id)arg1 valueCriteriaCache:(id)arg2 entitiesForCriteriaCache:(id)arg3 didLoadBlocksByQueryCriteria:(id)arg4 valueLoadedFromEntitiesArrayBlock:(CDUnknownBlockType)arg5 loadValueFromDataProviderBlock:(CDUnknownBlockType)arg6;
- (BOOL)_hasCollectionsForQueryCriteria:(id)arg1;
- (BOOL)_hasItemsForQueryCriteria:(id)arg1;
- (id)_initWithLibraryDataProvider:(id)arg1;
- (id)_itemPersistentIdentifiersForQueryCriteria:(id)arg1;
- (id)_itemsForQueryCriteria:(id)arg1;
- (unsigned long long)_persistentIDForAssetURL:(id)arg1;
- (void)_reloadLibraryForContentsChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForDynamicPropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForInvisiblePropertyChangeWithNotificationInfo:(id)arg1;
- (void)_reloadLibraryForRestrictionsChange;
- (void)_removeConnectionAssertion:(id)arg1;
- (void)_scheduleLibraryChangeNotificationPostingBlock:(CDUnknownBlockType)arg1;
- (void)_setupNotifications;
- (void)_tearDownNotifications;
- (void)addAdvertisementItemWithDictionary:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addGlobalPlaylistWithID:(id)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addItemWithProductID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addLibraryFilterPredicate:(id)arg1;
- (void)addNonLibraryOwnedPlaylistWithGlobalID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addPlaylistStoreItemsWithMetadata:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)addPlaylistWithName:(id)arg1;
- (id)addPlaylistWithName:(id)arg1 activeGeniusPlaylist:(BOOL)arg2;
- (void)addStoreItem:(long long)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addStoreItemIDs:(id)arg1 andAddTracksToCloudLibrary:(BOOL)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)addTracksToMyLibrary:(id)arg1;
- (id)additionalLibraryFilterPredicates;
- (id)artworkDataSource;
- (void)beginGeneratingLibraryChangeNotifications;
- (void)clearLocationPropertiesOfItem:(id)arg1;
- (long long)cloudFilteringType;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (BOOL)collectionExistsContainedWithinSyncIDs:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithCloudUniversalLibraryID:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithName:(id)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (BOOL)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (id)collectionWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2 verifyExistence:(BOOL)arg3;
- (id)completeMyCollectionArtworkDataSource;
- (void)connectWithAuthenticationData:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)connectWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)connectionAssertionWithIdentifier:(id)arg1;
- (float)connectionProgress;
- (unsigned long long)currentEntityRevision;
- (id)databasePath;
- (void)dealloc;
- (id)decodeItemWithCoder:(id)arg1;
- (BOOL)deleteDatabaseProperty:(id)arg1;
- (BOOL)deleteItems:(id)arg1;
- (id)description;
- (void)disconnect;
- (void)downloadAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)endGeneratingLibraryChangeNotifications;
- (id)entityCache;
- (id)entityWithLibraryURL:(id)arg1;
- (id)entityWithMultiverseIdentifier:(id)arg1;
- (id)entityWithPersistentID:(long long)arg1 entityType:(long long)arg2;
- (id)entityWithSpotlightIdentifier:(id)arg1;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 inUsersLibrary:(BOOL)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 maximumRevisionType:(int)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateEntityChangesAfterSyncAnchor:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)errorResolverForItem:(id)arg1;
- (unsigned long long)filterAvailableContentGroups:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)geniusItemsForSeedItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getPlaylistWithUUID:(id)arg1 creationMetadata:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)hasAlbums;
- (BOOL)hasArtists;
- (BOOL)hasAudibleAudioBooks;
- (BOOL)hasAudioITunesUContent;
- (BOOL)hasAudiobooks;
- (BOOL)hasCompilations;
- (BOOL)hasComposers;
- (BOOL)hasGeniusMixes;
- (BOOL)hasGenres;
- (BOOL)hasHomeVideos;
- (BOOL)hasITunesUContent;
- (BOOL)hasMedia;
- (BOOL)hasMediaOfType:(unsigned long long)arg1;
- (BOOL)hasMovieRentals;
- (BOOL)hasMovies;
- (BOOL)hasMusicVideos;
- (BOOL)hasPlaylists;
- (BOOL)hasPodcasts;
- (BOOL)hasSongs;
- (BOOL)hasTVShows;
- (BOOL)hasUbiquitousBookmarkableItems;
- (BOOL)hasVideoITunesUContent;
- (BOOL)hasVideoPodcasts;
- (BOOL)hasVideos;
- (unsigned long long)hash;
- (unsigned int)homeSharingDatabaseID;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(id)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (BOOL)importOriginalArtworkFromImageData:(id)arg1 withArtworkToken:(id)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isGeniusEnabled;
- (BOOL)isValidAssetURL:(id)arg1;
- (BOOL)itemExistsInDatabaseWithPersistentID:(unsigned long long)arg1;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1;
- (id)itemWithPersistentID:(unsigned long long)arg1 verifyExistence:(BOOL)arg2;
- (id)itemWithStoreID:(unsigned long long)arg1;
- (id)libraryDataProvider;
- (id)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (id)localizedSectionIndexTitles;
- (id)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (id)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (id)name;
- (id)newPlaylistWithPersistentID:(unsigned long long)arg1;
- (id)pathForAssetURL:(id)arg1;
- (void)performReadTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)performStoreItemLibraryImport:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)performTransactionWithBlock:(CDUnknownBlockType)arg1;
- (id)playbackHistoryPlaylist;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (long long)playlistGeneration;
- (id)playlistWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3;
- (void)populateLocationPropertiesOfItem:(id)arg1 withPath:(id)arg2 assetProtectionType:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (id)preferredAudioLanguages;
- (id)preferredSubtitleLanguages;
- (BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (BOOL)removeItems:(id)arg1;
- (void)removeLibraryFilterPredicate:(id)arg1;
- (BOOL)removePlaylist:(id)arg1;
- (BOOL)requiresAuthentication;
- (void)setCloudFilteringType:(long long)arg1;
- (void)setLibraryFilterPredicates;
- (void)setSyncPlaylistId:(unsigned long long)arg1;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(id)arg2;
- (void)setValues:(id)arg1 forProperties:(id)arg2 forItemPersistentIDs:(id)arg3;
- (long long)status;
- (unsigned long long)syncGenerationID;
- (unsigned long long)syncPlaylistId;
- (id)syncValidity;
- (id)uniqueIdentifier;
- (id)valueForDatabaseProperty:(id)arg1;
- (BOOL)writable;

@end
