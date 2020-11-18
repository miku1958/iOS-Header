//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFResponse.h>

#import <WeatherFoundation/NSCopying-Protocol.h>
#import <WeatherFoundation/NSSecureCoding-Protocol.h>

@class NSArray, NSData, WFAirQualityConditions, WFNextHourPrecipitation, WFWeatherConditions;

@interface WFAggregateCommonResponse : WFResponse <NSCopying, NSSecureCoding>
{
    BOOL _responseWasFromCache;
    WFAirQualityConditions *_airQualityObservations;
    WFWeatherConditions *_currentObservations;
    NSArray *_lastTwentyFourHoursOfObservations;
    NSArray *_hourlyForecastedConditions;
    NSArray *_dailyForecastedConditions;
    NSArray *_dailyPollenForecastedConditions;
    NSArray *_changeForecasts;
    NSArray *_severeWeatherEvents;
    WFNextHourPrecipitation *_nextHourPrecipitation;
    NSData *_rawAPIData;
}

@property (strong, nonatomic) WFAirQualityConditions *airQualityObservations; // @synthesize airQualityObservations=_airQualityObservations;
@property (strong, nonatomic) NSArray *changeForecasts; // @synthesize changeForecasts=_changeForecasts;
@property (strong, nonatomic) WFWeatherConditions *currentObservations; // @synthesize currentObservations=_currentObservations;
@property (strong, nonatomic) NSArray *dailyForecastedConditions; // @synthesize dailyForecastedConditions=_dailyForecastedConditions;
@property (strong, nonatomic) NSArray *dailyPollenForecastedConditions; // @synthesize dailyPollenForecastedConditions=_dailyPollenForecastedConditions;
@property (strong, nonatomic) NSArray *hourlyForecastedConditions; // @synthesize hourlyForecastedConditions=_hourlyForecastedConditions;
@property (strong, nonatomic) NSArray *lastTwentyFourHoursOfObservations; // @synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations;
@property (strong, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation; // @synthesize nextHourPrecipitation=_nextHourPrecipitation;
@property (strong, nonatomic) NSData *rawAPIData; // @synthesize rawAPIData=_rawAPIData;
@property (nonatomic) BOOL responseWasFromCache; // @synthesize responseWasFromCache=_responseWasFromCache;
@property (strong, nonatomic) NSArray *severeWeatherEvents; // @synthesize severeWeatherEvents=_severeWeatherEvents;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
