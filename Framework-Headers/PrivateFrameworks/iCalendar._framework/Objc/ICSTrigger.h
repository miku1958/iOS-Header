//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCalendar/ICSProperty.h>

@interface ICSTrigger : ICSProperty
{
}

- (void)fixAlarmTrigger;
- (id)initWithDate:(id)arg1;
- (id)initWithDuration:(id)arg1;
- (id)initWithDuration:(id)arg1 travelRelativeDuration:(id)arg2;
- (BOOL)isDurationBased;
- (void)setDate:(id)arg1;
- (void)setDuration:(id)arg1;
- (id)travelRelativeDuration;

@end

