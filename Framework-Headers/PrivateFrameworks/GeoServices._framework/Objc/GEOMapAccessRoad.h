//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOMapAccessLine.h>

#import <GeoServices/GEOMapRoad-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GEOMapAccessRoad : GEOMapAccessLine <GEOMapRoad>
{
    shared_ptr_92bc9970 _roadEdge;
    unsigned long long _roadID;
}

@property (readonly, nonatomic) unsigned long long coordinateCount;
@property (readonly, nonatomic) CDStruct_c3b9c2ee *coordinates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) int formOfWay;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *internalRoadName;
@property (readonly, nonatomic) BOOL isBridge;
@property (readonly, nonatomic) BOOL isRail;
@property (readonly, nonatomic) BOOL isTunnel;
@property (readonly, nonatomic) double length;
@property (readonly, nonatomic) int rampType;
@property (readonly, nonatomic) int roadClass;
@property (readonly, nonatomic) unsigned long long roadID;
@property (readonly, nonatomic) double roadWidth;
@property (readonly, nonatomic) unsigned long long speedLimit;
@property (readonly, nonatomic) BOOL speedLimitIsMPH;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int travelDirection;

+ (double)estimatedWidthForRoad:(CDStruct_4da79865 *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)findRoadsFrom:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsFromPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsToNextIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)findRoadsToPreviousIntersection:(CDUnknownBlockType)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithMap:(id)arg1 roadEdge:(shared_ptr_92bc9970)arg2;
- (void)roadEdgesWithHandler:(CDUnknownBlockType)arg1;
- (void)roadFeaturesWithHandler:(CDUnknownBlockType)arg1;
- (id)tileKeys;

@end

