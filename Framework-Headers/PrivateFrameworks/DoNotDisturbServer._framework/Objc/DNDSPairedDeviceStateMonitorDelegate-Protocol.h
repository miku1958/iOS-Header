//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSPairedDevice, DNDSPairedDeviceStateMonitor;

@protocol DNDSPairedDeviceStateMonitorDelegate <NSObject>
- (void)pairedDeviceStateMonitor:(DNDSPairedDeviceStateMonitor *)arg1 pairingChangedFromDevice:(DNDSPairedDevice *)arg2 toDevice:(DNDSPairedDevice *)arg3;
@end

