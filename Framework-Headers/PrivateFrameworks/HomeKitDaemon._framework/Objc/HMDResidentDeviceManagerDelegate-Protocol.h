//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDResidentDevice, HMDResidentDeviceManager;

@protocol HMDResidentDeviceManagerDelegate <NSObject>
- (void)residentDeviceManager:(HMDResidentDeviceManager *)arg1 didUpdatePrimaryResident:(HMDResidentDevice *)arg2;
- (void)residentDeviceManager:(HMDResidentDeviceManager *)arg1 didUpdateResidentAvailable:(BOOL)arg2;
@end

