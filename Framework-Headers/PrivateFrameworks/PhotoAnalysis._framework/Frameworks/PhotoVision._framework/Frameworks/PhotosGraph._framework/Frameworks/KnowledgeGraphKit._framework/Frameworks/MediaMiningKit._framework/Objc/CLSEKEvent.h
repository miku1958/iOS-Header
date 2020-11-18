//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class NSArray, NSDate, NSString;

@interface CLSEKEvent : NSObject <NSCoding>
{
    BOOL _isBirthday;
    BOOL _allDay;
    BOOL _hasAttendees;
    BOOL _organizedByMe;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_recurrenceRules;
    NSArray *_attendees;
    NSString *_location;
    id _selfAttendee;
    id _calendar;
    NSString *_calendarItemIdentifier;
}

@property (readonly, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property (readonly) NSArray *attendees; // @synthesize attendees=_attendees;
@property (readonly) id calendar; // @synthesize calendar=_calendar;
@property (readonly) NSString *calendarItemIdentifier; // @synthesize calendarItemIdentifier=_calendarItemIdentifier;
@property (readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) BOOL hasAttendees; // @synthesize hasAttendees=_hasAttendees;
@property (readonly) BOOL isBirthday; // @synthesize isBirthday=_isBirthday;
@property (readonly) NSString *location; // @synthesize location=_location;
@property (readonly) BOOL organizedByMe; // @synthesize organizedByMe=_organizedByMe;
@property (readonly) NSArray *recurrenceRules; // @synthesize recurrenceRules=_recurrenceRules;
@property (readonly) id selfAttendee; // @synthesize selfAttendee=_selfAttendee;
@property (readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
