//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class VKFeatureAccessibilityElement, VKPointFeatureAccessibilityElement;

@interface VKMapViewTourStatus : NSObject
{
    BOOL _isStationary;
    VKFeatureAccessibilityElement *_currentLocation;
    VKFeatureAccessibilityElement *_lastCurrentLocation;
    VKFeatureAccessibilityElement *_futureLocation;
    VKFeatureAccessibilityElement *_lastFutureLocation;
    VKPointFeatureAccessibilityElement *_futurePOI;
    VKPointFeatureAccessibilityElement *_lastFuturePOI;
    double _lastFutureDistance;
    double _lastPOIDistance;
    unsigned long long _futurePOISide;
    unsigned long long _lastFuturePOISide;
    struct CGPoint _currentPoint;
    struct CGPoint _futurePoint;
}

@property (strong, nonatomic) VKFeatureAccessibilityElement *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (nonatomic) struct CGPoint currentPoint; // @synthesize currentPoint=_currentPoint;
@property (strong, nonatomic) VKFeatureAccessibilityElement *futureLocation; // @synthesize futureLocation=_futureLocation;
@property (strong, nonatomic) VKPointFeatureAccessibilityElement *futurePOI; // @synthesize futurePOI=_futurePOI;
@property (nonatomic) unsigned long long futurePOISide; // @synthesize futurePOISide=_futurePOISide;
@property (nonatomic) struct CGPoint futurePoint; // @synthesize futurePoint=_futurePoint;
@property (nonatomic) BOOL isStationary; // @synthesize isStationary=_isStationary;
@property (strong, nonatomic) VKFeatureAccessibilityElement *lastCurrentLocation; // @synthesize lastCurrentLocation=_lastCurrentLocation;
@property (nonatomic) double lastFutureDistance; // @synthesize lastFutureDistance=_lastFutureDistance;
@property (strong, nonatomic) VKFeatureAccessibilityElement *lastFutureLocation; // @synthesize lastFutureLocation=_lastFutureLocation;
@property (strong, nonatomic) VKPointFeatureAccessibilityElement *lastFuturePOI; // @synthesize lastFuturePOI=_lastFuturePOI;
@property (nonatomic) unsigned long long lastFuturePOISide; // @synthesize lastFuturePOISide=_lastFuturePOISide;
@property (nonatomic) double lastPOIDistance; // @synthesize lastPOIDistance=_lastPOIDistance;

- (void).cxx_destruct;
- (id)_stringForSide:(unsigned long long)arg1;
- (id)_tourStatusAnnouncementWithLength:(unsigned long long)arg1;
- (id)longTourStatusAnnouncement;
- (id)shortTourStatusAnnouncement;
- (void)updateTourStatusWithCurrentLocation:(id)arg1 currentPoint:(struct CGPoint)arg2 futureLocation:(id)arg3 futurePoint:(struct CGPoint)arg4 tourPOI:(id)arg5 tourPOISide:(unsigned long long)arg6 isStationary:(BOOL)arg7;

@end
