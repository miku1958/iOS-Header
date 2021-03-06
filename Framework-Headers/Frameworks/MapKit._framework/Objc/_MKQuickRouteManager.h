//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEOTransitOptions, MKMapItem, NSError, _MKRouteETA, _MKRouteETAFetcher;
@protocol MKQuickRouteConfigurableView, MKQuickRouteManagerDelegate, MKQuickRouteTransportTypeFinding;

@interface _MKQuickRouteManager : NSObject
{
    _MKRouteETAFetcher *_etaFetcher;
    double _maxDistanceToRequestETA;
    _MKRouteETA *_lastETA;
    unsigned long long _lastPreferredDirectionsType;
    NSError *_lastError;
    double _closeWalkTravelTime;
    double _maxWalkingDistance;
    BOOL _viewHasChangedSinceLastUpdate;
    BOOL _fetchAllTransportTypes;
    id<MKQuickRouteManagerDelegate> _delegate;
    id<MKQuickRouteTransportTypeFinding> _transportTypeFinder;
    NSObject<MKQuickRouteConfigurableView> *_view;
    struct CLLocationCoordinate2D _coordinate;
}

@property (copy, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (copy, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (weak, nonatomic) id<MKQuickRouteManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL fetchAllTransportTypes; // @synthesize fetchAllTransportTypes=_fetchAllTransportTypes;
@property (readonly, nonatomic) BOOL isOnlyDriving;
@property (strong, nonatomic) MKMapItem *mapItem;
@property (strong, nonatomic) MKMapItem *originMapItem;
@property (copy, nonatomic) GEOTransitOptions *transitOptions;
@property (weak, nonatomic) id<MKQuickRouteTransportTypeFinding> transportTypeFinder; // @synthesize transportTypeFinder=_transportTypeFinder;
@property (readonly, nonatomic, getter=isUsingCurrentLocationForOrigin) BOOL usingCurrentLocationForOrigin;
@property (weak, nonatomic) NSObject<MKQuickRouteConfigurableView> *view; // @synthesize view=_view;

+ (double)_maxDistanceToRequestETA;
+ (unsigned long long)counterpartForTransportType:(unsigned long long)arg1;
+ (unsigned long long)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned long long)arg3;
+ (BOOL)isLikelyToReturnETAForLocation:(id)arg1;
- (void).cxx_destruct;
- (void)_performWithTransportType:(CDUnknownBlockType)arg1;
- (void)_resetState;
- (BOOL)_transportTypeShouldBeSmart;
- (id)bestETAForPreferredDirectionsType:(unsigned long long)arg1;
- (id)description;
- (struct CLLocationCoordinate2D)destinationCoordinate;
- (unsigned long long)directionsTypeForMapType:(unsigned long long)arg1;
- (unsigned long long)directionsTypeForOriginCoordinate:(struct CLLocationCoordinate2D)arg1 destinationCoordinate:(struct CLLocationCoordinate2D)arg2 preferredDirectionsType:(unsigned long long)arg3;
- (unsigned long long)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned long long)arg2;
- (BOOL)haveETAsForPreferredTransportType:(unsigned long long)arg1;
- (id)init;
- (struct CLLocationCoordinate2D)originCoordinate;
- (void)requestNewETAForPreferredTransportType:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (id)routeETAForTransportType:(unsigned long long)arg1;
- (void)updateETA;

@end

