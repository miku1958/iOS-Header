//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameController/_GCIPCServiceClient-Protocol.h>

@protocol GCMotionXPCProxyServiceRemoteServerInterface, _GCIPCEndpointConnection;

@protocol GCMotionXPCProxyServiceClient <_GCIPCServiceClient>

@property (readonly) id<_GCIPCEndpointConnection> motionXPCProxyServiceConnection;
@property (readonly) id<GCMotionXPCProxyServiceRemoteServerInterface> motionXPCProxyServiceRemoteServer;

@end

