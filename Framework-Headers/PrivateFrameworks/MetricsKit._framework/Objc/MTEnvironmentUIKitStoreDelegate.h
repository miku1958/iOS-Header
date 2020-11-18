//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTEnvironmentUIKitDelegate.h>

#import <MetricsKit/MTEnvironmentDelegate-Protocol.h>

@class NSString;

@interface MTEnvironmentUIKitStoreDelegate : MTEnvironmentUIKitDelegate <MTEnvironmentDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_ams_cookiesForURL:(id)arg1;
- (id)_activeItunesAccount;
- (id)_connectionType;
- (id)_cookies;
- (id)_diskUsage;
- (id)_userType;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)connectionType;
- (id)cookies;
- (id)dsId;
- (id)hardwareModel;
- (id)osBuildNumber;
- (id)storeFrontHeader;
- (id)userAgent;
- (id)userType;

@end
