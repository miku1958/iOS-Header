//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DChartResizer.h>

@interface TSCH3DChartPieResizer : TSCH3DChartResizer
{
    tvec2_01ee4891 mDirections;
}

+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1;
+ (float)perspectiveness;
- (id).cxx_construct;
- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1 by:(float)arg2;
- (tvec2_01ee4891)canImprove;
- (void)setScale:(tvec3_17f03ce0 *)arg1;
- (tvec2_84d5962d)squareSize:(const tvec2_84d5962d *)arg1;
- (tvec2_84d5962d)updateDirectionsFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (tvec2_84d5962d)updateResizerFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;

@end
