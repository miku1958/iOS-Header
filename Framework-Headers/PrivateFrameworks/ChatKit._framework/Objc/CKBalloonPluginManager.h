//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/CKAppInstallationWatcherObserver-Protocol.h>

@class CKPreviewDispatchCache, IMBalloonPlugin, NSArray, NSCache, NSDictionary, NSHashTable, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface CKBalloonPluginManager : NSObject <CKAppInstallationWatcherObserver>
{
    NSArray *_appStripCandidatePlugins;
    NSArray *_visibleAppStripPlugins;
    NSArray *_visibleSwitcherPlugins;
    NSArray *_recentAppStripPlugins;
    NSArray *_visibleRecentAppStripPlugins;
    BOOL _isAppInstallationEnabled;
    BOOL _isAppRemovalEnabled;
    BOOL _isCameraAllowed;
    BOOL _appStoreAutoEnableToggled;
    BOOL _keepingEmptySections;
    BOOL _isAppInstallationObserver;
    NSString *_lastLaunchedIdentifier;
    IMBalloonPlugin *_lastViewedPlugin;
    NSArray *_visiblePlugins;
    NSArray *_cachedPotentiallyVisiblePlugins;
    NSArray *_favoriteAppStripPlugins;
    NSHashTable *_currentExtensionConsumers;
    NSDictionary *_pluginVersionMap;
    NSDictionary *_pluginSeenMap;
    NSDictionary *_pluginIndexPathMap;
    NSMutableDictionary *_historicalPluginIndexPathMap;
    NSMutableArray *_MRUPluginInteractionList;
    NSDictionary *_pluginLaunchTimeMap;
    NSArray *_allPlugins;
    long long _numberOfSectionsToKeep;
    NSMutableArray *_visibleInstallations;
    NSSet *_oldVisibleSwitcherPluginIdentifiers;
    NSCache *_iconCache;
    CKPreviewDispatchCache *_snapshotCache;
    NSMutableDictionary *_activeBrowsers;
}

