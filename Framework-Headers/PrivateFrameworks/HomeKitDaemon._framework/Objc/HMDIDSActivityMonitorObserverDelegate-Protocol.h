//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDIDSActivityMonitorObserver;

@protocol HMDIDSActivityMonitorObserverDelegate <NSObject>
- (void)observer:(HMDIDSActivityMonitorObserver *)arg1 didUpdateDevice:(HMDDevice *)arg2 isOnline:(BOOL)arg3;
@end

