//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/NSObject-Protocol.h>

@protocol MRAVDistantRoutingDiscoveryServiceProtocol <NSObject>
- (void)getAvailableEndpointsWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getAvailableOutputDevicesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)getDiscoveryModeWithCompletion:(void (^)(unsigned int, NSError *))arg1;
- (void)getHasAvailableEndpointsWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)setDiscoveryMode:(unsigned int)arg1 withCompletion:(void (^)(NSError *))arg2;
@end

