//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CLLocation, MKSearchCompletion, NSDate, NSDictionary, NSHashTable, NSMutableArray, NSString, NSTimeZone, NSTimer;

@interface City : NSObject
{
    NSString *_updateTimeString;
    NSMutableArray *_dayForecasts;
    NSMutableArray *_hourlyForecasts;
    BOOL _autoUpdate;
    BOOL _isDay;
    BOOL _isLocalWeatherCity;
    BOOL _transient;
    BOOL _isHourlyDataCelsius;
    BOOL _dataCelsius;
    BOOL _isUpdating;
    BOOL _isRequestedByFrameworkClient;
    BOOL _lockedForDemoMode;
    BOOL _updatingTimeZone;
    float _windChill;
    float _windDirection;
    float _windSpeed;
    float _humidity;
    float _visibility;
    float _pressure;
    float _dewPoint;
    float _feelsLike;
    float _heatIndex;
    int _lastUpdateStatus;
    int _updateInterval;
    NSString *_temperature;
    NSDate *_updateTime;
    unsigned long long _conditionCode;
    NSString *_name;
    NSString *_state;
    unsigned long long _observationTime;
    unsigned long long _sunsetTime;
    unsigned long long _sunriseTime;
    unsigned long long _moonPhase;
    unsigned long long _uvIndex;
    double _precipitationPast24Hours;
    NSString *_link;
    NSString *_deeplink;
    CLLocation *_location;
    long long _secondsFromGMT;
    NSTimeZone *_timeZone;
    NSDate *_timeZoneUpdateDate;
    unsigned long long _lastUpdateDetail;
    long long _pressureRising;
    unsigned long long _lastUpdateWarning;
    NSString *_fullName;
    MKSearchCompletion *_searchCompletion;
    NSTimer *_autoUpdateTimer;
    NSHashTable *_cityUpdateObservers;
}