@property (strong, nonatomic) NSMutableArray *MRUPluginInteractionList; // @synthesize MRUPluginInteractionList=_MRUPluginInteractionList;
@property (strong, nonatomic) NSMutableDictionary *activeBrowsers; // @synthesize activeBrowsers=_activeBrowsers;
@property (readonly, nonatomic) NSArray *allEnabledPlugins;
@property (strong, nonatomic) NSArray *allPlugins; // @synthesize allPlugins=_allPlugins;
@property (nonatomic, getter=isAppStoreAutoEnableToggled) BOOL appStoreAutoEnableToggled; // @synthesize appStoreAutoEnableToggled=_appStoreAutoEnableToggled;
@property (strong, nonatomic) NSArray *cachedPotentiallyVisiblePlugins; // @synthesize cachedPotentiallyVisiblePlugins=_cachedPotentiallyVisiblePlugins;
@property (strong, nonatomic) NSHashTable *currentExtensionConsumers; // @synthesize currentExtensionConsumers=_currentExtensionConsumers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *disabledPlugins;
@property (strong, nonatomic) NSArray *favoriteAppStripPlugins; // @synthesize favoriteAppStripPlugins=_favoriteAppStripPlugins;
@property (readonly, nonatomic) BOOL hasLoadedExtensions;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableDictionary *historicalPluginIndexPathMap; // @synthesize historicalPluginIndexPathMap=_historicalPluginIndexPathMap;
@property (strong, nonatomic) NSCache *iconCache; // @synthesize iconCache=_iconCache;
@property (nonatomic) BOOL isAppInstallationEnabled; // @synthesize isAppInstallationEnabled=_isAppInstallationEnabled;
@property (nonatomic) BOOL isAppInstallationObserver; // @synthesize isAppInstallationObserver=_isAppInstallationObserver;
@property (readonly, nonatomic) BOOL isAppRemovalEnabled;
@property (nonatomic) BOOL isAppRemovalEnabled; // @synthesize isAppRemovalEnabled=_isAppRemovalEnabled;
@property (readonly, nonatomic) BOOL isAppStoreEnabled;
@property (nonatomic) BOOL isCameraAllowed; // @synthesize isCameraAllowed=_isCameraAllowed;
@property (nonatomic, getter=isKeepingEmptySections) BOOL keepingEmptySections; // @synthesize keepingEmptySections=_keepingEmptySections;
@property (strong, nonatomic) NSString *lastLaunchedIdentifier; // @synthesize lastLaunchedIdentifier=_lastLaunchedIdentifier;
@property (weak, nonatomic) IMBalloonPlugin *lastViewedPlugin; // @synthesize lastViewedPlugin=_lastViewedPlugin;
@property (nonatomic) long long numberOfSectionsToKeep; // @synthesize numberOfSectionsToKeep=_numberOfSectionsToKeep;
@property (strong, nonatomic) NSSet *oldVisibleSwitcherPluginIdentifiers; // @synthesize oldVisibleSwitcherPluginIdentifiers=_oldVisibleSwitcherPluginIdentifiers;
@property (strong, nonatomic) NSDictionary *pluginIndexPathMap;
@property (strong, nonatomic) NSDictionary *pluginIndexPathMap; // @synthesize pluginIndexPathMap=_pluginIndexPathMap;
@property (strong, nonatomic) NSDictionary *pluginLaunchTimeMap; // @synthesize pluginLaunchTimeMap=_pluginLaunchTimeMap;
@property (strong, nonatomic) NSDictionary *pluginSeenMap; // @synthesize pluginSeenMap=_pluginSeenMap;
@property (strong, nonatomic) NSDictionary *pluginVersionMap; // @synthesize pluginVersionMap=_pluginVersionMap;
@property (readonly, nonatomic) NSArray *potentiallyVisibleNonFavoritePlugins;
@property (readonly, nonatomic) NSArray *potentiallyVisiblePlugins;
@property (readonly, nonatomic) NSArray *recentAppStripPlugins;
@property (strong, nonatomic) CKPreviewDispatchCache *snapshotCache; // @synthesize snapshotCache=_snapshotCache;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visibleDrawerPlugins;
@property (readonly, nonatomic) NSArray *visibleFavoriteAppStripPlugins;
@property (strong, nonatomic) NSMutableArray *visibleInstallations; // @synthesize visibleInstallations=_visibleInstallations;
@property (strong, nonatomic) NSArray *visiblePlugins; // @synthesize visiblePlugins=_visiblePlugins;
@property (readonly, nonatomic) NSArray *visibleRecentAppStripPlugins;
@property (strong, nonatomic) NSArray *visibleSwitcherPlugins; // @synthesize visibleSwitcherPlugins=_visibleSwitcherPlugins;

