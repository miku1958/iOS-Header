//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class HMDMRAVEndpoint, MPCAssistantConnection, MPCAssistantDiscovery, NAFuture, NSArray, NSObject, NSString;
@protocol OS_dispatch_queue;

@protocol HMDMRSetEndpointVolumeOperationExternalObjectInterface
- (NSArray *)copyMRAVEndpointOutputDevices:(HMDMRAVEndpoint *)arg1;
- (NSString *)copyMRAVOutputDeviceUniqueIdentifier:(void *)arg1;
- (MPCAssistantConnection *)createMPCAssistantConnection;
- (MPCAssistantDiscovery *)createMPCAssistantDiscovery;
- (NAFuture *)getMRAVEndpointOutputDeviceUIDVolumeControlCapabilitiesForEndpoint:(HMDMRAVEndpoint *)arg1 outputDeviceUID:(NSString *)arg2 queue:(NSObject<OS_dispatch_queue> *)arg3;
- (NAFuture *)setMRAVOutputDeviceVolume:(float)arg1 endpoint:(HMDMRAVEndpoint *)arg2 outputDeviceUID:(NSString *)arg3 queue:(NSObject<OS_dispatch_queue> *)arg4;
@end
