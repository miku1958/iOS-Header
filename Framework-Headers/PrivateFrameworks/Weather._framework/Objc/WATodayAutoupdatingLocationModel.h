//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Weather/WATodayModel.h>

#import <Weather/CLLocationManagerDelegate-Protocol.h>
#import <Weather/SynchronizedDefaultsDelegate-Protocol.h>

@class NSString, WFGeocodeRequest, WeatherLocationManager, WeatherPreferences;

@interface WATodayAutoupdatingLocationModel : WATodayModel <CLLocationManagerDelegate, SynchronizedDefaultsDelegate>
{
    BOOL _isLocationTrackingEnabled;
    BOOL _locationServicesActive;
    BOOL _stopUpdateIfNeeded;
    WeatherLocationManager *_locationManager;
    WFGeocodeRequest *_geocodeRequest;
    unsigned long long _citySource;
    WeatherPreferences *_preferences;
    CDUnknownBlockType _WeatherLocationManagerGenerator;
}

@property (copy, nonatomic) CDUnknownBlockType WeatherLocationManagerGenerator; // @synthesize WeatherLocationManagerGenerator=_WeatherLocationManagerGenerator;
@property (nonatomic) unsigned long long citySource; // @synthesize citySource=_citySource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) WFGeocodeRequest *geocodeRequest; // @synthesize geocodeRequest=_geocodeRequest;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isLocationTrackingEnabled; // @synthesize isLocationTrackingEnabled=_isLocationTrackingEnabled;
@property (strong, nonatomic) WeatherLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (nonatomic) BOOL locationServicesActive; // @synthesize locationServicesActive=_locationServicesActive;
@property (strong, nonatomic) WeatherPreferences *preferences; // @synthesize preferences=_preferences;
@property (nonatomic) BOOL stopUpdateIfNeeded; // @synthesize stopUpdateIfNeeded=_stopUpdateIfNeeded;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_executeLocationUpdateForFirstWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeLocationUpdateForLocalWeatherCityWithCompletion:(CDUnknownBlockType)arg1;
- (void)_executeLocationUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)_kickstartLocationManager;
- (void)_persistStateWithModel:(id)arg1;
- (BOOL)_reloadForecastData:(BOOL)arg1;
- (void)_teardownLocationManager;
- (void)_weatherPreferencesWereSynchronized:(id)arg1;
- (void)_willDeliverForecastModel:(id)arg1;
- (void)checkIfNeedsToUpdate;
- (void)clearLocationUpdateState;
- (void)dealloc;
- (id)forecastModel;
- (id)init;
- (id)initWithPreferences:(id)arg1 effectiveBundleIdentifier:(id)arg2;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)setCitySource:(unsigned long long)arg1 fireNotification:(BOOL)arg2;
- (BOOL)shouldNotUseUpdatedLocation;
- (void)syncLastUpdateTime;
- (void)ubiquitousDefaultsDidChange:(id)arg1;
- (BOOL)updateLocationTrackingStatus;

@end

