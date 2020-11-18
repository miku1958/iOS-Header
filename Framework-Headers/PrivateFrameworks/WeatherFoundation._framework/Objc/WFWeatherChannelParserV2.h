//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WFForecastDataParser-Protocol.h>

@class NSCalendar, NSString;

__attribute__((visibility("hidden")))
@interface WFWeatherChannelParserV2 : NSObject <WFForecastDataParser>
{
    NSCalendar *_calendar;
}

@property (strong, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)componentsForCurrentForecast;
+ (id)componentsForDailyForecasts;
+ (id)componentsForHourlyForecasts;
+ (unsigned long long)expectedDailyForecastCount;
+ (unsigned long long)expectedHourlyForecastCount;
- (void).cxx_destruct;
- (unsigned long long)_pressureTrendFromWeatherChannelCode:(id)arg1;
- (id)init;
- (id)parseAirQualityData:(id)arg1 location:(id)arg2 error:(id *)arg3;
- (void)parseCommonComponents:(id)arg1 data:(id)arg2;
- (id)parseCurrentCondition:(id)arg1;
- (id)parseDailyForecasts:(id)arg1;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6;
- (id)parseForecastData:(id)arg1 types:(unsigned long long)arg2 location:(id)arg3 locale:(id)arg4 date:(id)arg5 error:(id *)arg6 rules:(id)arg7;
- (id)parseHourlyForecasts:(id)arg1;

@end
