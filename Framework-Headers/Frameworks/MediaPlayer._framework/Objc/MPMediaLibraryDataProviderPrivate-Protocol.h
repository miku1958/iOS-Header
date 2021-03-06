//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaLibraryDataProvider-Protocol.h>

@class MIPMultiverseIdentifier, MPMediaItem, MPStoreItemLibraryImport, NSArray, NSData, NSDate, NSDictionary, NSIndexSet, NSString;
@protocol MPArtworkDataSource;

@protocol MPMediaLibraryDataProviderPrivate <MPMediaLibraryDataProvider>

@property (readonly, copy, nonatomic) NSString *accountDSID;
@property (readonly, nonatomic) id<MPArtworkDataSource> completeMyCollectionArtworkDataSource;
@property (readonly, nonatomic) NSString *databasePath;
@property (readonly, nonatomic) BOOL isGeniusEnabled;
@property (readonly, nonatomic) NSArray *localizedSectionIndexTitles;
@property (readonly, nonatomic) long long playbackHistoryPlaylistPersistentID;
@property (readonly, nonatomic) NSArray *preferredAudioLanguages;
@property (readonly, nonatomic) NSArray *preferredSubtitleLanguages;


@optional
+ (NSArray *)onDiskProviders;
+ (void)setOnDiskProviders:(NSArray *)arg1;
- (void)addGlobalPlaylistWithID:(NSString *)arg1 andAddToCloudLibrary:(BOOL)arg2 completion:(void (^)(NSError *))arg3;
- (void)addItemWithIdentifier:(long long)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)addItemsWithIdentifiers:(NSArray *)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL))arg3;
- (void)addNonLibraryOwnedPlaylistsWithGlobalIDs:(NSArray *)arg1 completion:(void (^)(NSDictionary *, NSError *))arg2;
- (void)addPlaylistStoreItemsForLookupItems:(NSArray *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (long long)addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)addTracksToMyLibrary:(NSArray *)arg1;
- (void)clearLocationPropertiesOfItemWithIdentifier:(long long)arg1;
- (BOOL)collectionExistsContainedWithinPersistentIDs:(const unsigned long long *)arg1 count:(unsigned long long)arg2 groupingType:(long long)arg3 existentPID:(unsigned long long *)arg4;
- (BOOL)collectionExistsContainedWithinSyncIDs:(NSArray *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithCloudUniversalLibraryID:(NSString *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithName:(NSString *)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithPersistentID:(unsigned long long)arg1 groupingType:(long long)arg2;
- (BOOL)collectionExistsWithSagaID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (BOOL)collectionExistsWithStoreID:(long long)arg1 groupingType:(long long)arg2 existentPID:(unsigned long long *)arg3;
- (void *)createGeniusClusterPlaylistWithSeedItemIdentifiers:(long long *)arg1 count:(unsigned long long)arg2 error:(id *)arg3;
- (BOOL)deleteDatabaseProperty:(NSString *)arg1;
- (BOOL)deleteItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (long long *)generateItemIdentifiersForGeniusClusterPlaylist:(void *)arg1 count:(unsigned long long *)arg2 error:(id *)arg3;
- (void)geniusItemsForSeedItem:(MPMediaItem *)arg1 completion:(void (^)(NSArray *))arg2;
- (BOOL)hasGeniusMixes;
- (BOOL)hasMediaOfType:(unsigned long long)arg1;
- (BOOL)hasUbiquitousBookmarkableItems;
- (void)importArtworkTokenForEntityPersistentID:(unsigned long long)arg1 entityType:(long long)arg2 artworkToken:(NSString *)arg3 artworkType:(long long)arg4 sourceType:(long long)arg5;
- (BOOL)importOriginalArtworkFromImageData:(NSData *)arg1 withArtworkToken:(NSString *)arg2 artworkType:(long long)arg3 sourceType:(long long)arg4 mediaType:(unsigned long long)arg5;
- (BOOL)isCurrentThreadInTransaction;
- (BOOL)itemExistsWithPersistentID:(unsigned long long)arg1;
- (long long)itemPersistentIDForStoreID:(long long)arg1;
- (NSDate *)lastModifiedDate;
- (NSString *)localizedSectionHeaderForSectionIndex:(unsigned long long)arg1;
- (void)moveItemFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 inPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL))arg4;
- (MIPMultiverseIdentifier *)multiverseIdentifierForCollectionWithPersistentID:(long long)arg1 groupingType:(long long)arg2;
- (MIPMultiverseIdentifier *)multiverseIdentifierForTrackWithPersistentID:(long long)arg1;
- (void)performReadTransactionWithBlock:(void (^)(void))arg1;
- (void)performStoreItemLibraryImport:(MPStoreItemLibraryImport *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (BOOL)performTransactionWithBlock:(BOOL (^)(void))arg1;
- (BOOL)playlistExistsWithPersistentID:(unsigned long long)arg1;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(NSString *)arg2 assetProtectionType:(long long)arg3;
- (void)populateLocationPropertiesOfItemWithIdentifier:(long long)arg1 withPath:(NSString *)arg2 assetProtectionType:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (BOOL)recordPlayEventForAlbumPersistentID:(long long)arg1;
- (BOOL)recordPlayEventForPlaylistPersistentID:(long long)arg1;
- (void)releaseGeniusClusterPlaylist:(void *)arg1;
- (void)removeAllItemsInPlaylistWithIdentifier:(long long)arg1;
- (void)removeFirstItemFromPlaylistWithIdentifier:(long long)arg1;
- (void)removeItemsAtIndexes:(NSIndexSet *)arg1 inPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL))arg3;
- (BOOL)removeItemsWithIdentifiers:(long long *)arg1 count:(unsigned long long)arg2;
- (BOOL)removePlaylistWithIdentifier:(long long)arg1;
- (void)sdk_addItemWithOpaqueID:(NSString *)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)sdk_addItemWithOpaqueIdentifier:(NSString *)arg1 toPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(NSError *))arg3;
- (long long)sdk_addPlaylistWithValuesForProperties:(NSDictionary *)arg1;
- (void)seedPlaylistWithIdentifier:(long long)arg1 withItemWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL, NSError *))arg3;
- (void)setItemsWithIdentifiers:(NSArray *)arg1 forPlaylistWithIdentifier:(long long)arg2 completionBlock:(void (^)(BOOL))arg3;
- (BOOL)setValue:(id)arg1 forDatabaseProperty:(NSString *)arg2;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofCollectionWithIdentifier:(long long)arg3 groupingType:(long long)arg4 completionBlock:(void (^)(BOOL, NSError *))arg5;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofItemWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)setValue:(id)arg1 forProperty:(NSString *)arg2 ofPlaylistWithIdentifier:(long long)arg3 completionBlock:(void (^)(BOOL, NSError *))arg4;
- (void)setValues:(NSArray *)arg1 forProperties:(NSArray *)arg2 forItemPersistentIDs:(NSArray *)arg3;
- (BOOL)supportsEntityChangeTrackingForMediaEntityType:(long long)arg1 collectionGroupingType:(long long)arg2 dataProviderClass:(out Class *)arg3;
- (void)updateEntitesToCurrentRevision;
- (id)valueForDatabaseProperty:(NSString *)arg1;
@end

