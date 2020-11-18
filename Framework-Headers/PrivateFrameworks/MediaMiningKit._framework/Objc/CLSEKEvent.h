//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaMiningKit/NSCoding-Protocol.h>

@class CLLocation, CLSEKCalendar, CLSEKParticipant, NSArray, NSDate, NSString;

@interface CLSEKEvent : NSObject <NSCoding>
{
    BOOL _isBirthday;
    BOOL _allDay;
    BOOL _hasAttendees;
    BOOL _organizedByMe;
    BOOL _isSelfOrganized;
    BOOL _hasRecurrenceRules;
    BOOL _isSuggestedAndAccepted;
    NSString *_title;
    NSDate *_startDate;
    NSDate *_endDate;
    NSArray *_attendees;
    CLSEKParticipant *_selfAttendee;
    CLSEKCalendar *_calendar;
    NSString *_calendarItemIdentifier;
    struct CLLocationCoordinate2D _coordinate;
}

@property (readonly, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property (readonly) NSArray *attendees; // @synthesize attendees=_attendees;
@property (readonly) CLSEKCalendar *calendar; // @synthesize calendar=_calendar;
@property (readonly) NSString *calendarItemIdentifier; // @synthesize calendarItemIdentifier=_calendarItemIdentifier;
@property (readonly) struct CLLocationCoordinate2D coordinate; // @synthesize coordinate=_coordinate;
@property (readonly) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly) CLLocation *geoLocation;
@property (readonly) BOOL hasAttendees; // @synthesize hasAttendees=_hasAttendees;
@property (readonly) BOOL hasRecurrenceRules; // @synthesize hasRecurrenceRules=_hasRecurrenceRules;
@property (readonly) BOOL isBirthday; // @synthesize isBirthday=_isBirthday;
@property (readonly) BOOL isSelfOrganized; // @synthesize isSelfOrganized=_isSelfOrganized;
@property (readonly) BOOL isSuggestedAndAccepted; // @synthesize isSuggestedAndAccepted=_isSuggestedAndAccepted;
@property (readonly) BOOL organizedByMe; // @synthesize organizedByMe=_organizedByMe;
@property (readonly) CLSEKParticipant *selfAttendee; // @synthesize selfAttendee=_selfAttendee;
@property (readonly) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithEKEvent:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
