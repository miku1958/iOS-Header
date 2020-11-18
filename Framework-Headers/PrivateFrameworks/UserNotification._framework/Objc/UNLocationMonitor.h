//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UserNotification/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, NSString;
@protocol OS_dispatch_queue, UNLocationMonitorDelegate;

@interface UNLocationMonitor : NSObject <CLLocationManagerDelegate>
{
    NSString *_bundleIdentifier;
    CLLocationManager *_locationManager;
    NSObject<OS_dispatch_queue> *_queue;
    id<UNLocationMonitorDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<UNLocationMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)isBundleIdentifierAuthorizedForRegionMonitoring:(id)arg1;
- (void)_queue_delegate_didEnterRegion:(id)arg1;
- (void)_queue_delegate_didExitRegion:(id)arg1;
- (void)_queue_didEnterRegion:(id)arg1;
- (void)_queue_didExitRegion:(id)arg1;
- (void)_queue_markAsHavingReceivedLocation;
- (void)_queue_startMonitoringForRegion:(id)arg1;
- (void)_queue_stopMonitoringForRegion:(id)arg1;
- (void)dealloc;
- (id)initWithBundleIdentifier:(id)arg1;
- (void)locationManager:(id)arg1 didEnterRegion:(id)arg2;
- (void)locationManager:(id)arg1 didExitRegion:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locationManager:(id)arg1 didStartMonitoringForRegion:(id)arg2;
- (void)markAsHavingReceivedLocation;
- (void)startMonitoringForRegion:(id)arg1;
- (void)stopMonitoringForRegion:(id)arg1;

@end
