//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject
{
    AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal *_availableOutputDevices;
}

@property (readonly, nonatomic) NSArray *otherDevices;
@property (readonly, nonatomic) NSArray *recentlyUsedDevices;

+ (id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1;
- (void)_loadOutputDevices;
- (id)availableOutputDeviceGroups;
- (void)dealloc;
- (unsigned long long)hash;
- (id)impl;
- (id)init;
- (id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

