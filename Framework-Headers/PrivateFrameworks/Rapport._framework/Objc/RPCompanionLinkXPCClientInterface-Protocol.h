//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError, NSString, RPCompanionLinkDevice, RPEndpoint, RPSession;

@protocol RPCompanionLinkXPCClientInterface

@optional
- (void)companionLinkAuthCompleted:(NSError *)arg1;
- (void)companionLinkChangedDevice:(RPCompanionLinkDevice *)arg1 changes:(unsigned int)arg2;
- (void)companionLinkFoundDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkHandleDisconnect;
- (void)companionLinkLocalDeviceUpdated:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkLostDevice:(RPCompanionLinkDevice *)arg1;
- (void)companionLinkPromptForPasswordType:(int)arg1 flags:(unsigned int)arg2 throttleSeconds:(int)arg3;
- (void)companionLinkReceivedEventID:(NSString *)arg1 event:(NSDictionary *)arg2 options:(NSDictionary *)arg3;
- (void)companionLinkReceivedRequestID:(NSString *)arg1 request:(NSDictionary *)arg2 options:(NSDictionary *)arg3 responseHandler:(void (^)(NSDictionary *, NSDictionary *, NSError *))arg4;
- (void)xpcDiscoveryChangedEndpoint:(RPEndpoint *)arg1;
- (void)xpcDiscoveryFoundEndpoint:(RPEndpoint *)arg1;
- (void)xpcDiscoveryLostEndpoint:(RPEndpoint *)arg1;
- (void)xpcServerAcceptSession:(RPSession *)arg1 completion:(void (^)(NSError *))arg2;
- (void)xpcServerHidePassword:(unsigned int)arg1;
- (void)xpcServerShowPassword:(NSString *)arg1 flags:(unsigned int)arg2;
@end

