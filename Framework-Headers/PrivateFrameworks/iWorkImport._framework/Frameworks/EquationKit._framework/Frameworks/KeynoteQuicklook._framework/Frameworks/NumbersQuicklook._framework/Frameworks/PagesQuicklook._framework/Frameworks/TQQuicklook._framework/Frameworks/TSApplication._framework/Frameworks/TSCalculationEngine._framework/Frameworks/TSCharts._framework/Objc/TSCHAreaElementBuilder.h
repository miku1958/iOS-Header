//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCHLineElementBuilder.h>

@interface TSCHAreaElementBuilder : TSCHLineElementBuilder
{
}

- (BOOL)needsSeparateHitTestingPaths;
- (BOOL)p_addBottomStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned long long)arg3 withPointsArray:(CDStruct_460b8ffe *)arg4 withCount:(unsigned long long)arg5;
- (void)p_addTopStroke:(CDStruct_e0d92598 *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_460b8ffe *)arg3 withCount:(unsigned long long)arg4 lineType:(int)arg5;
- (CDStruct_460b8ffe *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 groupIndexSet:(id)arg3 outCount:(unsigned long long *)arg4;

@end
