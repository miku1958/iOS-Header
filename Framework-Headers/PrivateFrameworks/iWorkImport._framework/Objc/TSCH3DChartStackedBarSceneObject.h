//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartStackedColumnSceneObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartStackedBarSceneObject : TSCH3DChartStackedColumnSceneObject
{
}

+ (id)chartSeriesType;
+ (BOOL)isHorizontalChart;
+ (BOOL)isStacked;
+ (id)partWithEnumerator:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (tvec2_84d5962d)labelObjectSpacePosition:(unsigned int)arg1 axisValue:(double)arg2 intercept:(double)arg3;
- (void)updateLightingEffectsState:(id)arg1 scene:(id)arg2;

@end

