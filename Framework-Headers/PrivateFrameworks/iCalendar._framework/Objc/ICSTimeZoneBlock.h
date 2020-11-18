//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSComponent.h>

@class ICSDate, NSArray;

@interface ICSTimeZoneBlock : ICSComponent
{
}

@property (strong, nonatomic) ICSDate *dtstart;
@property (strong, nonatomic) NSArray *rdate;
@property (strong, nonatomic) NSArray *rrule;
@property (nonatomic) NSArray *tzname;
@property (nonatomic) long long tzoffsetfrom;
@property (nonatomic) long long tzoffsetto;

- (void)addRecurrenceDate:(id)arg1;
- (long long)compare:(id)arg1;
- (id)computeTimeZoneChangeListFromDate:(id)arg1 toDate:(id)arg2;
- (BOOL)validate:(id *)arg1;

@end

