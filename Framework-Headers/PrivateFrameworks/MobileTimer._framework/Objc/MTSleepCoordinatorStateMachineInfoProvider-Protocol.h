//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/MTStateMachineInfoProvider-Protocol.h>

@class MTAlarm, NSDate;

@protocol MTSleepCoordinatorStateMachineInfoProvider <MTStateMachineInfoProvider>

@property (readonly, nonatomic) NSDate *currentDate;
@property (readonly, nonatomic) MTAlarm *sleepAlarm;
@property (readonly, nonatomic) unsigned long long sleepTimeOutMinutes;

@end

