//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__WeatherCompanionCityControllerAccessibility_super.h"

@interface WeatherCompanionCityControllerAccessibility : __WeatherCompanionCityControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilitImageRegionsForForecastType:(long long)arg1;
- (void)_accessibilityCacheImageRegionsIfNecessary;
- (id)_accessibilityCachedImageRegionForForecastType:(long long)arg1;
- (id)_accessibilityForekastkeyForType:(long long)arg1;
- (id)_accessibilityGetWeekdayNameForShortWeekdayName:(id)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityReloadWeatherCityData;
- (void)_accessibilitySetImageRegionsOnHourlyForecastButton;
- (void)_accessibilityUpdateForecastDayInfoForecastDayController:(id)arg1 forecastDictionary:(id)arg2;
- (void)setForcastDictionariesCache:(id)arg1;
- (void)updateHourlyDialWithForecastType:(long long)arg1;

@end
