//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/PDAnimationShapeTarget.h>

__attribute__((visibility("hidden")))
@interface PDAnimationChartTarget : PDAnimationShapeTarget
{
    BOOL mHasCatagoryIndex;
    int mCatagoryIndex;
    BOOL mHasSeriesIndex;
    int mSeriesIndex;
    BOOL mHasBuildStep;
    int mBuildStep;
    int mChartSubElementType;
}

- (int)buildStep;
- (int)catagoryIndex;
- (int)chartSubElementType;
- (BOOL)hasBuildStep;
- (BOOL)hasCatagoryIndex;
- (BOOL)hasSeriesIndex;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (int)seriesIndex;
- (void)setBuildStep:(int)arg1;
- (void)setCatagoryIndex:(int)arg1;
- (void)setChartSubElementType:(int)arg1;
- (void)setSeriesIndex:(int)arg1;

@end

