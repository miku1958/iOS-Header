//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, NSString;

@protocol HMDIDSActivityMonitorObserverRegistrationManager <NSObject>
- (void)startObservingDevice:(HMDDevice *)arg1 subActivity:(NSString *)arg2;
- (void)stopObservingDevice:(HMDDevice *)arg1 subActivity:(NSString *)arg2;
@end
