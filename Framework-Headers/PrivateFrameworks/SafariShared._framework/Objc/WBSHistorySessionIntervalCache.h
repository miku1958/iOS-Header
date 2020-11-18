//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar;
@protocol OS_dispatch_queue;

@interface WBSHistorySessionIntervalCache : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSCalendar *_calendar;
    Vector_7b793afa _intervalCache;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (double)_beginningOfSessionContainingTime:(double)arg1;
- (void)_getSessionIntervalForTime:(double)arg1 beginningOfDay:(double *)arg2 beginningOfNextDay:(double *)arg3;
- (double)beginningOfSessionContainingTime:(double)arg1;
- (id)init;
- (id)initWithCalendar:(id)arg1;

@end

