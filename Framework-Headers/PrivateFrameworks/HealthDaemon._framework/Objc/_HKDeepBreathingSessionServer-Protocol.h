//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class NSDate;

@protocol _HKDeepBreathingSessionServer <NSObject>
- (void)remote_endSessionWithEndReason:(long long)arg1;
- (void)remote_startGuiding;
- (void)remote_startSessionWithStartDate:(NSDate *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
@end

