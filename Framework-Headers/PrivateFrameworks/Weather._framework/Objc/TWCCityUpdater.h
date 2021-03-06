//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLocale, NSString, WAForecastModelController, WALocationPrivacySampler;
@protocol WeatherUpdaterDelegate;

@interface TWCCityUpdater : NSObject
{
    id<WeatherUpdaterDelegate> _delegate;
    NSLocale *_locale;
    WALocationPrivacySampler *_locationGeocodingSampler;
    WAForecastModelController *_forecastModelController;
}

@property (weak, nonatomic) id<WeatherUpdaterDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) WAForecastModelController *forecastModelController; // @synthesize forecastModelController=_forecastModelController;
@property (strong, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
@property (readonly, nonatomic) WALocationPrivacySampler *locationGeocodingSampler; // @synthesize locationGeocodingSampler=_locationGeocodingSampler;
@property (strong, nonatomic) NSString *trackingParameter;

+ (id)sharedCityUpdater;
- (void).cxx_destruct;
- (void)cancel;
- (void)configureWithLocationGeocodingSampler:(id)arg1;
- (id)init;
- (BOOL)isUpdatingCity:(id)arg1;
- (void)updateWeatherForCities:(id)arg1;
- (void)updateWeatherForCities:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)updateWeatherForCity:(id)arg1;

@end

