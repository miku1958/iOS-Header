//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEvent.h>

@class NSArray, NSNumber, NSString;

@interface RTEventUserActivityLocation : RTEvent
{
    NSString *_locationName;
    NSString *_subThoroughfare;
    NSString *_thoroughfare;
    NSString *_postalCode;
    NSString *_city;
    NSString *_stateOrProvince;
    NSString *_country;
    NSNumber *_latitude;
    NSNumber *_longitude;
    NSArray *_phoneNumbers;
    NSString *_displayName;
    NSString *_bundleIdentifier;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, copy, nonatomic) NSString *city; // @synthesize city=_city;
@property (readonly, copy, nonatomic) NSString *country; // @synthesize country=_country;
@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (readonly, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property (readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
@property (readonly, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property (readonly, copy, nonatomic) NSArray *phoneNumbers; // @synthesize phoneNumbers=_phoneNumbers;
@property (readonly, copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property (readonly, copy, nonatomic) NSString *stateOrProvince; // @synthesize stateOrProvince=_stateOrProvince;
@property (readonly, copy, nonatomic) NSString *subThoroughfare; // @synthesize subThoroughfare=_subThoroughfare;
@property (readonly, copy, nonatomic) NSString *thoroughfare; // @synthesize thoroughfare=_thoroughfare;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocationName:(id)arg1 subThroughfare:(id)arg2 throughfare:(id)arg3 postalCode:(id)arg4 city:(id)arg5 stateOrProvince:(id)arg6 country:(id)arg7 latitude:(id)arg8 longitude:(id)arg9 phoneNumbers:(id)arg10 displayName:(id)arg11 bundleIdentifier:(id)arg12 startDate:(id)arg13 endDate:(id)arg14 source:(long long)arg15;

@end
