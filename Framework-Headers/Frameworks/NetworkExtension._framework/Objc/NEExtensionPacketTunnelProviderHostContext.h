//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEExtensionTunnelProviderHostContext.h>

#import <NetworkExtension/NEExtensionPacketTunnelProviderHostProtocol-Protocol.h>
#import <NetworkExtension/NEExtensionPacketTunnelProviderProtocol-Protocol.h>

@class NSString;

@interface NEExtensionPacketTunnelProviderHostContext : NEExtensionTunnelProviderHostContext <NEExtensionPacketTunnelProviderProtocol, NEExtensionPacketTunnelProviderHostProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
- (void)fetchVirtualInterfaceTypeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestSocket:(BOOL)arg1 interface:(id)arg2 local:(id)arg3 remote:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (int)requiredEntitlement;
- (void)setAppUUIDMap:(id)arg1;
- (void)setVirtualInterfaceSocket:(id)arg1;
- (void)validateWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
