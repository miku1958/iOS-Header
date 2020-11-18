//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SADomainObject.h>

@class NSArray, NSDate, NSNumber, NSString, NSURL;

@interface SACalendarEvent : SADomainObject
{
}

@property (copy, nonatomic) NSArray *alerts;
@property (nonatomic) BOOL allDay;
@property (copy, nonatomic) NSArray *attendees;
@property (copy, nonatomic) NSURL *calendarId;
@property (copy, nonatomic) NSURL *calendarPunchoutURI;
@property (copy, nonatomic) NSDate *endDate;
@property (copy, nonatomic) NSNumber *includeRecurrences;
@property (copy, nonatomic) NSString *location;
@property (copy, nonatomic) NSString *notes;
@property (copy, nonatomic) NSNumber *readOnly;
@property (copy, nonatomic) NSArray *recurrences;
@property (copy, nonatomic) NSDate *startDate;
@property (copy, nonatomic) NSString *timeZoneId;
@property (copy, nonatomic) NSString *title;

+ (id)event;
+ (id)eventWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

