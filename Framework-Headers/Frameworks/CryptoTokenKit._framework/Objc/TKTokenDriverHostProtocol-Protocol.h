//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CryptoTokenKit/NSObject-Protocol.h>

@class NSString;

@protocol TKTokenDriverHostProtocol <NSObject>
- (void)auditAuthOperation:(NSString *)arg1 auditToken:(CDStruct_6ad76789)arg2 success:(BOOL)arg3 reply:(void (^)(void))arg4;
- (void)getTokenConfigurationEndpointWithReply:(void (^)(NSXPCListenerEndpoint *))arg1;
@end
