//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterExtensionProviderHostContext.h>

#import <NetworkExtension/NEFilterExtensionProviderProtocol-Protocol.h>
#import <NetworkExtension/NEFilterPacketExtensionProviderHostProtocol-Protocol.h>

@class NSString;

@interface NEFilterPacketExtensionProviderHostContext : NEFilterExtensionProviderHostContext <NEFilterExtensionProviderProtocol, NEFilterPacketExtensionProviderHostProtocol>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_extensionAuxiliaryHostProtocol;
- (void)createPacketChannelWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

