//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSCH3DCamera, TSCH3DChartScenePropertyAccessor, TSCH3DScene;

@interface TSCH3DLabelsRendererTransforms : NSObject
{
    TSCH3DScene *mScene;
    TSCH3DCamera *mCamera;
    TSCH3DChartScenePropertyAccessor *mAccessor;
    tmat4x4_3074befe mProjector;
    tmat4x4_3074befe mUnitToWorld;
    tmat4x4_3074befe mStageToWorld;
    tmat4x4_3074befe mWorldToStage;
    struct bitset<5> mValidBits;
}

@property (strong, nonatomic) TSCH3DCamera *camera; // @synthesize camera=mCamera;
@property (strong, nonatomic) TSCH3DScene *scene; // @synthesize scene=mScene;

+ (id)transforms;
- (id).cxx_construct;
- (id)accessor;
- (void)dealloc;
- (const tmat4x4_3074befe *)p_projector;
- (const tmat4x4_3074befe *)p_stageToWorld;
- (tvec3_17f03ce0)projectPoint:(const tvec3_17f03ce0 *)arg1;
- (void)resetWithScene:(id)arg1 camera:(id)arg2;
- (tvec3_17f03ce0)samples;
- (const tmat4x4_3074befe *)unitToWorld;
- (const tmat4x4_3074befe *)worldToStage;

@end

