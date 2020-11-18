//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSString;

@interface SAClockObject : SADomainObject
{
    NSNumber *_latitude;
    NSNumber *_longitude;
}

@property (copy, nonatomic) NSNumber *alCityId;
@property (copy, nonatomic) NSString *cityName;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSString *countryName;
@property (copy, nonatomic) NSNumber *latitude; // @synthesize latitude=_latitude;
@property (copy, nonatomic) NSNumber *longitude; // @synthesize longitude=_longitude;
@property (copy, nonatomic) NSString *timezoneId;
@property (copy, nonatomic) NSString *unlocalizedCityName;
@property (copy, nonatomic) NSString *unlocalizedCountryName;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
