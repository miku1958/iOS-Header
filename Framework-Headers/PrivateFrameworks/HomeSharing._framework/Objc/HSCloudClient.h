//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/HSCloudAvailability-Protocol.h>

@class HSConnectionConfiguration, NSString, NSXPCConnection;

@interface HSCloudClient : NSObject <HSCloudAvailability>
{
    BOOL _active;
    HSConnectionConfiguration *_configuration;
    NSXPCConnection *_nsxpcConnection;
    unsigned long long _daemonConfiguration;
    long long _preferredVideoQuality;
    CDUnknownBlockType _updateInProgressChangedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType updateInProgressChangedHandler; // @synthesize updateInProgressChangedHandler=_updateInProgressChangedHandler;

- (void).cxx_destruct;
- (void)_sendConfigurationToDaemon;
- (void)_serverDidLaunch;
- (void)_serverUpdateInProgressDidChange;
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStoreItemWithAdamID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)addStoreItemWithAdamID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)addStorePlaylistWithGlobalID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)authenticateAndStartInitialImport:(BOOL)arg1 mergeWithCloudLibrary:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)authenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)becomeActive;
- (BOOL)canSetItemProperty:(id)arg1;
- (BOOL)canSetPlaylistProperty:(id)arg1;
- (BOOL)canShowCloudDownloadButtons;
- (BOOL)canShowCloudMusic;
- (BOOL)canShowCloudVideo;
- (void)cancelUpdateJaliscoGeniusDataInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (long long)cloudAddToPlaylistBehavior;
- (id)connection;
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)dealloc;
- (void)deauthenticateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1;
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1;
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1;
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1;
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1;
- (void)disableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)enableJaliscoGeniusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasProperNetworkConditionsToPlayMedia;
- (BOOL)hasProperNetworkConditionsToShowCloudMedia;
- (void)hideItemsWithPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importArtistHeroImageForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importScreenshotForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (void)isAuthenticatedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)isAuthenticatedWithQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)isCellularDataRestricted;
- (BOOL)isCellularDataRestrictedForMusic;
- (BOOL)isCellularDataRestrictedForStoreApps;
- (BOOL)isCellularDataRestrictedForVideos;
- (void)jaliscoAppsImageDataForStoreID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadArtworkInfoForSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadBooksForStoreIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadIsJaliscoGeniusSupportedWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadIsUpdateInProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusCUIDWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusLearnMoreURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadJaliscoGeniusOperationStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadUpdateProgressWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)publishPlaylistWithSagaID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)redownloadPurchaseAppWithStoreID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeItemsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)removeJaliscoLibraryWithCompletionHander:(CDUnknownBlockType)arg1;
- (void)removePlaylistsWithSagaIDs:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)resetConfiguration:(id)arg1;
- (void)resignActive;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 tracklist:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)searchJaliscoAppsLibrary:(id)arg1 searchMethod:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setCollectionProperties:(id)arg1 forCollectionWithPersistentID:(long long)arg2 groupingType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setDaemonConfiguration:(unsigned long long)arg1;
- (void)setHidden:(BOOL)arg1 purchasedAppWithStoreID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2;
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2;
- (void)setJaliscoGeniusCUID:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)setPreferredVideoQuality:(long long)arg1;
- (BOOL)shouldProhibitActionsForCurrentNetworkConditions;
- (BOOL)shouldProhibitMusicActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitStoreAppsActionForCurrentNetworkConditions;
- (BOOL)shouldProhibitVideosActionForCurrentNetworkConditions;
- (void)unhideAllPurchasedApps:(CDUnknownBlockType)arg1;
- (void)updateArtistHeroImages;
- (void)updateGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoAppsLibraryForFamilyMemberStoreID:(id)arg1 withReason:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)updateJaliscoAppsLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateJaliscoGeniusDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateJaliscoLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSagaLibraryWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)updateSagaLibraryWithReason:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)uploadCloudItemProperties;
- (void)uploadCloudPlaylistProperties;
- (void)uploadItemProperties;

@end

