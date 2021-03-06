//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol LoopbackSocketTunnelDelegate;

__attribute__((visibility("hidden")))
@interface LoopbackSocketTunnel : NSObject
{
    unsigned short _port;
    int sockFD;
    struct sockaddr_in sa;
    struct sockaddr_in vtpSA;
    NSObject *optionalArg;
    NSObject<LoopbackSocketTunnelDelegate> *_delegate;
    BOOL foundVTPIP;
}

@property NSObject *optionalArg; // @synthesize optionalArg;

- (void)getIPPort:(struct tagIPPORT *)arg1;
- (void)getVTPIPPort:(struct tagIPPORT *)arg1;
- (id)initWithPort:(unsigned short)arg1 delegate:(id)arg2 error:(id *)arg3;
- (int)sendPacketToVTP:(id)arg1;
- (int)serverLoopProc;
- (void)setVTPIP:(struct tagIPPORT *)arg1;
- (void)shutdownSocket;

@end

