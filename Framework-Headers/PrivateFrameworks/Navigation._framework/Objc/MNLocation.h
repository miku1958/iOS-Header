//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLLocation.h>

@class GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch, NSDate, NSString;

@interface MNLocation : CLLocation
{
    unsigned long long _state;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    CLLocation *_rawLocation;
    struct CLLocationCoordinate2D _rawShiftedCoordinate;
    GEONavigationMatchInfo *_detailedMatchInfo;
    NSString *_roadName;
    NSString *_shieldText;
    long long _shieldType;
    unsigned int _roadLineType;
    unsigned long long _speedLimit;
    BOOL _speedLimitIsMPH;
    BOOL _isDirectional;
    BOOL _locationUnreliable;
    NSDate *_expirationDate;
    NSDate *_originalDate;
    int _rampType;
}

@property (readonly, nonatomic) int _nav_source;
@property (strong, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic) BOOL isDirectional; // @synthesize isDirectional=_isDirectional;
@property (readonly, nonatomic) BOOL isProjected;
@property (nonatomic) BOOL locationUnreliable; // @synthesize locationUnreliable=_locationUnreliable;
@property (strong, nonatomic) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property (nonatomic) int rampType; // @synthesize rampType=_rampType;
@property (strong, nonatomic) CLLocation *rawLocation; // @synthesize rawLocation=_rawLocation;
@property (nonatomic) struct CLLocationCoordinate2D rawShiftedCoordinate; // @synthesize rawShiftedCoordinate=_rawShiftedCoordinate;
@property (nonatomic) unsigned int roadLineType; // @synthesize roadLineType=_roadLineType;
@property (strong, nonatomic) GEORoadMatch *roadMatch; // @synthesize roadMatch=_roadMatch;
@property (strong, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property (strong, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property (strong, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property (nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property (nonatomic) unsigned long long speedLimit; // @synthesize speedLimit=_speedLimit;
@property (nonatomic) BOOL speedLimitIsMPH; // @synthesize speedLimitIsMPH=_speedLimitIsMPH;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) unsigned long long stepIndex;

- (void).cxx_destruct;
- (id)_navigation_detailedMatchInfo;
- (BOOL)_navigation_hasValidCourse;
- (BOOL)_navigation_isStale;
- (struct CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (CDStruct_6ac9d495 *)_roadFeature;
- (id)description;
- (id)initWithClientLocation:(CDStruct_99cd443b)arg1;
- (id)initWithLocationDetails:(id)arg1;
- (id)initWithLocationDetails:(id)arg1 route:(id)arg2;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 useMatchLocation:(BOOL)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 useMatchLocation:(BOOL)arg3;
- (id)matchInfo;
- (id)propagatedLocationForTimeInterval:(double)arg1;

@end

