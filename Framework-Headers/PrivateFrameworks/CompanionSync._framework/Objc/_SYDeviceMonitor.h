//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSUUID;
@protocol OS_dispatch_queue;

@interface _SYDeviceMonitor : NSObject
{
    NSMutableSet *_devices;
    NSUUID *_currentTargetDeviceUUID;
    NSObject<OS_dispatch_queue> *_syncQ;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_clearDeviceList;
- (void)_deviceDidPair:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_rebuildDeviceList;
- (void)addNRDevice:(id)arg1;
- (id)allDevices;
- (id)currentTargetableDevice;
- (void)deviceBecameTargetable:(id)arg1;
- (id)deviceForNRDevice:(id)arg1;
- (id)deviceForPairingID:(id)arg1;
- (id)init;
- (void)removeNRDevice:(id)arg1;

@end
