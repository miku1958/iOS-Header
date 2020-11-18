//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WFForecastDataParser.h>

#import <WeatherFoundation/WFAirQualityDataParser-Protocol.h>

@class NSCalendar, NSString, WFTemperature;

@interface WFWeatherChannelParser : WFForecastDataParser <WFAirQualityDataParser>
{
    NSCalendar *_calendar;
    WFTemperature *_todayHighTemperature;
    WFTemperature *_todayLowTemperature;
}

@property (strong, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFTemperature *todayHighTemperature; // @synthesize todayHighTemperature=_todayHighTemperature;
@property (strong, nonatomic) WFTemperature *todayLowTemperature; // @synthesize todayLowTemperature=_todayLowTemperature;

+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned long long)conditionFromWeatherChannelCode:(id)arg1;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
+ (id)parseAirQualityData:(id)arg1 location:(id)arg2 locale:(id)arg3 error:(id *)arg4;
+ (unsigned long long)pressureTrendFromWeatherChannelCode:(id)arg1;
- (void).cxx_destruct;
- (id)dateComponentsForEpochDateNumber:(id)arg1 toUnitGranularity:(unsigned long long)arg2;
- (id)init;
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;
- (id)parseCurrentCondition:(id)arg1;
- (id)parseDailyForecasts:(id)arg1 date:(id)arg2;
- (id)parseForecastData:(id)arg1 date:(id)arg2 error:(id *)arg3;
- (id)parseHourlyForecasts:(id)arg1 date:(id)arg2;

@end
