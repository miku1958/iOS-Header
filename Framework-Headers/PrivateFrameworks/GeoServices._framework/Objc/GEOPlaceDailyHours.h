//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface GEOPlaceDailyHours : NSObject
{
    struct _NSRange _dayOfWeekRange;
    NSArray *_openIntervals;
}

@property (readonly) struct _NSRange dayOfWeekRange; // @synthesize dayOfWeekRange=_dayOfWeekRange;
@property (readonly) NSArray *openIntervals; // @synthesize openIntervals=_openIntervals;

+ (id)dailyHours:(id)arg1 forDays:(struct _NSRange)arg2;
- (void).cxx_destruct;
- (id)description;

@end

