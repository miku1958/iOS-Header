//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Weather/WAIdentifiable-Protocol.h>

@class CLLocation, NSArray, NSDate, NSDictionary, NSError, NSHashTable, NSNumber, NSString, NSTimeZone, NSTimer, NSURL, WFAQIScaleCategory, WFGeocodeRequest, WFLocation, WFNextHourPrecipitation, WFTemperature, WeatherAQIAttribution;

@interface City : NSObject <WAIdentifiable>
{
    BOOL _isDay;
    BOOL _isLocalWeatherCity;
    BOOL _transient;
    BOOL _autoUpdate;
    BOOL _airQualityTemporarilyUnavailable;
    BOOL _isUpdating;
    BOOL _isRequestedByFrameworkClient;
    BOOL _lockedForDemoMode;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    float _dewPoint;
    float _heatIndex;
    long long _conditionCode;
    NSArray *_dayForecasts;
    NSArray *_hourlyForecasts;
    NSString *_updateTimeString;
    NSString *_name;
    NSString *_woeid;
    NSString *_state;
    NSString *_ISO3166CountryAbbreviation;
    WFTemperature *_temperature;
    WFTemperature *_feelsLike;
    unsigned long long _observationTime;
    unsigned long long _sunsetTime;
    unsigned long long _sunriseTime;
    unsigned long long _moonPhase;
    unsigned long long _uvIndex;
    double _precipitationPast24Hours;
    NSURL *_link;
    NSURL *_deeplink;
    CLLocation *_location;
    NSString *_searchTitle;
    NSString *_searchSubtitle;
    NSTimeZone *_timeZone;
    NSDate *_timeZoneUpdateDate;
    NSError *_lastUpdateError;
    NSDate *_updateTime;
    unsigned long long _pressureRising;
    NSArray *_severeWeatherEvents;
    WFNextHourPrecipitation *_nextHourPrecipitation;
    NSURL *_severeWeatherEventLearnMoreURL;
    NSNumber *_airQualityIdx;
    NSNumber *_airQualityCategory;
    NSString *_airQualityScale;
    WFAQIScaleCategory *_airQualityScaleCategory;
    unsigned long long _airQualitySignificance;
    NSString *_airQualityLocalizedRecommendation;
    WeatherAQIAttribution *_airQualityAttribution;
    NSURL *_airQualityProviderURL;
    WFLocation *_wfLocation;
    unsigned long long _lastUpdateStatus;
    long long _updateInterval;
    NSTimer *_autoUpdateTimer;
    WFGeocodeRequest *_activeGeocodeRequest;
    NSHashTable *_cityUpdateObservers;
    NSString *_fullName;
    unsigned long long _aqiDataAvailabilityStatusOverride;
    NSNumber *_airQualityIdxOverride;
    NSNumber *_airQualityCategoryOverride;
    unsigned long long _airQualitySignificanceOverride;
    NSString *_weatherDisplayName;
    NSString *_weatherLocationName;
}

