//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/__HMDRegisteredIdentity.h>

@class HMDDevice;

@interface __HMDRegisteredDeviceIdentity : __HMDRegisteredIdentity
{
    HMDDevice *_device;
}

@property (readonly) HMDDevice *device; // @synthesize device=_device;

- (void).cxx_destruct;
- (id)initWithIdentity:(id)arg1;
- (id)initWithIdentity:(id)arg1 device:(id)arg2;

@end

