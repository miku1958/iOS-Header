//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class GEOApplicationAuditToken, NSData, NSDate, NSString;

@protocol GEOTrafficProbeProxy
- (void)reportBatchTrafficProbes:(NSData *)arg1 auditToken:(GEOApplicationAuditToken *)arg2;
- (void)reportRealtimeTrafficProbes:(NSData *)arg1 probeCount:(unsigned long long)arg2 recvTime:(NSDate *)arg3 forTripId:(NSString *)arg4 auditToken:(GEOApplicationAuditToken *)arg5;
@end

