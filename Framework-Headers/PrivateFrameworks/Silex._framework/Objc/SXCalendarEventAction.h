//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/SXAction.h>

@class NSDate, NSString, NSTimeZone, NSURL, SXFormattedText;

@interface SXCalendarEventAction : SXAction
{
    BOOL _allDay;
    NSDate *_startDate;
    NSDate *_endDate;
    NSTimeZone *_timeZone;
    NSString *_title;
    NSString *_location;
    NSURL *_URL;
    SXFormattedText *_notes;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic) BOOL allDay; // @synthesize allDay=_allDay;
@property (copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property (copy, nonatomic) NSString *location; // @synthesize location=_location;
@property (copy, nonatomic) SXFormattedText *notes; // @synthesize notes=_notes;
@property (readonly, copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property (copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)initWithStartDate:(id)arg1;

@end
