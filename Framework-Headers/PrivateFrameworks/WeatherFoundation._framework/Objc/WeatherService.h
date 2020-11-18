//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WeatherFoundation/WeatherServicePrivateProtocol-Protocol.h>
#import <WeatherFoundation/WeatherServiceProtocol-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, WFQueryDispatcher, WFTemperatureUnitProvider, WFWeatherStoreService;
@protocol OS_dispatch_queue;

@interface WeatherService : NSObject <WeatherServiceProtocol, WeatherServicePrivateProtocol>
{
    WFTemperatureUnitProvider *_temperatureUnitProvider;
    NSMutableArray *_clients;
    NSObject<OS_dispatch_queue> *_clientQueue;
    WFWeatherStoreService *_internalService;
    WFQueryDispatcher *_queryDispatcher;
    NSMutableDictionary *_clientDictionary;
}

@property (strong) NSMutableDictionary *clientDictionary; // @synthesize clientDictionary=_clientDictionary;
@property (readonly, nonatomic) NSArray *clients;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) WFWeatherStoreService *internalService; // @synthesize internalService=_internalService;
@property (strong) WFQueryDispatcher *queryDispatcher; // @synthesize queryDispatcher=_queryDispatcher;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFTemperatureUnitProvider *temperatureUnitProvider; // @synthesize temperatureUnitProvider=_temperatureUnitProvider;

+ (id)sharedService;
- (void).cxx_destruct;
- (void)addClient:(id)arg1;
- (void)addClient:(id)arg1 forPid:(int)arg2;
- (void)airQualityForLocation:(id)arg1 locale:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (id)clientForPid:(int)arg1;
- (void)dailyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1;
- (void)forecastForLocation:(id)arg1 atDate:(id)arg2 options:(id)arg3 taskIdentifier:(id)arg4;
- (void)hourlyForecastForLocation:(id)arg1 taskIdentifier:(id)arg2;
- (id)init;
- (id)initWithStore:(id)arg1;
- (void)invalidateCache:(id)arg1;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2;
- (void)performMigrationWithCompletion:(CDUnknownBlockType)arg1;
- (void)queryDispatcherDidReceiveResponse:(id)arg1 identifier:(id)arg2;
- (void)reachabilityConfigurationForIdentifier:(id)arg1;
- (void)removeClient:(id)arg1;
- (void)replaceTemperatureUnitWith:(int)arg1 identifier:(id)arg2;
- (void)temperatureUnitWithIdentifier:(id)arg1;

@end

