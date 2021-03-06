//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DSceneRenderPipeline.h>

#import <TSCharts/TSCH3DSceneObjectDelegator-Protocol.h>
#import <TSCharts/TSCHUnretainedParent-Protocol.h>

@class NSArray, NSMutableArray, TSCH3DChartRep, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent>
{
    TSCH3DChartRep *mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    NSArray *mSelection;
    NSMutableArray *mProjectedPoints;
    float mNormalizedKnobRadius;
}

@property (readonly, nonatomic) NSArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;

+ (id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (void)clearParent;
- (void)dealloc;
- (void)getSelectionKnobsPositions:(id)arg1;
- (id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (BOOL)render;

@end

