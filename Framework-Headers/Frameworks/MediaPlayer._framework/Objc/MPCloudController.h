//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class HSCloudClient, MSVDistributedNotificationObserver;
@protocol HSCloudAvailability, OS_dispatch_queue;

@interface MPCloudController : NSObject
{
    NSObject<HSCloudAvailability> *_cloudAvailabilityController;
    BOOL _isUpdateInProgress;
    int _preferencesChangedNotifyToken;
    BOOL _preferencesChangedNotifyTokenIsValid;
    NSObject<OS_dispatch_queue> *_queue;
    MSVDistributedNotificationObserver *_addToPlaylistBehaviorChangedObserver;
    BOOL _isInitialImport;
    BOOL _isCloudEnabled;
    BOOL _jaliscoGeniusEnabled;
    HSCloudClient *_cloudClient;
}

@property (readonly, nonatomic) BOOL canDefaultMediaLibraryShowCloudContent;
@property (readonly, nonatomic) BOOL canShowCloudDownloadButtons;
@property (readonly, nonatomic) BOOL canShowCloudMusic;
@property (readonly, nonatomic) BOOL canShowCloudVideo;
@property (readonly, nonatomic) HSCloudClient *cloudClient; // @synthesize cloudClient=_cloudClient;
@property (readonly, nonatomic) BOOL enablingJaliscoGeniusRequiresTerms;
@property (readonly, nonatomic) BOOL hasCloudLockerAccount;
@property (readonly, nonatomic) BOOL hasPurchaseHistoryAccount;
@property (readonly, nonatomic) BOOL isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
@property (readonly, nonatomic) BOOL isGeniusEnabled;
@property (readonly, nonatomic) BOOL isInitialImport; // @synthesize isInitialImport=_isInitialImport;
@property (readonly, nonatomic) BOOL isUpdateInProgress; // @synthesize isUpdateInProgress=_isUpdateInProgress;
@property (readonly, nonatomic, getter=isJaliscoGeniusEnabled) BOOL jaliscoGeniusEnabled; // @synthesize jaliscoGeniusEnabled=_jaliscoGeniusEnabled;

+ (BOOL)isEnablingCloudLibraryDestructive;
+ (BOOL)isMediaApplication;
+ (void)migrateCellularDataPreferencesIfNeeded;
+ (id)sharedCloudController;
- (void).cxx_destruct;
- (void)_initializeUpdateInProgressState;
- (void)acceptJaliscGeniusTermsAndConditionsVersion:(long long)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)addGeniusPlaylistWithPersistentID:(unsigned long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addItemWithSagaID:(unsigned long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)becomeActive;
- (void)becomeActiveAndWaitUntilDone:(BOOL)arg1;
- (void)canShowCloudDownloadButtonsDidChangeNotification:(id)arg1;
- (void)canShowCloudTracksDidChangeNotification:(id)arg1;
- (long long)cloudAddToPlaylistBehavior;
- (void)createPlaylistWithPersistentID:(unsigned long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)deprioritizeArtworkRequestForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4;
- (void)disableCloudLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableCloudLibraryWithOptions:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)evaluateKeepLocalRulesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchRecommendedContentWithSeedTrackID:(long long)arg1 seedTrackIDType:(long long)arg2 count:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (void)hasProperNetworkConditionsToShowCloudMediaDidChangeNotification:(id)arg1;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (BOOL)isCellularDataRestricted;
- (void)isCellularDataRestrictedDidChangeNotification:(id)arg1;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)isCellularDataRestrictedForVideos;
- (BOOL)isCloudLibraryEnabled;
- (void)loadArtworkForEntityPersistentID:(long long)arg1 entityType:(long long)arg2 artworkType:(long long)arg3 artworkSourceType:(long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadJaliscoGeniusTermsAndConditionsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)publishPlaylistWithSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resignActive;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sdk_createPlaylistWithPersistenID:(unsigned long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setLikedState:(long long)arg1 forAlbumWithStoreID:(long long)arg2;
- (void)setLikedState:(long long)arg1 forEntityWithStoreID:(long long)arg2 withMediaType:(unsigned long long)arg3;
- (void)setLikedState:(long long)arg1 forPlaylistWithGlobalID:(id)arg2;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistWithPersistentID:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)updateSubscribedPlaylistWithSagaID:(unsigned long long)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadArtworkForPlaylist:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;

@end

