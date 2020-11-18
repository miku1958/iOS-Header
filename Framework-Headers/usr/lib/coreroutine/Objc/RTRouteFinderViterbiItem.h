//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOMapFeatureRoad, NSArray, NSString;

@interface RTRouteFinderViterbiItem : NSObject
{
    GEOMapFeatureRoad *_road;
    NSString *_uniqueRoadID;
    double _cost;
    RTRouteFinderViterbiItem *_bestPrevItem;
    NSArray *_routeFromBestPreviousItem;
}

@property (strong, nonatomic) RTRouteFinderViterbiItem *bestPrevItem; // @synthesize bestPrevItem=_bestPrevItem;
@property (nonatomic) double cost; // @synthesize cost=_cost;
@property (strong, nonatomic) GEOMapFeatureRoad *road; // @synthesize road=_road;
@property (copy, nonatomic) NSArray *routeFromBestPreviousItem; // @synthesize routeFromBestPreviousItem=_routeFromBestPreviousItem;
@property (strong, nonatomic) NSString *uniqueRoadID; // @synthesize uniqueRoadID=_uniqueRoadID;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithRoad:(id)arg1;

@end

