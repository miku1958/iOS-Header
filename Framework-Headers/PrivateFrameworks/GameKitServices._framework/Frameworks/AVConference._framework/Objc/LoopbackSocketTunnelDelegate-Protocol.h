//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class LoopbackSocketTunnel, NSData;

@protocol LoopbackSocketTunnelDelegate <NSObject>
- (void)loopbackSocketTunnel:(LoopbackSocketTunnel *)arg1 receivedData:(NSData *)arg2 from:(struct tagIPPORT *)arg3;
@end

