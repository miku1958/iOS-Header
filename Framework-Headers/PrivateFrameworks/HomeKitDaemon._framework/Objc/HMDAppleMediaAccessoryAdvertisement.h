//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDMediaAccessoryAdvertisement.h>

@class HMDDevice;

@interface HMDAppleMediaAccessoryAdvertisement : HMDMediaAccessoryAdvertisement
{
    HMDDevice *_device;
}

@property (readonly) HMDDevice *device; // @synthesize device=_device;

- (void).cxx_destruct;
- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2 category:(id)arg3 device:(id)arg4;
- (id)initWithOutputDevice:(id)arg1 device:(id)arg2;

@end

