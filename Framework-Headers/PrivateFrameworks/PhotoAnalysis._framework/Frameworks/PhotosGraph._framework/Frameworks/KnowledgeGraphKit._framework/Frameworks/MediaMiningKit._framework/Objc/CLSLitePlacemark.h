//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSSecureCoding-Protocol.h>

@class CLCircularRegion, CLLocation, NSArray, NSString;

@interface CLSLitePlacemark : NSObject <NSSecureCoding>
{
    BOOL _isIsland;
    CLCircularRegion *_region;
    CLLocation *_location;
    NSString *_thoroughfare;
    NSString *_subThoroughfare;
    NSString *_locality;
    NSString *_subLocality;
    NSString *_administrativeArea;
    NSString *_subAdministrativeArea;
    NSString *_ISOcountryCode;
    NSString *_inlandWater;
    NSString *_ocean;
    NSArray *_areasOfInterest;
    NSString *_administrativeAreaCode;
    NSString *_providerID;
}

@property (strong, nonatomic) NSString *ISOcountryCode; // @synthesize ISOcountryCode=_ISOcountryCode;
@property (strong, nonatomic) NSString *administrativeArea; // @synthesize administrativeArea=_administrativeArea;
@property (strong, nonatomic) NSString *administrativeAreaCode; // @synthesize administrativeAreaCode=_administrativeAreaCode;
@property (strong, nonatomic) NSArray *areasOfInterest; // @synthesize areasOfInterest=_areasOfInterest;
@property (strong, nonatomic) NSString *inlandWater; // @synthesize inlandWater=_inlandWater;
@property (nonatomic) BOOL isIsland; // @synthesize isIsland=_isIsland;
@property (readonly, nonatomic) BOOL isOcean;
@property (strong, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) NSString *ocean; // @synthesize ocean=_ocean;
@property (strong, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property (strong, nonatomic) CLCircularRegion *region; // @synthesize region=_region;
@property (strong, nonatomic) NSString *subAdministrativeArea; // @synthesize subAdministrativeArea=_subAdministrativeArea;
@property (strong, nonatomic) NSString *subLocality; // @synthesize subLocality=_subLocality;
@property (strong, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property (strong, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;

+ (BOOL)_isIslandForGeoMapItem:(id)arg1;
+ (id)litePlacemarkFromCLPlacemark:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_extractValuesFromGeoMapItem:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCLPlacemark:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRTMapItem:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

