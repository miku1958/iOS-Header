//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/WeatherCloudPersistenceDelegate-Protocol.h>

@class NSString, WeatherPreferences;
@protocol SynchronizedDefaultsDelegate, WeatherPreferencesPersistence;

@interface WeatherCloudPreferences : NSObject <WeatherCloudPersistenceDelegate>
{
    id<SynchronizedDefaultsDelegate> _syncDelegate;
    id<WeatherPreferencesPersistence> _cloudStore;
    WeatherPreferences *_localPreferences;
}

@property (strong) id<WeatherPreferencesPersistence> cloudStore; // @synthesize cloudStore=_cloudStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) WeatherPreferences *localPreferences; // @synthesize localPreferences=_localPreferences;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<SynchronizedDefaultsDelegate> syncDelegate; // @synthesize syncDelegate=_syncDelegate;

- (void).cxx_destruct;
- (void)_synchronize:(BOOL)arg1;
- (BOOL)areCloudCities:(id)arg1 equalToLocalCities:(id)arg2;
- (id)citiesByEnforcingSizeLimitOnResults:(id)arg1;
- (void)cloudCitiesChangedExternally:(id)arg1;
- (id)cloudCitiesFromLegacyCloudCities:(id)arg1;
- (id)cloudCityFromALCity:(id)arg1 name:(id)arg2;
- (id)cloudCityRepresentationsFromLegacyRepresentations;
- (void)cloudPersistenceDidSynchronize:(id)arg1;
- (id)cloudRepresentationFromCities:(id)arg1;
- (void)forceSync;
- (id)initWithLocalPreferences:(id)arg1;
- (id)initWithLocalPreferences:(id)arg1 persistence:(id)arg2;
- (BOOL)legacyCloudCity:(id)arg1 isEqualToALCity:(id)arg2;
- (id)prepareLocalCitiesForReconciliation:(id)arg1 isInitialSync:(BOOL)arg2;
- (id)reconcileCloudCities:(id)arg1 withLocal:(id)arg2 isInitialSync:(BOOL)arg3;
- (void)saveCitiesToCloud:(id)arg1;
- (void)setCloudStoreCities:(id)arg1;
- (BOOL)shouldWriteCitiesToCloud:(id)arg1;
- (void)updateLocalStoreWithRemoteChanges:(id)arg1;

@end

