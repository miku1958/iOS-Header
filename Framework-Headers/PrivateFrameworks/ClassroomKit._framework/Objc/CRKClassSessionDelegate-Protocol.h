//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ClassroomKit/NSObject-Protocol.h>

@class CATTransport, CRKClassSession;

@protocol CRKClassSessionDelegate <NSObject>
- (void)classSession:(CRKClassSession *)arg1 didChangeState:(long long)arg2 previousState:(long long)arg3;
- (void)classSession:(CRKClassSession *)arg1 didConnectWithTransport:(CATTransport *)arg2;
- (void)classSession:(CRKClassSession *)arg1 willLoseBeaconAfterTimeInterval:(double)arg2;
- (void)classSessionDidDisconnect:(CRKClassSession *)arg1;
- (void)classSessionDidInvalidate:(CRKClassSession *)arg1;
@end
