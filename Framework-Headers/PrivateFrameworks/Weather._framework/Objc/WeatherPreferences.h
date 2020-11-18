//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/NSURLConnectionDelegate-Protocol.h>

@class NSArray, NSString, WeatherCloudPreferences;
@protocol OS_dispatch_queue, SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherPreferences : NSObject <NSURLConnectionDelegate>
{
    BOOL _isCelsius;
    NSString *_UUID;
    NSString *_serviceHost;
    BOOL _serviceDebugging;
    NSArray *_lastUbiquitousWrittenDefaults;
    id<WeatherPreferencesPersistence> _persistence;
    BOOL _userGroupPrefsLockedWhenInit;
    id<SynchronizedDefaultsDelegate> _syncDelegate;
    NSString *_twcURLString;
    WeatherCloudPreferences *_cloudPreferences;
    NSObject<OS_dispatch_queue> *_celsiusQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *celsiusQueue; // @synthesize celsiusQueue=_celsiusQueue;
@property (strong) WeatherCloudPreferences *cloudPreferences; // @synthesize cloudPreferences=_cloudPreferences;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;
@property (copy, nonatomic) NSString *twcURLString; // @synthesize twcURLString=_twcURLString;
@property (nonatomic) BOOL userGroupPrefsLockedWhenInit; // @synthesize userGroupPrefsLockedWhenInit=_userGroupPrefsLockedWhenInit;
@property (copy, nonatomic) NSString *yahooWeatherURLString;

+ (id)_getGroupDefaultsFromURLInApp:(id)arg1;
+ (void)clearSharedPreferences;
+ (id)preferencesWithPersistence:(id)arg1;
+ (id)serviceDebuggingPath;
+ (id)sharedPreferences;
+ (id)userDefaultsPersistence;
- (void).cxx_destruct;
- (id)UUID;
- (id)_cacheDirectoryPath;
- (BOOL)_checkAndPerformMigrationIfNeeded;
- (void)_clearCachedObjects;
- (id)_defaultCities;
- (BOOL)_defaultsAreValid;
- (BOOL)_defaultsCurrent;
- (BOOL)_ensurePrefsLoaded;
- (void)adjustPrefsForLocalWeatherEnabled:(BOOL)arg1;
- (BOOL)areCitiesDefault:(id)arg1;
- (id)citiesByConsolidatingDuplicates:(id)arg1 originalOrder:(id)arg2;
- (id)citiesByConsolidatingDuplicatesInBucket:(id)arg1;
- (BOOL)cityDictionaryHasValidCoordinates:(id)arg1;
- (id)cityFromPreferencesDictionary:(id)arg1;
- (void)dealloc;
- (BOOL)ensureValidSelectedCityID;
- (id)init;
- (void)initOnPrefLoadWithPersistence:(id)arg1;
- (id)initWithPersistence:(id)arg1;
- (BOOL)isCelsius;
- (BOOL)isLocalWeatherEnabled;
- (int)loadActiveCity;
- (int)loadDefaultSelectedCity;
- (id)loadDefaultSelectedCityID;
- (id)loadSavedCities;
- (id)localWeatherCity;
- (BOOL)performMigration;
- (id)preferencesDictionaryForCity:(id)arg1;
- (id)readDefaultValueForKey:(id)arg1;
- (id)readInternalDefaultValueForKey:(id)arg1;
- (BOOL)readTemperatureUnits;
- (void)registerTemperatureUnits;
- (void)resetLocale;
- (void)saveToDiskWithCities:(id)arg1;
- (void)saveToDiskWithCities:(id)arg1 activeCity:(unsigned long long)arg2;
- (void)saveToDiskWithCity:(id)arg1 forActiveIndex:(unsigned long long)arg2;
- (void)saveToDiskWithLocalWeatherCity:(id)arg1;
- (void)saveToUbiquitousStore;
- (BOOL)serviceDebugging;
- (id)serviceHost;
- (void)setActiveCity:(unsigned long long)arg1;
- (void)setCelsius:(BOOL)arg1;
- (void)setDefaultCities:(id)arg1;
- (void)setDefaultSelectedCity:(unsigned long long)arg1;
- (void)setDefaultSelectedCityID:(id)arg1;
- (void)setLocalWeatherEnabled:(BOOL)arg1;
- (void)setupUbiquitousStoreIfNeeded;
- (void)synchronizeStateToDisk;
- (void)synchronizeStateToDiskDoNotify:(BOOL)arg1;
- (id)twcLogoURL;
- (id)twcLogoURL:(id)arg1;
- (void)updateUnitsFromNotification;
- (void)writeDefaultValue:(id)arg1 forKey:(id)arg2;

@end
