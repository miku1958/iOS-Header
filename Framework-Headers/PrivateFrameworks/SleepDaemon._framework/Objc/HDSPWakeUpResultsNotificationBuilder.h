//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HDSPWakeUpResultsNotificationBuilder : NSObject
{
    NSArray *_daySummaries;
    NSString *_userFirstName;
    CDStruct_ef5fcbe6 _morningIndexRange;
}

@property (readonly, nonatomic) NSArray *daySummaries; // @synthesize daySummaries=_daySummaries;
@property (readonly, nonatomic) CDStruct_ef5fcbe6 morningIndexRange; // @synthesize morningIndexRange=_morningIndexRange;
@property (readonly, nonatomic) NSString *userFirstName; // @synthesize userFirstName=_userFirstName;

- (void).cxx_destruct;
- (BOOL)_didMeetSleepDurationGoalLastNight;
- (id)_notificationForCategory:(unsigned long long)arg1 morningIndexRange:(CDStruct_ef5fcbe6)arg2 goalAchieved:(id)arg3;
- (long long)_randomNotificationVariantForCategory:(unsigned long long)arg1;
- (id)_sleepDurationGoalAchievedLastNightNotification;
- (id)_sleepDurationGoalAchievedShortWeekNotification;
- (id)_sleepDurationGoalAchievedTwoWeekNotification;
- (id)buildNotification;
- (id)initWithDaySummaries:(id)arg1 morningIndexRange:(CDStruct_ef5fcbe6)arg2 userFirstName:(id)arg3;

@end

