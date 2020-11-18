//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOTileKeyList, NSMutableArray, NSMutableSet;
@protocol GEOMapServiceTicket;

__attribute__((visibility("hidden")))
@interface _GEOTransitPreloadBatch : NSObject
{
    GEOTileKeyList *_tilesToLoad;
    NSMutableSet *_placeDatasToLoad;
    unsigned long long status;
    unsigned long long generation;
    unsigned long long errCount;
    unsigned long long bytesLoaded;
    unsigned long long bytesLoadedFromNetwork;
    double startTime;
    double endTime;
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D>> coords;
    NSMutableArray *_latLngToLoad;
    unsigned int priority;
    id<GEOMapServiceTicket> placeDataRequestTicketForBatch;
    double endTimeForScheduleFreshness;
}

@property (strong, nonatomic) NSMutableSet *placeDatasToLoad; // @synthesize placeDatasToLoad=_placeDatasToLoad;
@property (strong, nonatomic) GEOTileKeyList *tilesToLoad; // @synthesize tilesToLoad=_tilesToLoad;

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)dataRateKB;
- (id)init;
- (double)networkDataRateKB;

@end

