//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BulletinDistributorCompanion/NSObject-Protocol.h>

@class PCInterfaceMonitor;

@protocol PCInterfaceMonitorDelegate <NSObject>

@optional
- (void)interfaceLinkQualityChanged:(PCInterfaceMonitor *)arg1 previousLinkQuality:(int)arg2;
- (void)interfaceRadioHotnessChanged:(PCInterfaceMonitor *)arg1;
- (void)interfaceReachabilityChanged:(PCInterfaceMonitor *)arg1;
@end

