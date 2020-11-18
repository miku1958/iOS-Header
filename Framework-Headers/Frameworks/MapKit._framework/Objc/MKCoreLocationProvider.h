//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapKit/CLLocationManagerDelegate-Protocol.h>
#import <MapKit/CLLocationManagerVehicleDelegate-Protocol.h>
#import <MapKit/MKLocationProvider-Protocol.h>

@class CLLocation, CLLocationManager, NSBundle, NSString, geo_isolater;
@protocol MKLocationProviderDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MKCoreLocationProvider : NSObject <CLLocationManagerDelegate, CLLocationManagerVehicleDelegate, MKLocationProvider>
{
    CLLocationManager *_clLocationManager;
    id<MKLocationProviderDelegate> _delegate;
    BOOL _locationServicesPreferencesDialogEnabled;
    int _authorizationStatus;
    NSBundle *_effectiveBundle;
    NSString *_effectiveBundleIdentifier;
    CDUnknownBlockType _authorizationRequestBlock;
    BOOL _waitingForAuthorization;
    BOOL _hasQueriedAuthorization;
    double _expectedGpsUpdateInterval;
    geo_isolater *_isolation;
    NSObject<OS_dispatch_queue> *_coreLocationQueue;
    double _desiredAccuracy;
    long long _activityType;
    double _distanceFilter;
    BOOL _matchInfoEnabled;
    int _headingOrientation;
}

@property (readonly, nonatomic) CLLocationManager *_clLocationManager;
@property (nonatomic) long long activityType;
@property (copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MKLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (strong, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) double expectedGpsUpdateInterval; // @synthesize expectedGpsUpdateInterval=_expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (readonly, nonatomic) CLLocation *lastLocation;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) BOOL matchInfoEnabled;
@property (readonly, nonatomic) BOOL shouldShiftIfNecessary;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeScale;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;

- (void).cxx_destruct;
- (int)_authorizationStatusOnQueue;
- (void)_createCLLocationManager;
- (void)_resetForNewEffectiveBundle;
- (void)_updateAuthorizationStatus;
- (void)authorizationStatusOnQueue:(id)arg1 result:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)dismissHeadingCalibrationDisplay;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateVehicleSpeed:(id)arg2;
- (void)locationManagerDidPauseLocationUpdates:(id)arg1;
- (void)locationManagerDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationManagerShouldDisplayHeadingCalibration:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;

@end
