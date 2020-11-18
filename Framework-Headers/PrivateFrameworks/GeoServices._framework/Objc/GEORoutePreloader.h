//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GeoServices/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <GeoServices/GEORoutePreloadSession-Protocol.h>

@class GEOComposedRoute, NSMutableDictionary, NSString;
@protocol GEORoutePreloadSessionDelegate;

@interface GEORoutePreloader : NSObject <GEOResourceManifestTileGroupObserver, GEORoutePreloadSession>
{
    GEOComposedRoute *_route;
    NSMutableDictionary *_tileSetStyles;
    BOOL _loggingEnabled;
    BOOL _minimalDebuggingEnabled;
    BOOL _fullDebuggingEnabled;
    BOOL _enabled;
    BOOL _paused;
    BOOL _allStationTilesBatchMade;
    double _currentRoutePosition;
    int _downloadState;
    CDUnknownBlockType _batteryHandler;
    unsigned long long _networkQuality;
    id<GEORoutePreloadSessionDelegate> _delegate;
    double _stepSizeInMeters;
}

@property (copy, nonatomic) CDUnknownBlockType batteryHandler; // @synthesize batteryHandler=_batteryHandler;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<GEORoutePreloadSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long networkQuality; // @synthesize networkQuality=_networkQuality;
@property (readonly, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property (readonly) Class superclass;

+ (id)preloaderForRoute:(id)arg1;
- (void)_cancelPreloadTasks;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)addTileSetStyle:(int)arg1 betweenZoom:(unsigned int)arg2 andZoom:(unsigned int)arg3;
- (void)beginLoading;
- (void)dealloc;
- (BOOL)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (id)initSuperWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (BOOL)isSufficientlyLoaded;
- (BOOL)loggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)preloaderLog:(id)arg1;
- (void)reachabilityChanged:(id)arg1;
- (void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1;
- (void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1;
- (void)setTraits:(id)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)tilesChanged;
- (void)updateWithRouteMatch:(id)arg1;

@end

