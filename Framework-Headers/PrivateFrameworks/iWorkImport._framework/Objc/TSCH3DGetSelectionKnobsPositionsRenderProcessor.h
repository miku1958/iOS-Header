//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DTransformGeometryRenderProcessor.h>

@class NSMutableArray, TSCH3DGetSelectionKnobsPositionsPipelineDelegate;

__attribute__((visibility("hidden")))
@interface TSCH3DGetSelectionKnobsPositionsRenderProcessor : TSCH3DTransformGeometryRenderProcessor
{
    NSMutableArray *mProjectedPoints;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate *mSceneObjectDelegate;
    float mNormalizedKnobRadius;
}

@property (nonatomic) float normalizedKnobRadius; // @synthesize normalizedKnobRadius=mNormalizedKnobRadius;
@property (strong, nonatomic) NSMutableArray *projectedPoints; // @synthesize projectedPoints=mProjectedPoints;
@property (strong, nonatomic) TSCH3DGetSelectionKnobsPositionsPipelineDelegate *sceneObjectDelegate; // @synthesize sceneObjectDelegate=mSceneObjectDelegate;

- (void)dealloc;
- (tmat4x4_3074befe)modelViewNormalizedProjection;
- (void)submit:(id)arg1;

@end

