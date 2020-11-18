//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class MPCAssistantConnection, MPCAssistantDiscovery, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface
- (NSArray *)copyMRAVEndpointOutputDevices:(void *)arg1;
- (NSString *)copyMRAVOutputDeviceUniqueIdentifier:(void *)arg1;
- (MPCAssistantConnection *)createMPCAssistantConnection;
- (MPCAssistantDiscovery *)createMPCAssistantDiscovery;
- (void)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(void *)arg2 outputDeviceUID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4 completion:(void (^)(struct __CFError *))arg5;
@end
