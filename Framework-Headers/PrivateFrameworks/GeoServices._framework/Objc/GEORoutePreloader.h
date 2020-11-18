//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadSession-Protocol.h>

@class GEOApplicationAuditToken, GEOComposedRoute, NSMutableDictionary, NSString;
@protocol GEORoutePreloadSessionDelegate, OS_os_log;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession>
{
    GEOComposedRoute *_route;
    NSMutableDictionary *_tileSetStyles;
    BOOL _loggingEnabled;
    BOOL _minimalDebuggingEnabled;
    BOOL _fullDebuggingEnabled;
    BOOL _enabled;
    BOOL _paused;
    double _currentRoutePosition;
    int _downloadState;
    CDUnknownBlockType _batteryHandler;
    unsigned long long _networkQuality;
    id<GEORoutePreloadSessionDelegate> _delegate;
    CDUnknownBlockType _tileKeyIsDownloadedPredicate;
    double _stepSizeInMeters;
    GEOApplicationAuditToken *_token;
    struct GEOOnce_s _didTearDown;
}

@property (copy, nonatomic) CDUnknownBlockType batteryHandler; // @synthesize batteryHandler=_batteryHandler;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<GEORoutePreloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long networkQuality; // @synthesize networkQuality=_networkQuality;
@property (readonly, nonatomic) NSObject<OS_os_log> *preloaderLog;
@property (readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) CDUnknownBlockType tileKeyIsDownloadedPredicate; // @synthesize tileKeyIsDownloadedPredicate=_tileKeyIsDownloadedPredicate;

+ (id)preloaderForRoute:(id)arg1;
- (void).cxx_destruct;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)_start;
- (void)_withDownloadedRegionsOnQueue:(id)arg1 perform:(CDUnknownBlockType)arg2;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)beginLoading;
- (void)dealloc;
- (BOOL)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (id)init;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (BOOL)isSufficientlyLoaded;
- (BOOL)loggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (void)performTearDown;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)tearDown;
- (void)tilesChanged;
- (void)updateWithRouteMatch:(id)arg1;

@end

