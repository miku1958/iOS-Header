//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKObject.h>

#import <EventKit/EKIdentityProtocol-Protocol.h>

@class EKCalendar, EKCalendarItem, NSDate, NSNumber, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface EKResourceChange : EKObject <EKIdentityProtocol>
{
}

@property (readonly, nonatomic) BOOL alerted;
@property (readonly, strong, nonatomic) EKCalendar *calendar;
@property (readonly, strong, nonatomic) EKCalendarItem *calendarItem;
@property (readonly, nonatomic) unsigned int changeType;
@property (readonly, copy, nonatomic) NSURL *changedByAddress;
@property (readonly, copy, nonatomic) NSString *changedByDisplayName;
@property (readonly, copy, nonatomic) NSString *changedByFirstName;
@property (readonly, copy, nonatomic) NSString *changedByLastName;
@property (readonly, nonatomic) NSNumber *createCount;
@property (readonly, nonatomic) BOOL dateChanged;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSNumber *deleteCount;
@property (readonly, nonatomic) NSString *deletedTitle;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL locationChanged;
@property (readonly, nonatomic) unsigned int publicStatus;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL timeChanged;
@property (readonly, copy, nonatomic) NSDate *timestamp;
@property (readonly, nonatomic) BOOL titleChanged;
@property (readonly, nonatomic) NSNumber *updateCount;

+ (Class)frozenClass;
+ (id)knownRelationshipSingleValueKeys;
- (id)URL;
- (BOOL)_propertyWithFlagDidChange:(unsigned int)arg1;
- (unsigned int)changedProperties;
- (void)clearAlertedStatus;
- (id)emailAddress;
- (id)firstName;
- (id)lastName;
- (id)name;
- (id)phoneNumber;

@end

