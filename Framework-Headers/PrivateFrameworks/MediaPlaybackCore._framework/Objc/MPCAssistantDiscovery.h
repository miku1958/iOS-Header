//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MPCAssistantDiscovery : NSObject
{
    void *_reconSession;
}

- (void)_discoverAirplayDevices:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)discoverAirplayDevicesMatchingGroupID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverAirplayDevicesMatchingLogicalDeviceIDs:(id)arg1 expectedCount:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)discoverAirplayDevicesMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)discoverRemoteControlEndpointsMatchingUIDs:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopDiscovery;

@end
