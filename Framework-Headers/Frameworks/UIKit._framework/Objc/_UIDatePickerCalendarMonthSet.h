//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableIndexSet, NSMutableOrderedSet, _UIDatePickerCalendarMonth;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarMonthSet : NSObject
{
    NSCalendar *_calendar;
    unsigned long long _rangeLength;
    _UIDatePickerCalendarMonth *_referenceMonth;
    NSMutableIndexSet *_loadedMonthOffsets;
    NSMutableOrderedSet *_loadedMonths;
}

- (void).cxx_destruct;
- (void)_clearLoadedData;
- (void)_ensureReferenceMonthWithFallbackMonth:(id)arg1;
- (struct _NSRange)_loadOffsetRange:(struct __UISignedRange)arg1;
- (id)_monthAtOffset:(long long)arg1;
- (struct __UISignedRange)_offsetRangeForMonth:(id)arg1;
- (unsigned long long)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(struct __UISignedRange)arg1;
- (unsigned long long)indexOfMonth:(id)arg1;
- (id)initWithCalendar:(id)arg1 rangeLength:(unsigned long long)arg2;
- (void)insertMonthsAroundMonth:(id)arg1 loadedIndexRange:(struct _NSRange *)arg2;
- (id)loadedMonths;
- (id)monthAtIndex:(unsigned long long)arg1;
- (void)reloadWithMonthsAroundMonth:(id)arg1;

@end
