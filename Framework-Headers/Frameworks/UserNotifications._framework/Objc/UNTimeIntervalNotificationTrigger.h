//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@interface UNTimeIntervalNotificationTrigger : UNNotificationTrigger
{
    double _timeInterval;
}

@property (readonly, nonatomic) double timeInterval; // @synthesize timeInterval=_timeInterval;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithTimeInterval:(double)arg1 repeats:(BOOL)arg2;
- (id)_initWithTimeInterval:(double)arg1 repeats:(BOOL)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end

