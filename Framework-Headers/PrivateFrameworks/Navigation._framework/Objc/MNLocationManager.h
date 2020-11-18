//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/GEOResourceManifestTileGroupObserver-Protocol.h>
#import <Navigation/MNLocationProviderDelegate-Protocol.h>

@class CLHeading, GEOLocationShifter, MNLocation, NSBundle, NSDate, NSError, NSHashTable, NSLock, NSString;
@protocol MNLocationProvider, MNLocationRecorder;

@interface MNLocationManager : NSObject <GEOResourceManifestTileGroupObserver, MNLocationProviderDelegate>
{
    unsigned long long _locationProviderType;
    id<MNLocationProvider> _locationProvider;
    id<MNLocationRecorder> _locationRecorder;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    NSHashTable *_locationObservers;
    NSHashTable *_locationListeners;
    NSHashTable *_headingObservers;
    NSLock *_observersLock;
    NSLock *_lastLocationLock;
    MNLocation *_lastLocation;
    MNLocation *_lastGoodLocation;
    GEOLocationShifter *_locationShifter;
    double _lastLocationUpdateTime;
    double _lastLocationReportTime;
    double _locationUpdateStartTime;
    double _expectedGpsUpdateInterval;
    CLHeading *_heading;
    NSDate *_lastUpdatedHeadingDate;
    BOOL _hasCustomDesiredAccuracy;
    BOOL _trackingLocation;
    BOOL _logStartStopLocationUpdates;
    BOOL _isLastLocationStale;
    BOOL _lastLocationPushed;
    BOOL _useCourseForHeading;
    BOOL _trackingHeading;
    CDUnknownBlockType _locationCorrector;
    NSError *_locationError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (strong, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CLHeading *heading; // @synthesize heading=_heading;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isHeadingServicesAvailable;
@property (readonly, nonatomic) BOOL isLastLocationStale; // @synthesize isLastLocationStale=_isLastLocationStale;
@property (readonly, nonatomic) MNLocation *lastLocation;
@property (copy, nonatomic) CDUnknownBlockType locationCorrector; // @synthesize locationCorrector=_locationCorrector;
@property (readonly, nonatomic) NSError *locationError; // @synthesize locationError=_locationError;
@property (strong, nonatomic) id<MNLocationProvider> locationProvider; // @synthesize locationProvider=_locationProvider;
@property (readonly, nonatomic) unsigned long long locationProviderType; // @synthesize locationProviderType=_locationProviderType;
@property (strong, nonatomic) id<MNLocationRecorder> locationRecorder; // @synthesize locationRecorder=_locationRecorder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeScale;

+ (id)sharedLocationManager;
- (void).cxx_destruct;
- (void)_locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)_reportLocationFailureWithError:(id)arg1;
- (void)_reportLocationReset;
- (void)_reportLocationStatus:(SEL)arg1;
- (void)_reportLocationSuccess;
- (void)_reset;
- (void)_setLastLocationReceivedFromMaps:(id)arg1;
- (void)_setTrackingHeading:(BOOL)arg1;
- (void)_setTrackingLocation:(BOOL)arg1;
- (void)_startLocationUpdateWithObserver:(id)arg1 desiredAccuracy:(double)arg2;
- (long long)activityType;
- (void)addLocationListener:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isLocationServicesApproved;
- (BOOL)isLocationServicesAuthorizationNeeded;
- (BOOL)isLocationServicesAvailable;
- (BOOL)isLocationServicesDenied;
- (BOOL)isLocationServicesPossiblyAvailable;
- (BOOL)isLocationServicesPossiblyAvailable:(id *)arg1;
- (BOOL)isLocationServicesRestricted;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)pushLocation:(id)arg1;
- (void)removeLocationListener:(id)arg1;
- (void)resourceManifestManager:(id)arg1 didChangeActiveTileGroup:(id)arg2 fromOldTileGroup:(id)arg3;
- (void)setActivityType:(long long)arg1;
- (void)setLastLocation:(id)arg1;
- (void)setLocationProviderType:(unsigned long long)arg1;
- (void)startHeadingUpdateWithObserver:(id)arg1;
- (void)startLocationUpdateWithObserver:(id)arg1;
- (void)stop;
- (void)stopHeadingUpdateWithObserver:(id)arg1;
- (void)stopLocationUpdateWithObserver:(id)arg1;
- (void)useGPSLocationProvider;
- (void)useHybridLocationProvider;
- (void)useLeechedLocationProvider;
- (void)useTraceLocationProvider:(id)arg1;

@end
