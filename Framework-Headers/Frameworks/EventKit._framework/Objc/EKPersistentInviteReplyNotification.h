//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKPersistentObject.h>

@class EKPersistentCalendar, NSDate, NSString;

__attribute__((visibility("hidden")))
@interface EKPersistentInviteReplyNotification : EKPersistentObject
{
}

@property (readonly, nonatomic) BOOL alerted;
@property (readonly, nonatomic) EKPersistentCalendar *calendar;
@property (readonly, nonatomic) NSString *calendarName;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSString *shareeAddress;
@property (readonly, nonatomic) NSString *shareeDisplayName;
@property (readonly, nonatomic) NSString *shareeFirstName;
@property (readonly, nonatomic) NSString *shareeLastName;
@property (readonly, nonatomic) unsigned long long status;

+ (id)defaultPropertiesToLoad;
+ (id)relations;

@end
