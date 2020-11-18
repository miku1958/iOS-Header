//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DChartBoundsLayout, TSCH3DChartType, TSCH3DScene;

__attribute__((visibility("hidden")))
@interface TSCH3DChartResizer : NSObject
{
    TSCH3DChartBoundsLayout *mLayout;
    TSCH3DChartType *mChartType;
    TSCH3DScene *mScene;
    struct ChartScenePropertyAccessor *mAccessor;
    float mMinStep;
    float mPrecision;
    struct ResizeData mPrevious;
    struct ResizeData mCurrent;
    tvec2_84d5962d mTarget;
    unsigned long long mIndex;
    CDStruct_44ada6bf mLayoutSettings;
}

@property (nonatomic) float minStep; // @synthesize minStep=mMinStep;
@property (nonatomic) float precision; // @synthesize precision=mPrecision;

+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1;
+ (tvec2_84d5962d)adjustLabelWrapSize:(const tvec2_84d5962d *)arg1 forScene:(id)arg2;
+ (float)minimumSize;
+ (float)perspectiveness;
+ (id)resizerWithLayout:(id)arg1 chartType:(id)arg2;
- (id).cxx_construct;
- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1;
- (tvec3_17f03ce0)adjust:(tvec3_17f03ce0 *)arg1 by:(float)arg2;
- (void)adjustContainingViewport;
- (tvec3_17f03ce0)adjustedScale;
- (BOOL)allConverges;
- (tvec2_01ee4891)canImprove;
- (BOOL)checkImprovement;
- (tvec3_17f03ce0)clamp:(tvec3_17f03ce0 *)arg1;
- (tvec3_17f03ce0)clampDepthRatio:(tvec3_17f03ce0 *)arg1;
- (tvec2_3b141483)containingViewportFromCurrentSize;
- (tvec2_3b141483)containingViewportFromSize:(tvec2_84d5962d *)arg1;
- (float)containingViewportThreshold;
- (tvec2_01ee4891)converges;
- (BOOL)currentCanImprove;
- (void)dealloc;
- (void)gingerClamp;
- (id)initWithLayout:(id)arg1 chartType:(id)arg2;
- (void)initializeResizing:(tvec2_84d5962d *)arg1;
- (void)loop;
- (float)maxDepthRatio;
- (float)minScale;
- (float)perspectiveness;
- (void)readjustContainingViewport;
- (BOOL)resize1;
- (tvec2_84d5962d)resize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (void)seedResizeCondition;
- (void)setContainingViewport:(tvec2_3b141483 *)arg1;
- (void)setScale:(tvec3_17f03ce0 *)arg1;
- (void)setStep:(float)arg1;
- (float)step;
- (void)updateResizeData;
- (tvec2_84d5962d)updateResizerFromRequestedSize:(const tvec2_84d5962d *)arg1 startingSize:(tvec2_84d5962d *)arg2;
- (void)updateSteps;

@end

