//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEPluginDriver-Protocol.h>

@class NSDictionary;

@protocol NEVPNPluginDriver <NEPluginDriver>
- (void)attachIPCWithCompletionHandler:(void (^)(NSXPCListenerEndpoint *))arg1;
- (void)connectWithParameters:(NSDictionary *)arg1;
- (void)disconnectWithReason:(int)arg1;
- (void)setAppUUIDMap:(NSDictionary *)arg1;
@end

