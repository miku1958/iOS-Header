//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKServerConfiguration, NSString;

@protocol HDHealthStoreEndpointInterface <NSObject>
- (void)remote_fetchPluginServiceEndpointWithIdentifier:(NSString *)arg1 completion:(void (^)(NSXPCListenerEndpoint *, NSError *))arg2;
- (void)remote_serverForConfiguration:(HKServerConfiguration *)arg1 completion:(void (^)(id<HDHealthStoreServerInterface>, NSError *))arg2;
@end

