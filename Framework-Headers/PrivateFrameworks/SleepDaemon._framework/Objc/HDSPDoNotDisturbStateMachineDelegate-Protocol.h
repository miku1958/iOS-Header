//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/HKSPStateMachineDelegate-Protocol.h>

@class NSDate;

@protocol HDSPDoNotDisturbStateMachineDelegate <HKSPStateMachineDelegate>
- (void)disengageDoNotDisturb;
- (void)engageDoNotDisturbDuringBedtimeWithUserVisibleEndDate:(NSDate *)arg1 updateOnly:(BOOL)arg2;
- (void)engageDoNotDisturbDuringWindDownWithUserVisibleEndDate:(NSDate *)arg1 updateOnly:(BOOL)arg2;
@end
