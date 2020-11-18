//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotifications/UNNotificationTrigger.h>

@class NSDateComponents;

@interface UNCalendarNotificationTrigger : UNNotificationTrigger
{
    NSDateComponents *_dateComponents;
}

@property (readonly, copy, nonatomic) NSDateComponents *dateComponents; // @synthesize dateComponents=_dateComponents;

+ (BOOL)supportsSecureCoding;
+ (id)triggerWithDateMatchingComponents:(id)arg1 repeats:(BOOL)arg2;
- (void).cxx_destruct;
- (id)_initWithDateComponents:(id)arg1 repeats:(BOOL)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)nextTriggerDate;
- (id)nextTriggerDateAfterDate:(id)arg1 withRequestedDate:(id)arg2;

@end

