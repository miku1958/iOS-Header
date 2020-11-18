//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAWeatherLocation;

@interface SAWeatherAirQualityObject : SADomainObject
{
}

@property (nonatomic) long long airQualityIndex;
@property (strong, nonatomic) SAWeatherLocation *airQualityLocation;
@property (copy, nonatomic) NSString *airQualityRatingCategory;
@property (copy, nonatomic) NSString *localizedCategoryName;
@property (copy, nonatomic) NSArray *pollutants;

+ (id)airQualityObject;
+ (id)airQualityObjectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
