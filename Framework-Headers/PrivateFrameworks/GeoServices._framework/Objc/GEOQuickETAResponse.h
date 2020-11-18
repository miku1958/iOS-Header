//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOLocation, GEOQuickETATransitDeparturesInfo, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface GEOQuickETAResponse : NSObject
{
    GEOLocation *_sourceLocation;
    GEOLocation *_destinationLocation;
    unsigned int _responseETASeconds;
    unsigned int _baselineETASeconds;
    double _distance;
    NSString *_routeDescription;
    GEOQuickETATransitDeparturesInfo *_transitDeparturesInfo;
    double _distanceToDepartureStop;
    double _walkingDurationToDepartureStop;
    NSMutableArray *_sortedETAs;
}

@property (readonly, nonatomic) unsigned int baselineETASeconds; // @synthesize baselineETASeconds=_baselineETASeconds;
@property (readonly, nonatomic) GEOLocation *destinationLocation; // @synthesize destinationLocation=_destinationLocation;
@property (readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property (readonly, nonatomic) double distanceToDepartureStop; // @synthesize distanceToDepartureStop=_distanceToDepartureStop;
@property (readonly, nonatomic) unsigned int responseETASeconds; // @synthesize responseETASeconds=_responseETASeconds;
@property (readonly, nonatomic) NSString *routeDescription; // @synthesize routeDescription=_routeDescription;
@property (readonly, nonatomic) NSMutableArray *sortedETAs; // @synthesize sortedETAs=_sortedETAs;
@property (readonly, nonatomic) GEOLocation *sourceLocation; // @synthesize sourceLocation=_sourceLocation;
@property (readonly, nonatomic) GEOQuickETATransitDeparturesInfo *transitDeparturesInfo; // @synthesize transitDeparturesInfo=_transitDeparturesInfo;
@property (readonly, nonatomic) double walkingDurationToDepartureStop; // @synthesize walkingDurationToDepartureStop=_walkingDurationToDepartureStop;

- (void).cxx_destruct;
- (id)initWithDirectionsResponse:(id)arg1 fromRequest:(id)arg2;
- (id)initWithETAResult:(id)arg1 fromRequest:(id)arg2;

@end

