//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKSerializableObject.h>

@class EKSerializableStructuredLocation, NSArray, NSDate, NSMutableArray, NSString, NSTimeZone, NSURL;

__attribute__((visibility("hidden")))
@interface EKSerializableEvent : EKSerializableObject
{
    BOOL _isAllDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    double _travelTime;
    NSMutableArray *_recurrenceRules;
    NSString *_title;
    NSString *_notes;
    NSURL *_url;
    NSString *_calendarIdentifier;
    NSString *_location;
    EKSerializableStructuredLocation *_structuredLocation;
    NSArray *_attendees;
    NSArray *_alarms;
    NSArray *_attachments;
}

@property (strong, nonatomic) NSArray *alarms; // @synthesize alarms=_alarms;
@property (strong, nonatomic) NSArray *attachments; // @synthesize attachments=_attachments;
@property (strong, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property (copy, nonatomic) NSString *calendarIdentifier; // @synthesize calendarIdentifier=_calendarIdentifier;
@property (copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (nonatomic) BOOL isAllDay; // @synthesize isAllDay=_isAllDay;
@property (copy, nonatomic) NSString *location; // @synthesize location=_location;
@property (copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property (strong, nonatomic) NSMutableArray *recurrenceRules; // @synthesize recurrenceRules=_recurrenceRules;
@property (copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) EKSerializableStructuredLocation *structuredLocation; // @synthesize structuredLocation=_structuredLocation;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) double travelTime; // @synthesize travelTime=_travelTime;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

+ (id)classesForKey;
+ (id)serializedProperties;
- (void).cxx_destruct;
- (void)_initAlarms:(id)arg1;
- (void)_initAttachments:(id)arg1;
- (void)_initAttendees:(id)arg1;
- (void)_initRecurrenceRules:(id)arg1;
- (id)createEventInEventStore:(id)arg1;
- (id)initWithEvent:(id)arg1;

@end
