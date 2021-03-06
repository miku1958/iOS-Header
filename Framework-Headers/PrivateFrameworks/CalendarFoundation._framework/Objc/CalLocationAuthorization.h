//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarFoundation/CLLocationManagerDelegate-Protocol.h>

@class CLLocationManager, CalLocationAuthorizationStatus, NSString;
@protocol OS_dispatch_group;

@interface CalLocationAuthorization : NSObject <CLLocationManagerDelegate>
{
    id _bundleOrBundleIdentifier;
    NSObject<OS_dispatch_group> *_initializationGroup;
    CLLocationManager *_locationManager;
    CalLocationAuthorizationStatus *_status;
    struct os_unfair_lock_s _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)authorizationForBundleIdentifier:(id)arg1 bundle:(id)arg2 createIfNecessary:(BOOL)arg3;
+ (int)authorizationStatusForBundle:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1;
+ (int)authorizationStatusForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (unsigned long long)locationPrecisionForBundle:(id)arg1;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)arg1;
+ (unsigned long long)locationPrecisionForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (id)logHandle;
+ (BOOL)preciseLocationAuthorizedForBundle:(id)arg1;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1;
+ (BOOL)preciseLocationAuthorizedForBundleIdentifier:(id)arg1 bundle:(id)arg2;
+ (unsigned long long)ttlLocationStatus;
- (void).cxx_destruct;
- (id)authorizationStatus;
- (id)initWithBundleID:(id)arg1 bundle:(id)arg2 queue:(id)arg3;
- (void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2;
- (unsigned long long)waitForPrecision;

@end

