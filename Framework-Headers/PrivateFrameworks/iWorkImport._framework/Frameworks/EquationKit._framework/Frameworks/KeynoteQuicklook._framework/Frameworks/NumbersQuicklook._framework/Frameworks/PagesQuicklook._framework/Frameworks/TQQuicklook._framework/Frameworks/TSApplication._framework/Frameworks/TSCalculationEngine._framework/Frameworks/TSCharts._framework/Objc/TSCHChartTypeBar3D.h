//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DChartType.h>

@interface TSCHChartTypeBar3D : TSCH3DChartType
{
}

- (double)categoryAxisTitleRotation;
- (id)defaultSeriesType:(unsigned long long)arg1;
- (id)imageWithPreset:(id)arg1 target:(int)arg2 imageSize:(struct CGSize)arg3 imageScale:(double)arg4 swatchFrame:(struct CGRect)arg5 documentRoot:(id)arg6 shouldCache:(BOOL *)arg7;
- (id)init;
- (struct TSCH3DChartRotationLimit)rotation3DLimit;
- (id)titlePositionerWithInfo:(id)arg1 scene:(id)arg2;
- (id)userInterfaceName;
- (long long)userInterfaceTag;
- (double)valueAxisTitleRotation;

@end

