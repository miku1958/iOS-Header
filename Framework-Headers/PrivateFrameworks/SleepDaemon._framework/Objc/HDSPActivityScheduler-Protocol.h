//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SleepDaemon/NSObject-Protocol.h>

@protocol HDSPActivityScheduler <NSObject>
- (void)scheduleActivity:(id)arg1 options:(unsigned long long)arg2 activityHandler:(void (^)(void))arg3;
- (void)unschedule;
@end
