//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DChartBasicElementProperties.h>

__attribute__((visibility("hidden")))
@interface TSCH3DChartContinuousElementProperties : TSCH3DChartBasicElementProperties
{
    float mDepthGapFactor;
    float mDepthLimitFactor;
    float mShadowCameraDepthLimitAdjustmentFactor;
    unsigned long long mMaxLimitingSeries;
}

@property (readonly, nonatomic) float depthLimitFactor; // @synthesize depthLimitFactor=mDepthLimitFactor;
@property (readonly, nonatomic) float p_sageInterSetDepthGapProperty; // @synthesize p_sageInterSetDepthGapProperty=mDepthGapFactor;
@property (readonly, nonatomic) long long seriesCount;
@property (readonly, nonatomic) float shadowCameraDepthLimitAdjustmentFactor; // @synthesize shadowCameraDepthLimitAdjustmentFactor=mShadowCameraDepthLimitAdjustmentFactor;

- (BOOL)applyElementTransform:(struct ObjectTransforms *)arg1 series:(id)arg2 index:(const tvec2_3b141483 *)arg3 propertyAccessor:(const struct ChartScenePropertyAccessor *)arg4;
- (float)chartMinZForScene:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)depthForScene:(id)arg1;
- (float)p_depthLimitedChartInitialDepthOffset;
- (float)p_interSetDepthGapProperty;
- (void)reset;
- (void)resetWithEnumerator:(id)arg1 layoutSettings:(CDStruct_b1c75024)arg2;
- (tvec2_3b141483)seriesSize;
- (void)updateLabels;

@end

