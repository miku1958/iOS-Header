//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSData, WFAirQualityConditions, WFNextHourPrecipitation, WFWeatherConditions;

@interface WFParsedForecastData : NSObject
{
    NSData *_rawData;
    WFAirQualityConditions *_airQualityObservations;
    WFWeatherConditions *_currentConditions;
    NSArray *_lastTwentyFourHoursOfObservations;
    NSArray *_dailyForecasts;
    NSArray *_hourlyForecasts;
    NSArray *_pollenForecasts;
    NSArray *_changeForecasts;
    NSArray *_severeWeatherEvents;
    WFNextHourPrecipitation *_nextHourPrecipitation;
}

@property (strong, nonatomic) WFAirQualityConditions *airQualityObservations; // @synthesize airQualityObservations=_airQualityObservations;
@property (strong, nonatomic) NSArray *changeForecasts; // @synthesize changeForecasts=_changeForecasts;
@property (strong, nonatomic) WFWeatherConditions *currentConditions; // @synthesize currentConditions=_currentConditions;
@property (strong, nonatomic) NSArray *dailyForecasts; // @synthesize dailyForecasts=_dailyForecasts;
@property (strong, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property (strong, nonatomic) NSArray *lastTwentyFourHoursOfObservations; // @synthesize lastTwentyFourHoursOfObservations=_lastTwentyFourHoursOfObservations;
@property (strong, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation; // @synthesize nextHourPrecipitation=_nextHourPrecipitation;
@property (strong, nonatomic) NSArray *pollenForecasts; // @synthesize pollenForecasts=_pollenForecasts;
@property (strong, nonatomic) NSData *rawData; // @synthesize rawData=_rawData;
@property (strong, nonatomic) NSArray *severeWeatherEvents; // @synthesize severeWeatherEvents=_severeWeatherEvents;

- (void).cxx_destruct;
- (id)objectForForecastType:(unsigned long long)arg1;

@end
