//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FileProvider/NSObject-Protocol.h>

@class FPReachabilityMonitor;

@protocol FPReachabilityObserver <NSObject>
- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityStatusTo:(BOOL)arg2;

@optional
- (void)reachabilityMonitor:(FPReachabilityMonitor *)arg1 didChangeReachabilityFlagsTo:(unsigned int)arg2;
@end

