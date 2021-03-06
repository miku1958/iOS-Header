//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEProvider.h>

#import <NetworkExtension/NSExtensionRequestHandling-Protocol.h>

@class NEVPNProtocol, NSArray, NSString;

@interface NETunnelProvider : NEProvider <NSExtensionRequestHandling>
{
    BOOL _reasserting;
    BOOL _onDemandEnabled;
    BOOL _gracefulShutdown;
    NEVPNProtocol *_protocolConfiguration;
    NSArray *_appRules;
}

@property (strong) NSArray *appRules; // @synthesize appRules=_appRules;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL gracefulShutdown; // @synthesize gracefulShutdown=_gracefulShutdown;
@property (readonly) unsigned long long hash;
@property BOOL onDemandEnabled; // @synthesize onDemandEnabled=_onDemandEnabled;
@property (strong) NEVPNProtocol *protocolConfiguration; // @synthesize protocolConfiguration=_protocolConfiguration;
@property BOOL reasserting;
@property (readonly) long long routingMethod;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)handleAppMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setTunnelNetworkSettings:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

