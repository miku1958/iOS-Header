//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFForecastDataParser.h>

@interface WFWeatherUndergroundParser : WFForecastDataParser
{
}

+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned long long)conditionFromWeatherUndergroundPhrase:(id)arg1;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
- (id)dateComponentsFromUTCDict:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (void)logParsingErrorAtKeyPath:(id)arg1 error:(id *)arg2;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)parseHistoricalForecast:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)sanitizedNumberForKeyPath:(id)arg1 dict:(id)arg2;
- (id)sanitizedTemperatureForCelsiusKeyPath:(id)arg1 fahrenheitKeyPath:(id)arg2 dict:(id)arg3;

@end

