//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNLocationProvider-Protocol.h>

@class MNActiveRouteInfo, MNLocation, NSBundle, NSDate, NSString, NSTimer;
@protocol MNLocationProviderDelegate;

__attribute__((visibility("hidden")))
@interface MNSimulationLocationProvider : NSObject <MNLocationProvider>
{
    id<MNLocationProviderDelegate> _delegate;
    long long _simulationType;
    NSTimer *_locationUpdateTimer;
    MNLocation *_previousLocation;
    CDStruct_3f2a7a20 _previousPolylineCoordinate;
    MNActiveRouteInfo *_routeInfo;
    long long _state;
    unsigned long long _currentLegIndex;
    NSDate *_startWaitingDate;
}

@property (copy, nonatomic) CDUnknownBlockType authorizationRequestBlock;
@property (readonly, nonatomic) int authorizationStatus;
@property (readonly, nonatomic) BOOL coarseModeEnabled;
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
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeScale;
@property (readonly, nonatomic) unsigned long long traceVersion;
@property (readonly, nonatomic) BOOL usesCLMapCorrection;

- (void).cxx_destruct;
- (double)_courseFromCoordinate:(CDStruct_39925896)arg1 toCoordinate:(CDStruct_39925896)arg2;
- (BOOL)_isCoordinate:(CDStruct_3f2a7a20)arg1 atEndOfLeg:(id)arg2;
- (id)_locationWithCoordinate:(CDStruct_39925896)arg1 course:(double)arg2 speed:(double)arg3;
- (double)_modifiedSpeedForSpeed:(double)arg1;
- (CDStruct_39925896)_projectedCoordinateOffRouteFrom:(CDStruct_39925896)arg1 toCoordinate:(CDStruct_39925896)arg2 overTimeDelta:(double)arg3 outCourse:(out double *)arg4 outSpeed:(out double *)arg5;
- (CDStruct_3f2a7a20)_projectedCoordinateOnRouteFrom:(CDStruct_3f2a7a20)arg1 overTimeDelta:(double)arg2 outSpeed:(out double *)arg3;
- (void)_sendLocationUpdate:(id)arg1;
- (CDStruct_3f2a7a20)_simulationStartRouteCoordinate;
- (id)_stringForState:(long long)arg1;
- (CDStruct_39925896)_updateForFollowingRouteOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;
- (CDStruct_39925896)_updateForProceedingToStartOfLegOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;
- (CDStruct_39925896)_updateForProceedingToWaypointOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;
- (CDStruct_39925896)_updateForWaitingAtWaypointOverTimeDelta:(double)arg1 outCourse:(out double *)arg2 outSpeed:(out double *)arg3;
- (void)dealloc;
- (id)initWithSimulationType:(long long)arg1 routeInfo:(id)arg2;
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
- (void)updateWithRouteInfo:(id)arg1;

@end

