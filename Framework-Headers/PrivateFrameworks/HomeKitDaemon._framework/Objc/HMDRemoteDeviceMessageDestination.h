//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDRemoteMessageDestination.h>

@class HMDDevice, HMDDeviceHandle;

@interface HMDRemoteDeviceMessageDestination : HMDRemoteMessageDestination
{
    HMDDevice *_device;
    HMDDeviceHandle *_preferredHandle;
}

@property (readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property (copy, nonatomic) HMDDeviceHandle *preferredHandle; // @synthesize preferredHandle=_preferredHandle;

+ (id)shortDescription;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)remoteDestinationString;
- (id)shortDescription;

@end
