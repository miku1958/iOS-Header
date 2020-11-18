//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WeatherFoundation/WeatherServiceInternalProtocol-Protocol.h>

@class MKLocalSearchCompletion, NSDateComponents, NSDictionary, NSLocale, NSString, WFLocation, WFTaskIdentifier;

@protocol WeatherServiceProtocol <WeatherServiceInternalProtocol>
- (void)airQualityForLocation:(WFLocation *)arg1 locale:(NSLocale *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)cancelTaskWithIdentifier:(WFTaskIdentifier *)arg1;
- (void)dailyForecastForLocation:(WFLocation *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)forecastForLocation:(WFLocation *)arg1 atDate:(NSDateComponents *)arg2 options:(NSDictionary *)arg3 taskIdentifier:(WFTaskIdentifier *)arg4;
- (void)hourlyForecastForLocation:(WFLocation *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)invalidateCache:(WFTaskIdentifier *)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForSearchCompletion:(MKLocalSearchCompletion *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)locationForString:(NSString *)arg1 taskIdentifier:(WFTaskIdentifier *)arg2;
- (void)reachabilityConfigurationForIdentifier:(WFTaskIdentifier *)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(WFTaskIdentifier *)arg2;
- (void)temperatureUnitWithIdentifier:(WFTaskIdentifier *)arg1;
@end

