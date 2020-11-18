//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/NSObject-Protocol.h>

@class GEOComposedRoute, GEOMapServiceTraits, GEORouteMatch, NSString;
@protocol GEORoutePreloadSessionDelegate;

@protocol GEORoutePreloadSession <NSObject>

@property (weak) id<GEORoutePreloadSessionDelegate> delegate;
@property (nonatomic) unsigned long long networkQuality;
@property (readonly, nonatomic) GEOComposedRoute *route;

- (void)beginLoading;
- (BOOL)fullDebuggingEnabled;
- (void)getPreloadSetCoordinates:(CDStruct_c3b9c2ee *)arg1 maxLength:(unsigned long long)arg2 actualLength:(unsigned long long *)arg3;
- (BOOL)isSufficientlyLoaded;
- (BOOL)loggingEnabled;
- (BOOL)minimalDebuggingEnabled;
- (int)preloadStateForTile:(const struct _GEOTileKey *)arg1;
- (void)preloaderLog:(NSString *)arg1;
- (void)setTraits:(GEOMapServiceTraits *)arg1;
- (void)start;
- (void)stop;
- (void)stopLoading;
- (void)updateWithRouteMatch:(GEORouteMatch *)arg1;
@end

