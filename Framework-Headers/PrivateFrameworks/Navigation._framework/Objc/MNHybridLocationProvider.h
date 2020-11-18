//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationProvider-Protocol.h>
#import <Navigation/MNLocationProviderDelegate-Protocol.h>

@class MNCoreLocationProvider, MNLeechedLocationProvider, NSBundle, NSString;
@protocol MNLocationProviderDelegate;

@interface MNHybridLocationProvider : NSObject <MNLocationProviderDelegate, MNLocationProvider>
{
    unsigned long long _mode;
    MNCoreLocationProvider *_coreLocationProvider;
    MNLeechedLocationProvider *_leechedLocationProvider;
    unsigned long long _activeServices;
    BOOL _shouldNotifyDelegate;
    id<MNLocationProviderDelegate> _delegate;
}

@property (nonatomic) long long activityType;
@property (copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MNLocationProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) double desiredAccuracy;
@property (nonatomic) double distanceFilter;
@property (strong, nonatomic) NSBundle *effectiveBundle;
@property (copy, nonatomic) NSString *effectiveBundleIdentifier;
@property (readonly, nonatomic) double expectedGpsUpdateInterval;
@property (readonly) unsigned long long hash;
@property (nonatomic) int headingOrientation;
@property (readonly, nonatomic) BOOL isSimulation;
@property (readonly, nonatomic) BOOL isTracePlayer;
@property (nonatomic, getter=isLocationServicesPreferencesDialogEnabled) BOOL locationServicesPreferencesDialogEnabled;
@property (nonatomic) BOOL matchInfoEnabled;
@property (nonatomic) unsigned long long mode;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeScale;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;

- (void).cxx_destruct;
- (id)_activeLocationProvider;
- (id)_inactiveLocationProvider;
- (BOOL)_isSubscribedToService:(unsigned long long)arg1;
- (void)_subscribeToService:(unsigned long long)arg1;
- (void)_unsubscribeFromService:(unsigned long long)arg1;
- (id)coreLocationProvider;
- (id)init;
- (id)initWithMode:(unsigned long long)arg1;
- (id)leechedLocationProvider;
- (void)locationProvider:(id)arg1 didReceiveError:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateHeading:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateLocation:(id)arg2;
- (void)locationProvider:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3;
- (void)locationProvider:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3;
- (void)locationProviderDidChangeAuthorizationStatus:(id)arg1;
- (void)locationProviderDidPauseLocationUpdates:(id)arg1;
- (void)locationProviderDidResumeLocationUpdates:(id)arg1;
- (BOOL)locationProviderShouldPauseLocationUpdates:(id)arg1;
- (void)requestWhenInUseAuthorization;
- (void)requestWhenInUseAuthorizationWithPrompt;
- (void)resetForActiveTileGroupChanged;
- (void)startUpdatingHeading;
- (void)startUpdatingLocation;
- (void)startUpdatingVehicleHeading;
- (void)startUpdatingVehicleSpeed;
- (void)stopUpdatingHeading;
- (void)stopUpdatingLocation;
- (void)stopUpdatingVehicleHeading;
- (void)stopUpdatingVehicleSpeed;

@end

