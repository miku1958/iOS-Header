//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDXPCClient, HDXPCListener, NSXPCConnection;

@protocol HDXPCListenerClientProvider <NSObject>
- (HDXPCClient *)clientForListener:(HDXPCListener *)arg1 connection:(NSXPCConnection *)arg2 error:(id *)arg3;
@end

