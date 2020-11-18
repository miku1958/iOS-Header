//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestServerProxyDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOLocalizationRegionsInfo, GEOResourceManifestConfiguration, NSDictionary, NSHashTable, NSLock, NSMutableArray, NSSet, NSString;
@protocol GEOResourceManifestServerProxy, OS_dispatch_source;

@interface GEOResourceManifestManager : NSObject <GEOResourceManifestServerProxyDelegate>
{
    id<GEOResourceManifestServerProxy> _serverProxy;
    NSHashTable *_serverProxyObservers;
    GEOActiveTileGroup *_activeTileGroup;
    NSLock *_activeTileGroupLock;
    NSDictionary *_resourceNamesToPaths;
    NSSet *_allResourceNames;
    NSSet *_allRegionalResourceNames;
    BOOL _needsToLoadTileGroupFromDisk;
    NSMutableArray *_tileGroupObservers;
    NSLock *_tileGroupObserversLock;
    NSLock *_closedCountLock;
    long long _closedCount;
    BOOL _constantlyChangeTileGroup;
    GEOLocalizationRegionsInfo *_localizationRegionsInfo;
    NSMutableArray *_networkActivityHandlers;
    BOOL _isUpdatingManifest;
    BOOL _isLoadingResources;
    NSLock *_resourceNamesToPathsLock;
    GEOResourceManifestConfiguration *_configuration;
    NSObject<OS_dispatch_source> *_cachedResourceInfoPurgeTimer;
    unsigned long long _handle;
}

@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasActiveTileGroup;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<GEOResourceManifestServerProxy> serverProxy; // @synthesize serverProxy=_serverProxy;
@property (readonly) Class superclass;

+ (id)additionalMigrationTaskClasses;
+ (void)disableServerConnection;
+ (id)modernManager;
+ (id)modernManagerForConfiguration:(id)arg1;
+ (id)modernManagerForTileGroupIdentifier:(unsigned int)arg1;
+ (void)setAdditionalMigrationTaskClasses:(id)arg1;
+ (void)setHiDPI:(BOOL)arg1;
+ (void)setServerProxyClass:(Class)arg1;
+ (id)sharedManager;
+ (struct os_state_data_s *)stateDataForDictionary:(id)arg1 title:(id)arg2;
+ (void)useLocalProxy;
+ (void)useRemoteProxy;
- (void).cxx_destruct;
- (id)_activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (void)_buildResourceNamesToPaths;
- (id)_detailedDescriptionDictionaryRepresentationForTileGroup:(id)arg1;
- (id)_loadActiveTileGroupIfNecessary:(BOOL)arg1;
- (void)_localeChanged:(id)arg1;
- (void)_notifyObserversOfResourcesChange;
- (void)_registerHandlerForStateCapture;
- (void)_scheduleCachedResourceInfoPurgeTimer;
- (struct os_state_data_s *)_stateCapture;
- (void)_unregisterHandlerForStateCapture;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (unsigned int)activeTileGroupIdentifier;
- (void)addNetworkActivityHandler:(CDUnknownBlockType)arg1;
- (void)addServerProxyObserver:(id)arg1;
- (void)addTileGroupObserver:(id)arg1 queue:(id)arg2;
- (id)allRegionalResourceNames;
- (id)allResourceNames;
- (id)allResourcePaths;
- (id)authToken;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (void)cancelCurrentManifestUpdate;
- (void)closeServerConnection;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (id)detailedDescriptionDictionaryRepresentation;
- (void)devResourcesFolderDidChange;
- (id)disputedBordersQueryItemsForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (void)fakeTileGroupChange;
- (void)forceUpdate;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (BOOL)hasResourceManifest;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (BOOL)isDisputedBordersWhitelistedForTileKey:(const struct _GEOTileKey *)arg1 country:(id)arg2 region:(id)arg3;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (id)localizationURLStringIfNecessaryForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (int)mapMatchingTileSetStyle;
- (unsigned int)mapMatchingZoomLevel;
- (void)openServerConnection;
- (id)pathForResourceWithName:(id)arg1;
- (void)removeDevResources;
- (void)removeServerProxyObserver:(id)arg1;
- (void)removeTileGroupObserver:(id)arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;
- (void)resetActiveTileGroup;
- (oneway void)serverProxy:(id)arg1 didChangeActiveTileGroup:(id)arg2 finishedCallback:(CDUnknownBlockType)arg3;
- (oneway void)serverProxyDidStopLoadingResources:(id)arg1;
- (oneway void)serverProxyDidStopUpdatingResourceManifest:(id)arg1;
- (void)serverProxyNeedsWiFiResourceActivity:(id)arg1;
- (oneway void)serverProxyWillStartLoadingResources:(id)arg1;
- (oneway void)serverProxyWillStartUpdatingResourceManifest:(id)arg1;
- (void)setActiveTileGroupIdentifier:(unsigned int)arg1;
- (void)setConstantlyChangeTileGroup:(BOOL)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startObservingDevResources;
- (void)stopObservingDevResources;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (void)updateManifest:(CDUnknownBlockType)arg1;
- (void)updateManifest:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (id)updateProgress;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;

@end
