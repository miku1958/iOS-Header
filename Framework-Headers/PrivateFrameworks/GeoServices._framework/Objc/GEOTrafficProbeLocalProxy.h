//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOTrafficProbeProxy-Protocol.h>

@interface GEOTrafficProbeLocalProxy : NSObject <GEOTrafficProbeProxy>
{
}

- (void)reportBatchTrafficProbes:(id)arg1 auditToken:(id)arg2;
- (void)reportRealtimeTrafficProbes:(id)arg1 probeCount:(unsigned long long)arg2 recvTime:(id)arg3 forTripId:(id)arg4 auditToken:(id)arg5;

@end

