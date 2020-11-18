//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSString, SAReminderListObject, SAReminderRecurrence, SAReminderTrigger;
@protocol SAReminderPayload;

@interface SAReminderObject : SADomainObject
{
}

@property (copy, nonatomic) NSString *alternateSubject;
@property (nonatomic) BOOL completed;
@property (copy, nonatomic) NSDate *dueDate;
@property (copy, nonatomic) NSString *dueDateTimeZoneId;
@property (nonatomic) BOOL important;
@property (copy, nonatomic) NSArray *lists;
@property (strong, nonatomic) id<SAReminderPayload> payload;
@property (strong, nonatomic) SAReminderRecurrence *recurrence;
@property (copy, nonatomic) NSString *subject;
@property (strong, nonatomic) SAReminderListObject *toList;
@property (strong, nonatomic) SAReminderTrigger *trigger;

+ (id)object;
+ (id)objectWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

