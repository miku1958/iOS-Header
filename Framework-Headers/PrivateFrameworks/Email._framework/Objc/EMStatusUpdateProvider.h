//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter;

@interface EMStatusUpdateProvider : NSObject
{
    NSDateFormatter *_timeFormatter;
    NSDateFormatter *_weekdayFormatter;
    NSDateFormatter *_dateFormatter;
}

- (void).cxx_destruct;
- (id)_statusUpdatedAtTimeWithDate:(id)arg1;
- (id)_statusUpdatedMinutesAgoWithDate:(id)arg1 now:(id)arg2;
- (id)_statusUpdatedOnDateWithDate:(id)arg1;
- (id)_statusUpdatedOnDayWithDate:(id)arg1;
- (id)statusUpdateStringWithDate:(id)arg1 now:(id)arg2 nextTransition:(id *)arg3;
- (unsigned long long)statusUpdateWithDate:(id)arg1 now:(id)arg2 nextTransition:(id *)arg3;

@end
