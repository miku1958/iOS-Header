//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderProtocol-Protocol.h>

@class NSDictionary, NSFileHandle;

@protocol NEExtensionPacketTunnelProviderProtocol <NEExtensionTunnelProviderProtocol>
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(void (^)(long long))arg1;
- (void)setAppUUIDMap:(NSDictionary *)arg1;
- (void)setVirtualInterfaceSocket:(NSFileHandle *)arg1;
@end

