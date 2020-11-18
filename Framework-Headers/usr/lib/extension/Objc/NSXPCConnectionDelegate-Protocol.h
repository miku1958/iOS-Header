//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject-Protocol.h>

@class NSInvocation, NSXPCCoder, NSXPCConnection;
@protocol NSSecureCoding;

@protocol NSXPCConnectionDelegate <NSObject>

@optional
- (void)connection:(NSXPCConnection *)arg1 handleInvocation:(NSInvocation *)arg2 isReply:(BOOL)arg3;
- (id<NSSecureCoding>)replacementObjectForXPCConnection:(NSXPCConnection *)arg1 encoder:(NSXPCCoder *)arg2 object:(id)arg3;
@end

