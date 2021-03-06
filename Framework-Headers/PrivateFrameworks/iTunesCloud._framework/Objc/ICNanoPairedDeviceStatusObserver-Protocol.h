//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/NSObject-Protocol.h>

@class ICNanoPairedDeviceStatusMonitor, NSUUID;

@protocol ICNanoPairedDeviceStatusObserver <NSObject>

@optional
- (void)nanoPairedDeviceStatusMonitor:(ICNanoPairedDeviceStatusMonitor *)arg1 didChangeClientSyncState:(unsigned long long)arg2;
- (void)nanoPairedDeviceStatusMonitor:(ICNanoPairedDeviceStatusMonitor *)arg1 didFinishInitialSyncForPairingIdentifier:(NSUUID *)arg2;
- (void)nanoPairedDeviceStatusMonitorNewActiveDevice:(ICNanoPairedDeviceStatusMonitor *)arg1;
- (void)nanoPairedDeviceStatusMonitorPairedDeviceChanged:(ICNanoPairedDeviceStatusMonitor *)arg1;
@end

