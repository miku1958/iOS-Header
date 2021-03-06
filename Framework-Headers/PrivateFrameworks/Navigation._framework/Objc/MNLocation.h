//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreLocation/CLLocation.h>

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEONavigationMatchInfo, GEORoadMatch, GEORouteMatch, NSDate, NSString, NSUUID;

@interface MNLocation : CLLocation <NSSecureCoding>
{
    unsigned long long _state;
    NSUUID *_routeID;
    GEORouteMatch *_routeMatch;
    GEORoadMatch *_roadMatch;
    CLLocation *_rawLocation;
    struct CLLocationCoordinate2D _rawShiftedCoordinate;
    GEONavigationMatchInfo *_detailedMatchInfo;
    NSString *_roadName;
    NSString *_shieldText;
    long long _shieldType;
    unsigned int _roadLineType;
    int _rampType;
    unsigned long long _speedLimit;
    BOOL _speedLimitIsMPH;
    long long _speedLimitShieldType;
    BOOL _isDirectional;
    BOOL _locationUnreliable;
    NSDate *_expirationDate;
    NSDate *_originalDate;
    unsigned long long _traceIndex;
    BOOL _isLeeched;
}

@property (readonly, nonatomic) int _nav_source;
@property (strong, nonatomic) GEONavigationMatchInfo *detailedMatchInfo; // @synthesize detailedMatchInfo=_detailedMatchInfo;
@property (strong, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (nonatomic) BOOL isDirectional; // @synthesize isDirectional=_isDirectional;
@property (nonatomic) BOOL isLeeched; // @synthesize isLeeched=_isLeeched;
@property (readonly, nonatomic) BOOL isProjected;
@property (nonatomic) BOOL locationUnreliable; // @synthesize locationUnreliable=_locationUnreliable;
@property (strong, nonatomic) NSDate *originalDate; // @synthesize originalDate=_originalDate;
@property (nonatomic) int rampType; // @synthesize rampType=_rampType;
@property (strong, nonatomic) CLLocation *rawLocation; // @synthesize rawLocation=_rawLocation;
@property (nonatomic) struct CLLocationCoordinate2D rawShiftedCoordinate; // @synthesize rawShiftedCoordinate=_rawShiftedCoordinate;
@property (nonatomic) unsigned int roadLineType; // @synthesize roadLineType=_roadLineType;
@property (strong, nonatomic) GEORoadMatch *roadMatch; // @synthesize roadMatch=_roadMatch;
@property (copy, nonatomic) NSString *roadName; // @synthesize roadName=_roadName;
@property (readonly, nonatomic) NSUUID *routeID; // @synthesize routeID=_routeID;
@property (strong, nonatomic) GEORouteMatch *routeMatch; // @synthesize routeMatch=_routeMatch;
@property (copy, nonatomic) NSString *shieldText; // @synthesize shieldText=_shieldText;
@property (nonatomic) long long shieldType; // @synthesize shieldType=_shieldType;
@property (nonatomic) unsigned long long speedLimit; // @synthesize speedLimit=_speedLimit;
@property (nonatomic) BOOL speedLimitIsMPH; // @synthesize speedLimitIsMPH=_speedLimitIsMPH;
@property (nonatomic) long long speedLimitShieldType; // @synthesize speedLimitShieldType=_speedLimitShieldType;
@property (nonatomic) unsigned long long state; // @synthesize state=_state;
@property (readonly, nonatomic) unsigned long long stepIndex;
@property (nonatomic) unsigned long long traceIndex;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_navigation_detailedMatchInfo;
- (BOOL)_navigation_hasValidCourse;
- (BOOL)_navigation_isStale;
- (struct CLLocationCoordinate2D)_navigation_rawShiftedCoordinate;
- (id)_navigation_routeMatch;
- (id)_referenceFrameAsString:(int)arg1;
- (CDStruct_66740237 *)_roadFeature;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClientLocation:(CDStruct_a4140ae0)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGEOLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1;
- (id)initWithRawLocation:(id)arg1 locationMatchType:(unsigned long long)arg2;
- (id)initWithRoadMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (id)initWithRouteMatch:(id)arg1 rawLocation:(id)arg2 locationMatchType:(unsigned long long)arg3;
- (BOOL)isEqualToLocation:(id)arg1;
- (id)matchInfo;
- (id)propagatedLocationForTimeInterval:(double)arg1 shouldProjectAlongRoute:(BOOL)arg2;

@end

