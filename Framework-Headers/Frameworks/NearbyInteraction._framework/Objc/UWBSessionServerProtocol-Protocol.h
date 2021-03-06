//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NearbyInteraction/NSObject-Protocol.h>

@class NIConfiguration, NIDiscoveryToken, NSString;

@protocol UWBSessionServerProtocol <NSObject>
- (void)_addObject:(NIDiscoveryToken *)arg1 reply:(void (^)(NSError *))arg2;
- (void)_removeObject:(NIDiscoveryToken *)arg1 reply:(void (^)(NSError *))arg2;
- (void)activate:(void (^)(NSDictionary *, NSError *))arg1;
- (void)pause:(void (^)(NSError *))arg1;
- (void)queryDeviceCapabilities:(void (^)(NSDictionary *))arg1;
- (void)runWithConfiguration:(NIConfiguration *)arg1 reply:(void (^)(NSError *))arg2;
- (void)shareSandboxToken:(NSString *)arg1 reply:(void (^)(NSError *))arg2;
@end

