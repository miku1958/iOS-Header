//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@protocol GCLightXPCProxyRemoteClientEndpointInterface;

@protocol GCLightXPCProxyServiceRemoteServerInterface
- (void)lightXPCProxyServiceClientEndpointConnect:(id<GCLightXPCProxyRemoteClientEndpointInterface>)arg1 reply:(void (^)(id<GCLightXPCProxyRemoteServerEndpointInterface>, NSError *))arg2;
@end
