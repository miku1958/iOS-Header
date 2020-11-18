//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoPassKit/NSObject-Protocol.h>

@class NSXPCConnection, PKXPCService;

@protocol PKXPCServiceDelegate <NSObject>
- (void)remoteService:(PKXPCService *)arg1 didEstablishConnection:(NSXPCConnection *)arg2;
- (void)remoteService:(PKXPCService *)arg1 didInterruptConnection:(NSXPCConnection *)arg2;

@optional
- (void)remoteServiceDidResume:(PKXPCService *)arg1;
- (void)remoteServiceDidSuspend:(PKXPCService *)arg1;
@end
