//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <XCTTargetBootstrap/NSObject-Protocol.h>

@class NSString;

@protocol XCTTarget <NSObject>
- (void)_XCT_requestEndpointWithAutomationSupportLibraryPath:(NSString *)arg1 protocolVersion:(unsigned long long)arg2 reply:(void (^)(NSXPCListenerEndpoint *, NSError *))arg3;
@end

