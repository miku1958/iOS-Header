//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSString, RTLocation;

@interface RTCalendarEvent : NSObject
{
    BOOL _allDay;
    NSString *_eventIdentifier;
    NSDate *_startDate;
    NSDate *_endDate;
    unsigned long long _participantStatus;
    long long _availability;
    RTLocation *_location;
    NSString *_locationTitle;
    NSData *_locationMapItemHandle;
}

@property (readonly, nonatomic, getter=isAllDay) BOOL allDay; // @synthesize allDay=_allDay;
@property (readonly, nonatomic) long long availability; // @synthesize availability=_availability;
@property (readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (readonly, nonatomic) NSString *eventIdentifier; // @synthesize eventIdentifier=_eventIdentifier;
@property (readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
@property (readonly, nonatomic) NSData *locationMapItemHandle; // @synthesize locationMapItemHandle=_locationMapItemHandle;
@property (readonly, nonatomic) NSString *locationTitle; // @synthesize locationTitle=_locationTitle;
@property (readonly, nonatomic) unsigned long long participantStatus; // @synthesize participantStatus=_participantStatus;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

+ (id)eventAvailabilityToString:(long long)arg1;
+ (id)participantStatusToString:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithEventIdentifier:(id)arg1 allDay:(BOOL)arg2 startDate:(id)arg3 endDate:(id)arg4 participantStatus:(unsigned long long)arg5 availability:(long long)arg6 location:(id)arg7 locationTitle:(id)arg8 locationMapItemHandle:(id)arg9;

@end
