//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EventKit/EKCalendarNotification.h>

@class NSDate, NSNumber, NSString;

@interface EKCalendarResourceChangeNotification : EKCalendarNotification
{
    BOOL _allDay;
    BOOL _dateChanged;
    BOOL _timeChanged;
    BOOL _locationChanged;
    BOOL _titleChanged;
    unsigned int _changeType;
    NSString *_location;
    NSString *_calendarName;
    NSDate *_startDate;
    NSDate *_startDateForNextOccurrence;
    NSDate *_endDate;
    NSString *_eventID;
    NSNumber *_createCount;
    NSNumber *_updateCount;
    NSNumber *_deleteCount;
}

@property (nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property (strong, nonatomic) NSString *calendarName; // @synthesize calendarName=_calendarName;
@property (nonatomic) unsigned int changeType; // @synthesize changeType=_changeType;
@property (strong, nonatomic) NSNumber *createCount; // @synthesize createCount=_createCount;
@property (nonatomic) BOOL dateChanged; // @synthesize dateChanged=_dateChanged;
@property (strong, nonatomic) NSNumber *deleteCount; // @synthesize deleteCount=_deleteCount;
@property (strong, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (strong, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property (strong, nonatomic) NSString *location; // @synthesize location=_location;
@property (nonatomic) BOOL locationChanged; // @synthesize locationChanged=_locationChanged;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (strong, nonatomic) NSDate *startDateForNextOccurrence; // @synthesize startDateForNextOccurrence=_startDateForNextOccurrence;
@property (nonatomic) BOOL timeChanged; // @synthesize timeChanged=_timeChanged;
@property (nonatomic) BOOL titleChanged; // @synthesize titleChanged=_titleChanged;
@property (strong, nonatomic) NSNumber *updateCount; // @synthesize updateCount=_updateCount;

- (void).cxx_destruct;
- (id)initWithType:(long long)arg1;
- (BOOL)needsAlert;
- (id)resourceChangeFromEventStore:(id)arg1;

@end

