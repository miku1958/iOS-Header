//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RespiratoryHealth/NSObject-Protocol.h>

@class NSString;

@protocol HKRPWatchAppInstallabilityDataSource <NSObject>

@property (readonly, nonatomic, getter=isBloodOxygenSaturationEnabled) BOOL bloodOxygenSaturationEnabled;
@property (readonly, nonatomic, getter=isDeviceSupported) BOOL deviceSupported;
@property (readonly, nonatomic) BOOL hasCompletedOnboarding;
@property (readonly, nonatomic, getter=isRunningStoreDemoMode) BOOL runningStoreDemoMode;
@property (readonly, copy, nonatomic) NSString *selectedCountry;
@property (readonly, nonatomic) BOOL shouldForceAppInstall;
@property (readonly, nonatomic, getter=isTinkerModeEnabled) BOOL tinkerModeEnabled;

@end
