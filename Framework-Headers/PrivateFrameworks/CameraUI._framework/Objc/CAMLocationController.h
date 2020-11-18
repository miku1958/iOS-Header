//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CameraUI/CLLocationManagerDelegate-Protocol.h>

@class CLHeading, CLLocation, CLLocationManager, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CAMLocationController : NSObject <CLLocationManagerDelegate>
{
    BOOL _enabled;
    BOOL _headingEnabled;
    BOOL __monitoringLocation;
    CLLocation *_currentLocation;
    CLHeading *_currentHeading;
    NSObject<OS_dispatch_queue> *__authorizationQueue;
    CLLocationManager *__locationManager;
    NSMutableArray *__enqueuedAssetsWaitingForLocation;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_authorizationQueue; // @synthesize _authorizationQueue=__authorizationQueue;
@property (readonly, nonatomic) NSMutableArray *_enqueuedAssetsWaitingForLocation; // @synthesize _enqueuedAssetsWaitingForLocation=__enqueuedAssetsWaitingForLocation;
@property (readonly, nonatomic) CLLocationManager *_locationManager; // @synthesize _locationManager=__locationManager;
@property (readonly, nonatomic, getter=_isMonitoringLocation) BOOL _monitoringLocation; // @synthesize _monitoringLocation=__monitoringLocation;
@property (readonly, nonatomic) CLHeading *currentHeading; // @synthesize currentHeading=_currentHeading;
@property (readonly, nonatomic) CLLocation *currentLocation; // @synthesize currentLocation=_currentLocation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isHeadingEnabled) BOOL headingEnabled; // @synthesize headingEnabled=_headingEnabled;
@property (readonly) Class superclass;

+ (id)_sharedGPSDatestampFormatter;
+ (id)_sharedGPSTimestampFormatter;
+ (id)locationMetadataForLocation:(id)arg1 heading:(id)arg2 device:(long long)arg3;
- (void).cxx_destruct;
- (void)_authorizeOrStartLocationManager;
- (void)_startMonitoringLocationUpdates;
- (void)_stopMonitoringLocationUpdates;
- (void)_updateAssetsWaitingOnLocation;
- (void)_updateLocationMonitoring;
- (void)dealloc;
- (void)enqueueAssetForLocationUpdates:(id)arg1;
- (id)headingForOrientation:(long long)arg1;
- (id)init;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;

@end

