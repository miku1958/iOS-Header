//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSObject;
@protocol OS_xpc_object;

@protocol VCMediaStreamProtocol <NSObject>
- (NSDictionary *)setLocalParticipantInfo:(NSDictionary *)arg1 networkSockets:(NSObject<OS_xpc_object> *)arg2 withError:(id *)arg3;
- (void)setPause:(BOOL)arg1;
- (void)setRtcpEnabled:(BOOL)arg1;
- (void)setRtcpSendInterval:(double)arg1;
- (void)setRtcpTimeOutEnabled:(BOOL)arg1;
- (void)setRtcpTimeOutInterval:(double)arg1;
- (void)setRtpTimeOutEnabled:(BOOL)arg1;
- (void)setRtpTimeOutInterval:(double)arg1;
- (BOOL)setStreamConfig:(NSDictionary *)arg1 withError:(id *)arg2;
- (void)setStreamDirection:(long long)arg1;
- (void)start;
- (void)stop;
- (long long)streamDirection;
@end