@property (strong, nonatomic) NSTimer *autoUpdateTimer; // @synthesize autoUpdateTimer=_autoUpdateTimer;
@property (strong, nonatomic) NSHashTable *cityUpdateObservers; // @synthesize cityUpdateObservers=_cityUpdateObservers;
@property (nonatomic) unsigned long long conditionCode; // @synthesize conditionCode=_conditionCode;
@property (nonatomic, getter=isDataCelsius) BOOL dataCelsius; // @synthesize dataCelsius=_dataCelsius;
@property (copy, nonatomic) NSString *deeplink; // @synthesize deeplink=_deeplink;
@property (nonatomic) float dewPoint; // @synthesize dewPoint=_dewPoint;
@property (nonatomic) float feelsLike; // @synthesize feelsLike=_feelsLike;
@property (copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (nonatomic) float heatIndex; // @synthesize heatIndex=_heatIndex;
@property (nonatomic) float humidity; // @synthesize humidity=_humidity;
@property (nonatomic) BOOL isDay;
@property (nonatomic) BOOL isHourlyDataCelsius; // @synthesize isHourlyDataCelsius=_isHourlyDataCelsius;
@property (nonatomic) BOOL isLocalWeatherCity; // @synthesize isLocalWeatherCity=_isLocalWeatherCity;
@property (nonatomic) BOOL isRequestedByFrameworkClient; // @synthesize isRequestedByFrameworkClient=_isRequestedByFrameworkClient;
@property (nonatomic) BOOL isUpdating; // @synthesize isUpdating=_isUpdating;
@property (nonatomic) unsigned long long lastUpdateDetail; // @synthesize lastUpdateDetail=_lastUpdateDetail;
@property (nonatomic) int lastUpdateStatus; // @synthesize lastUpdateStatus=_lastUpdateStatus;
@property (nonatomic) unsigned long long lastUpdateWarning; // @synthesize lastUpdateWarning=_lastUpdateWarning;
@property (nonatomic) double latitude;
@property (copy, nonatomic) NSString *link; // @synthesize link=_link;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) NSString *locationID;
@property (nonatomic) BOOL lockedForDemoMode; // @synthesize lockedForDemoMode=_lockedForDemoMode;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long moonPhase; // @synthesize moonPhase=_moonPhase;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (nonatomic) unsigned long long observationTime; // @synthesize observationTime=_observationTime;
@property (nonatomic) double precipitationPast24Hours; // @synthesize precipitationPast24Hours=_precipitationPast24Hours;
@property (nonatomic) float pressure; // @synthesize pressure=_pressure;
@property (nonatomic) long long pressureRising; // @synthesize pressureRising=_pressureRising;
@property (strong, nonatomic) MKSearchCompletion *searchCompletion; // @synthesize searchCompletion=_searchCompletion;
@property (nonatomic) long long secondsFromGMT; // @synthesize secondsFromGMT=_secondsFromGMT;
@property (copy, nonatomic) NSString *state; // @synthesize state=_state;
@property (nonatomic) unsigned long long sunriseTime; // @synthesize sunriseTime=_sunriseTime;
@property (nonatomic) unsigned long long sunsetTime; // @synthesize sunsetTime=_sunsetTime;
@property (copy, nonatomic) NSString *temperature; // @synthesize temperature=_temperature;
@property (strong, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (strong, nonatomic) NSDate *timeZoneUpdateDate; // @synthesize timeZoneUpdateDate=_timeZoneUpdateDate;
@property (nonatomic, getter=isTransient) BOOL transient; // @synthesize transient=_transient;
@property (nonatomic) int updateInterval; // @synthesize updateInterval=_updateInterval;
@property (strong, nonatomic) NSDate *updateTime; // @synthesize updateTime=_updateTime;
@property (nonatomic, getter=isUpdatingTimeZone) BOOL updatingTimeZone; // @synthesize updatingTimeZone=_updatingTimeZone;
@property (readonly) NSDictionary *urlComponents;
@property (nonatomic, setter=setUVIndex:) unsigned long long uvIndex; // @synthesize uvIndex=_uvIndex;
@property (nonatomic) float visibility; // @synthesize visibility=_visibility;
@property (nonatomic) float windChill; // @synthesize windChill=_windChill;
@property (nonatomic) float windDirection; // @synthesize windDirection=_windDirection;
@property (nonatomic) float windSpeed; // @synthesize windSpeed=_windSpeed;
@property (copy, nonatomic) NSString *woeid;

+ (id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3;
+ (id)descriptionForWeatherUpdateDetail:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_clearAutoUpdateTimer;
- (void)_generateLocalizableStrings;
- (BOOL)_isUpdating;
- (void)_updateTimeZone;
- (void)addDayForecast:(id)arg1;
- (void)addHourlyForecast:(id)arg1;
- (void)addUpdateObserver:(id)arg1;
- (void)addUpdateWarning:(unsigned long long)arg1;
- (id)cityAndState;
- (void)clearForecasts;
- (BOOL)containsLatitude:(double)arg1 longitude:(double)arg2;
- (id)dayForecasts;
- (void)dealloc;
- (id)description;
- (id)detailedDescription;
- (id)dictionaryRepresentation;
- (void)discardDataIfNeeded;
- (id)displayName;
- (double)distanceToLatitude:(double)arg1 longitude:(double)arg2;
- (double)distanceToLocation:(id)arg1;
- (void)finishedUpdating:(int)arg1 statusDetail:(unsigned long long)arg2;
- (unsigned long long)hash;
- (id)hourlyForecasts;
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
- (int)precipitationForecast;
- (long long)primaryConditionForRange:(struct _NSRange)arg1;
- (void)removeUpdateObserver:(id)arg1;
- (void)setAutoUpdate:(BOOL)arg1;
- (void)setDayForecasts:(id)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (long long)timeDigit;
- (void)update;
- (id)updateTimeString;
- (void)updateTimeZoneWithCompletionBlock:(CDUnknownBlockType)arg1;
- (int)weatherDataAge;
- (id)windDirectionAsString:(double)arg1;

@end

