//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSString;

@protocol WCXPCPrivateManagerClientProtocol <NSObject>
- (void)handlePingForExtensionBundleID:(NSString *)arg1;
- (void)isExtensionPrivileged:(NSString *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
@end

