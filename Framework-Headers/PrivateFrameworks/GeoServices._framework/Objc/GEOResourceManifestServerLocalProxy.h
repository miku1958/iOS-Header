//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceFiltersManagerDelegate-Protocol.h>
#import <GeoServices/GEOResourceManifestServerProxy-Protocol.h>
#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOActiveTileGroup, GEOResourceFiltersManager, GEOResourceLoader, GEOResourceManifestConfiguration, GEOResourceManifestDownload, NSError, NSLock, NSMutableArray, NSMutableData, NSString, NSTimer, NSURLSession, NSURLSessionTask, NSURLSessionTaskMetrics;
@protocol GEOResourceManifestServerProxyDelegate;

__attribute__((visibility("hidden")))
@interface GEOResourceManifestServerLocalProxy : NSObject <NSURLSessionDataDelegate, GEOResourceFiltersManagerDelegate, GEOResourceManifestServerProxy>
{
    id<GEOResourceManifestServerProxyDelegate> _delegate;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    NSMutableData *_responseData;
    NSString *_responseETag;
    int _httpResponseStatusCode;
    GEOResourceManifestConfiguration *_configuration;
    BOOL _wantsManifestUpdateOnReachabilityChange;
    NSTimer *_manifestUpdateTimer;
    BOOL _wantsTileGroupUpdateOnReachabilityChange;
    NSTimer *_tileGroupUpdateTimer;
    GEOResourceManifestDownload *_resourceManifest;
    GEOActiveTileGroup *_activeTileGroup;
    GEOResourceLoader *_resourceLoader;
    NSString *_loadingTileGroupUniqueIdentifier;
    BOOL _started;
    unsigned long long _manifestRetryCount;
    double _lastManifestRetryTimestamp;
    unsigned long long _tileGroupRetryCount;
    double _lastTileGroupRetryTimestamp;
    NSString *_authToken;
    NSLock *_authTokenLock;
    NSError *_lastResourceManifestLoadError;
    NSMutableArray *_manifestUpdateCompletionHandlers;
    double _lastManifestRequestStartTime;
    GEOResourceFiltersManager *_filtersManager;
    NSURLSessionTaskMetrics *_taskMetrics;
}

@property (readonly, nonatomic) GEOActiveTileGroup *activeTileGroup;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<GEOResourceManifestServerProxyDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_activeTileGroupOverridesChanged:(id)arg1;
- (void)_cancelSession;
- (void)_changeActiveTileGroup:(id)arg1 activeScales:(id)arg2 activeScenarios:(id)arg3 loadedResources:(id)arg4 unloadedConditionalResources:(id)arg5 flushTileCache:(BOOL)arg6 completionHandler:(CDUnknownBlockType)arg7;
- (void)_cleanupSession;
- (void)_considerChangingActiveTileGroup;
- (void)_countryProvidersDidChange:(id)arg1;
- (void)_forceChangeActiveTileGroup:(id)arg1 flushTileCache:(BOOL)arg2 ignoreIdentifier:(BOOL)arg3;
- (BOOL)_hasAllowableFallbackResourceForResource:(id)arg1;
- (id)_idealTileGroupToUse;
- (void)_loadFromDisk;
- (void)_loadImmediateResources:(id)arg1 conditionalWifiResources:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_manifestURL;
- (void)_networkDefaultsDidChange:(id)arg1;
- (void)_notifyManifestUpdateCompletionHandlers:(id)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (id)_resourcesForTileGroup:(id)arg1 fromResourceManifest:(id)arg2 regional:(BOOL)arg3 includeAttribution:(BOOL)arg4 scales:(id)arg5 scenarios:(id)arg6;
- (void)_scheduleTileGroupUpdateTimerWithTimeInterval:(double)arg1;
- (void)_scheduleUpdateTimerWithTimeInterval:(double)arg1;
- (void)_startServer;
- (void)_tileGroupTimerFired:(id)arg1;
- (void)_updateManifest;
- (void)_updateManifest:(CDUnknownBlockType)arg1;
- (BOOL)_updateManifestIfNecessary:(CDUnknownBlockType)arg1;
- (void)_updateTimerFired:(id)arg1;
- (BOOL)_writeActiveTileGroupToDisk:(id)arg1 error:(id *)arg2;
- (BOOL)_writeManifestToDisk:(id)arg1 error:(id *)arg2;
- (void)activateResourceScale:(int)arg1;
- (void)activateResourceScenario:(int)arg1;
- (id)authToken;
- (void)closeConnection;
- (id)configuration;
- (void)deactivateResourceScale:(int)arg1;
- (void)deactivateResourceScenario:(int)arg1;
- (void)dealloc;
- (void)filtersManagerDidChangeActiveFilters:(id)arg1;
- (void)forceUpdate:(CDUnknownBlockType)arg1;
- (void)getResourceManifestWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithDelegate:(id)arg1 configuration:(id)arg2;
- (void)openConnection;
- (void)performOpportunisticResourceLoading;
- (oneway void)resetActiveTileGroup;
- (id)serverOperationQueue;
- (id)serverQueue;
- (oneway void)setActiveTileGroupIdentifier:(id)arg1;
- (void)setManifestToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)updateIfNecessary:(CDUnknownBlockType)arg1;

@end

