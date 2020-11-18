//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEORoutePreloader.h>

@class GEOMapServiceTraits, GEOTransitDecoderData, GEOTransitSuggestedRoute, NSTimer, _GEOTransitRoutePreloaderData;

@interface GEOTransitRoutePreloader : GEORoutePreloader
{
    GEOTransitDecoderData *_decoderData;
    GEOTransitSuggestedRoute *_suggestedRoute;
    _GEOTransitRoutePreloaderData *_reserved;
    GEOMapServiceTraits *_traits;
    double _endRoutePosition;
    long long _indexOfLastStepWithPreparedBatch;
    NSTimer *_geodCrashTimer;
    double _radialDistanceToImplicateTilesMeters;
}

- (void)_cancelAllBatches;
- (void)_cancelPreloadTasks;
- (void)_geodCrashed:(id)arg1;
- (void)_ignoreAlreadyRequestedTilesAndUpdateGlobalListWithNonDuplicatesForTileKeyList:(id)arg1;
- (void)_loadPlacecardsForBatch:(id)arg1;
- (void)_loadTilesForBatch:(id)arg1;
- (void)_makeBatchForTilesAroundStationsForSteps:(id)arg1;
- (void)_makeBatchesForSteps:(id)arg1;
- (void)_makePreloadBatchForGraph;
- (void)_makePreloadBatchForPlaceDataOnSteps:(id)arg1;
- (void)_makePreloadBatchForSteps:(id)arg1;
- (void)_makePreloadBatchForTilesOnRouteWithSteps:(id)arg1 andPriority:(unsigned int)arg2;
- (void)_performNextRequests;
- (struct PolylineCoordinate)_polylineCoordinateForDouble:(double)arg1;
- (void)_processBatches;
- (void)_processedFinishedBatch:(id)arg1 withPartialStatus:(unsigned long long)arg2;
- (void)_resetErrorCounts;
- (void)_retryFailuresWithErrorsReset:(BOOL)arg1;
- (void)beginLoading;
- (void)dealloc;
- (BOOL)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (id)initWithRoute:(id)arg1 loggingEnabled:(BOOL)arg2 minimalDebugging:(BOOL)arg3 fullDebugging:(BOOL)arg4 batteryHandler:(CDUnknownBlockType)arg5;
- (BOOL)isSufficientlyLoaded;
- (BOOL)loggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)preloaderLog:(id)arg1;
- (id)route;
- (void)setTraits:(id)arg1;
- (void)stopLoading;
- (void)updateWithRouteMatch:(id)arg1;

@end

