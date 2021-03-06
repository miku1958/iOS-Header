//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATTransport, CRKSession, NSArray;
@protocol CRKIdentity;

@protocol CRKSessionDelegate <NSObject>
- (id<CRKIdentity>)clientIdentityForSession:(CRKSession *)arg1;
- (void)session:(CRKSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (void)session:(CRKSession *)arg1 encounteredUntrustedConnection:(void (^)(unsigned long long))arg2;
- (void)session:(CRKSession *)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)sessionDidBecomeConnectable:(CRKSession *)arg1;
- (void)sessionDidBecomeNotConnectable:(CRKSession *)arg1;
- (void)sessionDidDisconnect:(CRKSession *)arg1;
- (void)sessionDidInvalidate:(CRKSession *)arg1;
- (void)sessionDidLoseBeacon:(CRKSession *)arg1;
- (NSArray *)trustedAnchorCertificatesForSession:(CRKSession *)arg1;
@end

