//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class SCLScheduleSettings, SCLSchoolMode, SCLState;

@protocol SCLSchoolModeDelegate <NSObject>

@optional
- (void)schoolMode:(SCLSchoolMode *)arg1 didLoadScheduleSettings:(SCLScheduleSettings *)arg2;
- (void)schoolMode:(SCLSchoolMode *)arg1 didUpdateScheduleSettings:(SCLScheduleSettings *)arg2;
- (void)schoolMode:(SCLSchoolMode *)arg1 didUpdateState:(SCLState *)arg2 fromState:(SCLState *)arg3;
- (void)schoolModeDidLoad:(SCLSchoolMode *)arg1;
- (void)schoolModeDidUpdateUnlockHistory:(SCLSchoolMode *)arg1;
@end

