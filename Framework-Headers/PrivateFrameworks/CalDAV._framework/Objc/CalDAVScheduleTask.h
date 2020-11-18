//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVPostTask.h>

@class CalDAVScheduleResponseItem, NSArray, NSString;

@interface CalDAVScheduleTask : CoreDAVPostTask
{
    NSArray *_attendees;
    CalDAVScheduleResponseItem *_scheduleResponse;
    NSString *_originator;
}

@property (strong, nonatomic) NSArray *attendees; // @synthesize attendees=_attendees;
@property (strong, nonatomic) NSString *originator; // @synthesize originator=_originator;
@property (strong, nonatomic) CalDAVScheduleResponseItem *scheduleResponse; // @synthesize scheduleResponse=_scheduleResponse;

- (void).cxx_destruct;
- (id)additionalHeaderValues;
- (id)copyDefaultParserForContentType:(id)arg1;
- (void)finishCoreDAVTaskWithError:(id)arg1;
- (id)initWithOriginator:(id)arg1 attendees:(id)arg2 outboxURL:(id)arg3 payload:(id)arg4;

@end

