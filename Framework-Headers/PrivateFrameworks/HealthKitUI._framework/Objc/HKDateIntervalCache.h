//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKValueRange, NSArray, NSDate, NSDateComponents;

@interface HKDateIntervalCache : NSObject
{
    NSDate *_minAnchorDate;
    NSDate *_maxAnchorDate;
    double _previousTimeInterval;
    BOOL _datesInvalidated;
    NSArray *_cachedDates;
    unsigned long long _dateAnchorUnit;
    NSDateComponents *_dateSpacingComponents;
    HKValueRange *_dateRange;
}

@property (nonatomic) unsigned long long dateAnchorUnit; // @synthesize dateAnchorUnit=_dateAnchorUnit;
@property (readonly, nonatomic) HKValueRange *dateRange; // @synthesize dateRange=_dateRange;
@property (strong, nonatomic) NSDateComponents *dateSpacingComponents; // @synthesize dateSpacingComponents=_dateSpacingComponents;
@property (readonly, nonatomic) NSArray *dates;

- (void).cxx_destruct;
- (id)_generateCachedDates;
- (void)_invalidateCachedDates;
- (id)_maxAnchorDateFromDate:(id)arg1;
- (id)_minAnchorDateFromDate:(id)arg1;
- (void)_updateAnchorDates;
- (id)init;
- (BOOL)setDateRange:(id)arg1;

@end

