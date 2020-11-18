//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMCore/CLLocationManagerDelegate-Protocol.h>
#import <IMCore/IMLocationManager-Protocol.h>

@class CLLocation, CLLocationManager, NSDate, NSError, NSMutableArray, NSString, NSTimer;

@interface IMLocationManager : NSObject <CLLocationManagerDelegate, IMLocationManager>
{
    CLLocationManager *_locationManager;
    NSMutableArray *_handlers;
    NSTimer *_timeoutHandler;
    CLLocation *_location;
    NSError *_error;
    NSDate *_locateStartTime;
    NSTimer *_locationUpdateTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSMutableArray *handlers; // @synthesize handlers=_handlers;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDate *locateStartTime; // @synthesize locateStartTime=_locateStartTime;
@property (strong, nonatomic) CLLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) BOOL locationAuthorizationDenied;
@property (strong, nonatomic) CLLocationManager *locationManager; // @synthesize locationManager=_locationManager;
@property (strong, nonatomic) NSTimer *locationUpdateTimer; // @synthesize locationUpdateTimer=_locationUpdateTimer;
@property (readonly) Class superclass;

+ (Class)__CLLocationManagerClass;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_fireCompletionHandlers;
- (void)_locationManagerTimedOut;
- (void)_locationUpdateTimerFired:(id)arg1;
- (BOOL)_shouldSendLocation:(id)arg1 timeIntervalSinceStart:(double)arg2;
- (void)dealloc;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)startUpdatingCurrentLocationWithHandler:(CDUnknownBlockType)arg1;

@end

