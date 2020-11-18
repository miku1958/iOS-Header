//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Weather/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSDate, NSString, NSTimer;
@protocol CLLocationManagerDelegate;

@interface WeatherLocationManager : NSObject <CLLocationManagerDelegate>
{
    BOOL _locationTrackingIsReady;
    BOOL _locationUpdatesEnabled;
    BOOL _isInternalBuild;
    int _authorizationStatus;
    float _lastLocationAccuracy;
    id<CLLocationManagerDelegate> _delegate;
    CLLocationManager *_locationManager;
    unsigned long long _updateInterval;
    double _oldestAllowedUpdateTime;
    NSTimer *_delayedUpdateTimer;
    NSTimer *_accuracyFallbackTimer;
    NSDate *_lastLocationTimeStamp;
    double _lastLocationUpdateTime;
    double _nextPlannedUpdate;
    CDStruct_2c43369c _lastLocationCoord;
}

@property (strong, nonatomic) NSTimer *accuracyFallbackTimer; // @synthesize accuracyFallbackTimer=_accuracyFallbackTimer;
@property (nonatomic) int authorizationStatus; // @synthesize authorizationStatus=_authorizationStatus;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) NSTimer *delayedUpdateTimer; // @synthesize delayedUpdateTimer=_delayedUpdateTimer;
@property (weak, nonatomic) id<CLLocationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isInternalBuild; // @synthesize isInternalBuild=_isInternalBuild;
@property (nonatomic) float lastLocationAccuracy; // @synthesize lastLocationAccuracy=_lastLocationAccuracy;
@property (nonatomic) CDStruct_2c43369c lastLocationCoord; // @synthesize lastLocationCoord=_lastLocationCoord;
@property (copy, nonatomic) NSDate *lastLocationTimeStamp; // @synthesize lastLocationTimeStamp=_lastLocationTimeStamp;
@property (nonatomic) double lastLocationUpdateTime; // @synthesize lastLocationUpdateTime=_lastLocationUpdateTime;
@property (strong, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (nonatomic) BOOL locationTrackingIsReady; // @synthesize locationTrackingIsReady=_locationTrackingIsReady;
@property (nonatomic) BOOL locationUpdatesEnabled; // @synthesize locationUpdatesEnabled=_locationUpdatesEnabled;
@property (nonatomic) double nextPlannedUpdate; // @synthesize nextPlannedUpdate=_nextPlannedUpdate;
@property (nonatomic) double oldestAllowedUpdateTime; // @synthesize oldestAllowedUpdateTime=_oldestAllowedUpdateTime;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long updateInterval; // @synthesize updateInterval=_updateInterval;

+ (void)clearSharedLocationManager;
+ (id)sharedWeatherLocationManager;
- (void).cxx_destruct;
- (void)accuracyFallbackTimerDidFire:(id)arg1;
- (void)askForLocationManagerAuthorization;
- (void)cancelAccuracyFallbackTimer;
- (void)cancelDelayedUpdateTimer;
- (void)clearLastLocationUpdateTime;
- (void)clearLocalWeatherUpdateState;
- (void)dealloc;
- (void)delayedUpdateTimerDidFire:(id)arg1;
- (int)forceLoadingAuthorizationStatus;
- (void)forceLocationUpdate;
- (id)init;
- (BOOL)isLocalStaleOrOutOfDate;
- (BOOL)localWeatherAuthorized;
- (id)location;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)monitorLocationAuthorization;
- (void)scheduleDelayedUpdate:(double)arg1;
- (void)setLocationTrackingActive:(BOOL)arg1;
- (void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3;
- (void)setLocationTrackingReady:(BOOL)arg1 activelyTracking:(BOOL)arg2 watchKitExtension:(BOOL)arg3 shouldRequestAuthorization:(BOOL)arg4;
- (void)updateLocation:(id)arg1;

@end

