//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, WorldClockPreferences;

@interface WorldClockManager : NSObject
{
    BOOL _dirty;
    NSMutableArray *_cities;
    WorldClockPreferences *_defaults;
    NSDate *lastModified;
}

@property (readonly, nonatomic) NSArray *cities; // @synthesize cities=_cities;
@property (strong, nonatomic) NSDate *lastModified; // @synthesize lastModified;

+ (id)sharedManager;
+ (id)sharedManagerWithPreferences:(id)arg1;
- (void).cxx_destruct;
- (void)_notifyNano;
- (unsigned long long)addCity:(id)arg1;
- (void)addDefaultCitiesIfNeeded;
- (id)allCities;
- (BOOL)canAddCity;
- (BOOL)checkIfCitiesModified;
- (id)citiesMatchingIdentifiers:(id)arg1;
- (id)citiesMatchingName:(id)arg1;
- (id)cityWithIdUrl:(id)arg1;
- (id)fixUpCityProperties:(id)arg1;
- (id)initWithPreferences:(id)arg1;
- (void)loadCities;
- (void)moveCityFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (void)pushCityPropertiesToPreferences;
- (void)removeAllCities;
- (void)removeCity:(id)arg1;
- (void)removeCityAtIndex:(unsigned long long)arg1;
- (void)saveCities;
- (id)worldClockCityFromPersistenceArray:(id)arg1;
- (id)worldClockCityFromPersistenceDictionary:(id)arg1;
- (id)worldClockCityFromPersistenceRepresentation:(id)arg1;

@end

