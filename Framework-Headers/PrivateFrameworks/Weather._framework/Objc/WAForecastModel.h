//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/NSCopying-Protocol.h>

@class City, NSArray, NSDate, NSURL, WACurrentForecast, WFAirQualityConditions, WFLocation, WFWeatherConditions;

@interface WAForecastModel : NSObject <NSCopying>
{
    City *_city;
    WFLocation *_location;
    WACurrentForecast *_currentConditions;
    WFAirQualityConditions *_airQualityConditions;
    NSArray *_hourlyForecasts;
    NSArray *_dailyForecasts;
    NSDate *_sunrise;
    NSDate *_sunset;
    NSURL *_deepLink;
    NSURL *_link;
    WFWeatherConditions *_underlyingCurrentConditions;
    NSArray *_underlyingHourlyConditions;
    NSArray *_underlyingDailyConditions;
}

@property (strong, nonatomic) WFAirQualityConditions *airQualityConditions; // @synthesize airQualityConditions=_airQualityConditions;
@property (strong, nonatomic) City *city; // @synthesize city=_city;
@property (strong, nonatomic) WACurrentForecast *currentConditions; // @synthesize currentConditions=_currentConditions;
@property (copy, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
@property (strong, nonatomic) NSURL *deepLink; // @synthesize deepLink=_deepLink;
@property (copy, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property (readonly, nonatomic) BOOL isPopulated;
@property (strong, nonatomic) NSURL *link; // @synthesize link=_link;
@property (strong, nonatomic) WFLocation *location; // @synthesize location=_location;
@property (strong, nonatomic) NSDate *sunrise; // @synthesize sunrise=_sunrise;
@property (strong, nonatomic) NSDate *sunset; // @synthesize sunset=_sunset;
@property (strong, nonatomic) WFWeatherConditions *underlyingCurrentConditions; // @synthesize underlyingCurrentConditions=_underlyingCurrentConditions;
@property (strong, nonatomic) NSArray *underlyingDailyConditions; // @synthesize underlyingDailyConditions=_underlyingDailyConditions;
@property (strong, nonatomic) NSArray *underlyingHourlyConditions; // @synthesize underlyingHourlyConditions=_underlyingHourlyConditions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

