//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSString, SAWeatherCurrentConditions, SAWeatherLocation, SAWeatherUnits;

@interface SAWeatherAbstractObject : SADomainObject
{
}

@property (strong, nonatomic) SAWeatherCurrentConditions *currentConditions;
@property (copy, nonatomic) NSArray *dailyForecasts;
@property (copy, nonatomic) NSString *extendedForecastUrl;
@property (copy, nonatomic) NSArray *hourlyForecasts;
@property (strong, nonatomic) SAWeatherUnits *units;
@property (strong, nonatomic) SAWeatherLocation *weatherLocation;
@property (copy, nonatomic) NSString *weatherRequest;

+ (id)abstractObject;
+ (id)abstractObjectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