@property (copy, nonatomic) NSString *ISO3166CountryAbbreviation; // @synthesize ISO3166CountryAbbreviation=_ISO3166CountryAbbreviation;
@property (strong, nonatomic) WFGeocodeRequest *activeGeocodeRequest; // @synthesize activeGeocodeRequest=_activeGeocodeRequest;
@property (strong, nonatomic) WeatherAQIAttribution *airQualityAttribution; // @synthesize airQualityAttribution=_airQualityAttribution;
@property (strong, nonatomic) NSNumber *airQualityCategory; // @synthesize airQualityCategory=_airQualityCategory;
@property (strong, nonatomic) NSNumber *airQualityCategoryOverride; // @synthesize airQualityCategoryOverride=_airQualityCategoryOverride;
@property (readonly, nonatomic) BOOL airQualityForceHideRecommendationString;
@property (strong, nonatomic) NSNumber *airQualityIdx; // @synthesize airQualityIdx=_airQualityIdx;
@property (strong, nonatomic) NSNumber *airQualityIdxOverride; // @synthesize airQualityIdxOverride=_airQualityIdxOverride;
@property (copy, nonatomic) NSString *airQualityLocalizedRecommendation; // @synthesize airQualityLocalizedRecommendation=_airQualityLocalizedRecommendation;
@property (copy, nonatomic) NSURL *airQualityProviderURL; // @synthesize airQualityProviderURL=_airQualityProviderURL;
@property (copy, nonatomic) NSString *airQualityScale; // @synthesize airQualityScale=_airQualityScale;
@property (strong, nonatomic) WFAQIScaleCategory *airQualityScaleCategory; // @synthesize airQualityScaleCategory=_airQualityScaleCategory;
@property (nonatomic) unsigned long long airQualitySignificance; // @synthesize airQualitySignificance=_airQualitySignificance;
@property (nonatomic) unsigned long long airQualitySignificanceOverride; // @synthesize airQualitySignificanceOverride=_airQualitySignificanceOverride;
@property (nonatomic) BOOL airQualityTemporarilyUnavailable; // @synthesize airQualityTemporarilyUnavailable=_airQualityTemporarilyUnavailable;
@property (readonly, nonatomic) unsigned long long aqiDataAvailabilityStatus;
@property (nonatomic) unsigned long long aqiDataAvailabilityStatusOverride; // @synthesize aqiDataAvailabilityStatusOverride=_aqiDataAvailabilityStatusOverride;
@property (nonatomic) BOOL autoUpdate; // @synthesize autoUpdate=_autoUpdate;
@property (strong, nonatomic) NSTimer *autoUpdateTimer; // @synthesize autoUpdateTimer=_autoUpdateTimer;
@property (strong, nonatomic) NSHashTable *cityUpdateObservers; // @synthesize cityUpdateObservers=_cityUpdateObservers;
@property (nonatomic) long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property (readonly, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSArray *dayForecasts; // @synthesize dayForecasts=_dayForecasts;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSURL *deeplink; // @synthesize deeplink=_deeplink;
@property (readonly, copy) NSString *description;
@property (nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property (strong, nonatomic) WFTemperature *feelsLike; // @synthesize feelsLike=_feelsLike;
@property (copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (readonly) unsigned long long hash;
@property (nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property (copy, nonatomic) NSArray *hourlyForecasts; // @synthesize hourlyForecasts=_hourlyForecasts;
@property (nonatomic) float humidity; // @synthesize humidity=_humidity;
@property (readonly, nonatomic) NSString *identifier;
@property (nonatomic) BOOL isDay; // @synthesize isDay=_isDay;
@property (nonatomic) BOOL isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property (nonatomic) BOOL isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property (nonatomic) BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
@property (strong, nonatomic) NSError *lastUpdateError; // @synthesize lastUpdateError=_lastUpdateError;
@property (nonatomic) unsigned long long lastUpdateStatus; // @synthesize lastUpdateStatus=_lastUpdateStatus;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSURL *link; // @synthesize link=_link;
@property (copy) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) NSString *locationID;
@property (nonatomic) BOOL lockedForDemoMode; // @synthesize lockedForDemoMode=_lockedForDemoMode;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long moonPhase; // @synthesize moonPhase=_moonPhase;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (copy, nonatomic) WFNextHourPrecipitation *nextHourPrecipitation; // @synthesize nextHourPrecipitation=_nextHourPrecipitation;
@property (nonatomic) unsigned long long observationTime; // @synthesize observationTime=_observationTime;
@property (nonatomic) double precipitationPast24Hours; // @synthesize precipitationPast24Hours=_precipitationPast24Hours;
@property (nonatomic) float pressure; // @synthesize pressure=_pressure;
@property (nonatomic) unsigned long long pressureRising; // @synthesize pressureRising=_pressureRising;
@property (copy, nonatomic) NSString *searchSubtitle; // @synthesize searchSubtitle=_searchSubtitle;
@property (copy, nonatomic) NSString *searchTitle; // @synthesize searchTitle=_searchTitle;
@property (copy, nonatomic) NSURL *severeWeatherEventLearnMoreURL; // @synthesize severeWeatherEventLearnMoreURL=_severeWeatherEventLearnMoreURL;
@property (copy, nonatomic) NSArray *severeWeatherEvents; // @synthesize severeWeatherEvents=_severeWeatherEvents;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (nonatomic) unsigned long long sunriseTime; // @synthesize sunriseTime=_sunriseTime;
@property (nonatomic) unsigned long long sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property (readonly) Class superclass;
@property (strong, nonatomic) WFTemperature *temperature; // @synthesize temperature=_temperature;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (readonly, nonatomic) BOOL timeZoneIsFresh;
@property (strong, nonatomic) NSDate *timeZoneUpdateDate; // @synthesize timeZoneUpdateDate=_timeZoneUpdateDate;
@property (nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property (nonatomic) long long updateInterval; // @synthesize updateInterval=_updateInterval;
@property (strong, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property (copy, nonatomic) NSString *updateTimeString; // @synthesize updateTimeString=_updateTimeString;
@property (readonly) NSDictionary *urlComponents;
@property (nonatomic, setter=setUVIndex:) unsigned long long uvIndex; // @synthesize uvIndex=_uvIndex;
@property (nonatomic) float visibility; // @synthesize visibility=_visibility;
@property (copy, nonatomic) NSString *weatherDisplayName; // @synthesize weatherDisplayName=_weatherDisplayName;
@property (readonly, nonatomic) NSString *weatherLocationCitationName;
@property (copy, nonatomic) NSString *weatherLocationName; // @synthesize weatherLocationName=_weatherLocationName;
@property (strong, nonatomic) WFLocation *wfLocation; // @synthesize wfLocation=_wfLocation;
@property (nonatomic) float windChill; // @synthesize windChill=_windChill;
@property (nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property (nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property (copy, nonatomic) NSString *woeid; // @synthesize woeid=_woeid;

+ (id)_ISO8601Calendar;
+ (id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3;
- (void).cxx_destruct;
- (void)_clearAutoUpdateTimer;
- (BOOL)_dataIsValid;
- (void)_generateLocalizableStrings;
- (BOOL)_isUpdating;
- (BOOL)_isValidLearnMoreURLForSevereEvent:(id)arg1;
- (void)_notifyDidStartWeatherUpdate;
- (void)_updateTimeZone;
- (void)addUpdateObserver:(id)arg1;
- (BOOL)airQualityCanUseDefaultAttribution;
- (unsigned long long)aqiDataAvailabilityStatusFromAppConfig;
- (id)cityAndState;
- (void)cityDidFinishUpdatingWithError:(id)arg1;
- (void)clearForecasts;
- (BOOL)containsLatitude:(double)arg1 longitude:(double)arg2;
- (struct CLLocationCoordinate2D)coordinate;
- (void)dealloc;
- (id)detailedDescription;
- (id)dictionaryRepresentation;
- (void)discardDataIfNeeded;
- (id)displayName;
- (double)distanceToLatitude:(double)arg1 longitude:(double)arg2;
- (double)distanceToLocation:(id)arg1;
- (id)getName;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isDuplicateOfCity:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isUpdatingOrNoData;
- (void)localWeatherDidBeginUpdate;
- (long long)locationOfTime:(long long)arg1;
- (id)naturalLanguageDescription;
- (id)naturalLanguageDescriptionWithDescribedCondition:(out long long *)arg1;
- (BOOL)populateWithDataFromCity:(id)arg1;
- (unsigned long long)precipitationForecast;
- (long long)primaryConditionForRange:(struct _NSRange)arg1;
- (void)removeUpdateObserver:(id)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D)arg1;
- (long long)timeDigit;
- (BOOL)update;
- (void)updateCityForModel:(id)arg1;
- (void)updateCityForSevereWeatherEvents:(id)arg1;
- (void)updateTimeZoneWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)weatherDataAge;
- (id)windDirectionAsString:(double)arg1;

@end
