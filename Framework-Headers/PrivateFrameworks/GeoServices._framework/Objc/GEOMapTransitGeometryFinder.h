//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapRequest.h>

@class GEOMapTileFinder;

__attribute__((visibility("hidden")))
@interface GEOMapTransitGeometryFinder : GEOMapRequest
{
    GEOMapTileFinder *_tileFinder;
    unsigned long long _transitID;
}

- (void)cancel;
- (void)dealloc;
- (void)findTransitGeometryWithHandler:(CDUnknownBlockType)arg1;
- (id)initWithMap:(id)arg1 transitID:(unsigned long long)arg2 coordinate:(CDStruct_c3b9c2ee)arg3;

@end