+ (id)defaultFavoritePlugins;
+ (id)morePlugin;
+ (id)recentPlugin;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addAppWithBalloonIdentifier:(id)arg1;
- (BOOL)_addPluginToRecentsFrontIfNeeded:(id)arg1 frontOfRecents:(id)arg2 pluginMap:(id)arg3 fallbackMap:(id)arg4;
- (id)_decodeIndexPathMap:(id)arg1;
- (void)_disableAppWithBalloonIdentifier:(id)arg1;
- (id)_encodeIndexPathMap:(id)arg1;
- (void)_invalidatePluginForKey:(id)arg1;
- (id)_pluginIndexPathForFavoritePluginWithIdentifier:(id)arg1 pluginMap:(id)arg2 fallbackMap:(id)arg3;
- (void)_refreshVisibleDrawerPluginsDueToAppInstallationChange;
- (void)_setSeen:(BOOL)arg1 forPlugin:(id)arg2;
- (BOOL)_shouldForceRegenerateIndexPathMap;
- (BOOL)_shouldShowActivity;
- (BOOL)_shouldShowSURF;
- (BOOL)_shouldUninstallContainingBundle:(id)arg1;
- (void)_updateHistoricalPluginIndexPathMap;
- (void)addExtensionConsumer:(id)arg1;
- (id)allPluginsPassingTest:(CDUnknownBlockType)arg1;
- (id)allPotentiallyVisiblePlugins;
- (void)appInstallationWatcher:(id)arg1 addedAppInstallation:(id)arg2;
- (void)appInstallationWatcher:(id)arg1 changedAppInstallation:(id)arg2;
- (unsigned long long)badgeValueForPlugin:(id)arg1;
- (id)balloonPluginIdentifierForAppExtensionBundleIdentifier:(id)arg1;
- (id)browserSnapshotForKey:(id)arg1;
- (id)bundleIdentifiersForCurrentExtensionConsumers;
- (id)candidateAppStripPlugins;
- (void)cleanSeenMap;
- (void)clearBalloonPluginCache;
- (void)commitInteractionTimeOrderingChanges;
- (id)createFakeAppsForPPTTesting:(unsigned long long)arg1;
- (void)dealloc;
- (id)descriptionOfVisibleDrawerPlugins;
- (id)digitalTouchViewControllerWithDataSource:(id)arg1;
- (id)existingPhotoBrowserViewController;
- (id)existingViewControllerForPluginIdentifier:(id)arg1;
- (id)filteredArrayOfInstallationsThatShouldBeVisible:(id)arg1;
- (void)forceKillNonCameraRemoteExtensionsImmediately;
- (void)forceKillRemoteExtensionsWithDelay:(BOOL)arg1;
- (void)forceKillRemoteExtensionsWithDelay:(BOOL)arg1 skipCameraApp:(BOOL)arg2;
- (void)forceTearDownRemoteViewsSkippingCameraApp:(BOOL)arg1;
- (void)handleManagedConfigSettingsChangeNotification:(id)arg1;
- (id)handwritingViewControllerWithPluginPayloads:(id)arg1;
- (struct __CFString *)healthKitAchievementAvailabilityChangedNotification;
- (void)healthStickerStatusChanged;
- (id)init;
- (void)invalidateAllActivePlugins;
- (void)invalidateAllActivePluginsSkippingCameraApp:(BOOL)arg1;
- (void)invalidateAllActiveSwitcherPlugins;
- (void)invalidateAppManagerPlugin;
- (void)invalidateIconCache;
- (void)invalidatePhotosPlugin;
- (BOOL)isEnabledAndVisible:(id)arg1;
- (BOOL)isInternalPlugin:(id)arg1;
- (BOOL)isPluginEnabled:(id)arg1;
- (BOOL)isPluginSeen:(id)arg1;
- (BOOL)isPluginSeenWithInstalledVersion:(id)arg1;
- (BOOL)isPluginVisible:(id)arg1;
- (BOOL)isViewController:(id)arg1 fromPluginWithIdentifier:(id)arg2;
- (long long)lastViewedPluginIndex;
- (unsigned long long)launchStatusForPlugin:(id)arg1;
- (id)launchTimeForPlugin:(id)arg1;
- (id)newViewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;
- (id)orderedPlugins:(BOOL)arg1;
- (id)photosBrowserViewControllerWithPluginPayloads:(id)arg1;
- (id)pluginForAdamID:(id)arg1;
- (id)pluginForIdentifier:(id)arg1;
- (void)prepareForSuspend;
- (void)refreshPlugins;
- (void)regeneratePluginIndexPaths;
- (void)reloadInstalledApps:(id)arg1;
- (void)removeAppWithIdentifier:(id)arg1;
- (void)removeVisibleInstallationWithID:(id)arg1;
- (void)saveWithNotification:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1 forPlugin:(id)arg2;
- (void)setSeen:(BOOL)arg1 forPlugin:(id)arg2;
- (unsigned long long)unseenPluginCount;
- (void)updateAppInstallations;
- (void)updateIndexPath:(id)arg1 forPlugin:(id)arg2 isDrawerPluginPath:(BOOL)arg3;
- (void)updateInteractionTimeForPlugin:(id)arg1;
- (void)updateLaunchStatus:(unsigned long long)arg1 forPlugin:(id)arg2 withNotification:(BOOL)arg3;
- (void)updateLaunchTimeForPlugin:(id)arg1;
- (void)updateSnapshotForBrowserViewController:(id)arg1 currentBounds:(struct CGRect)arg2;
- (id)viewControllerForPluginIdentifier:(id)arg1;
- (id)viewControllerForPluginIdentifier:(id)arg1 dataSource:(id)arg2;

@end
