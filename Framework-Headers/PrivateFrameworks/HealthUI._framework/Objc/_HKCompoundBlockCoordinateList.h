//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class HKValueRange, NSArray;

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList
{
    NSArray *_subCoordinates;
    HKValueRange *_chartableValueRange;
}

- (void).cxx_destruct;
- (id)_coordinatesInChartableRange:(id)arg1;
- (void)_enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(CDUnknownBlockType)arg4;
- (long long)_numCoordinatesInChartableRange:(id)arg1;
- (CDStruct_6ca94699)blockPathEnd;
- (CDStruct_6ca94699)blockPathStart;
- (id)coordinates;
- (void)enumerateCoordinatesWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 block:(CDUnknownBlockType)arg3;
- (id)firstCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (id)initWithSubCoordinates:(id)arg1 chartableValueRange:(id)arg2;
- (id)lastCoordinateWithTransform:(struct CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2;
- (long long)numCoordinates;

@end

