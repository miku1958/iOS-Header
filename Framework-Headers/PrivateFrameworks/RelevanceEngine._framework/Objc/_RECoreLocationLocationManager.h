//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RELocationManager.h>

#import <RelevanceEngine/CLLocationManagerDelegate-Protocol.h>

@class CLLocation, CLLocationManager, NSLock, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface _RECoreLocationLocationManager : RELocationManager <CLLocationManagerDelegate>
{
    CLLocation *_currentLocation;
    NSLock *_locationAccessLock;
    CDUnknownBlockType _handler;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _resumedQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_notifyUpdateHandlersWithError:(id)arg1;
- (void)_updateLocation:(id)arg1;
- (id)currentLocation;
- (id)init;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)startLocationUpdatesWithHandler:(CDUnknownBlockType)arg1;
- (void)stopLocationUpdates;

@end

