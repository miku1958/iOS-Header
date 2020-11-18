//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>

@class NTKAnalogScene, SKView, UIView;

@interface NTKSpriteKitAnalogFaceView : NTKAnalogFaceView
{
    SKView *_sceneHostView;
    NTKAnalogScene *_analogScene;
    UIView *_circleView;
    UIView *_handsView;
    double _maxZoomingIconDiameter;
}

@property (strong, nonatomic) NTKAnalogScene *analogScene; // @synthesize analogScene=_analogScene;
@property (weak, nonatomic) UIView *circleView; // @synthesize circleView=_circleView;
@property (weak, nonatomic) UIView *handsView; // @synthesize handsView=_handsView;
@property (nonatomic) double maxZoomingIconDiameter; // @synthesize maxZoomingIconDiameter=_maxZoomingIconDiameter;
@property (readonly, nonatomic) UIView *sceneView;
@property (nonatomic) BOOL shouldRasterizeBackground;

+ (void)_prewarm;
- (void).cxx_destruct;
- (void)_applyDataMode;
- (void)_applyFrozen;
- (void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3;
- (void)_applyShowContentForUnadornedSnapshot;
- (void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5;
- (void)_cleanupAfterEditing;
- (void)_cleanupAfterZoom;
- (void)_configureForEditMode:(long long)arg1;
- (void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3;
- (void)_endScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_handleLocaleDidChange;
- (void)_loadContentToReplaceUnadornedSnapshot;
- (void)_loadLiveBackground;
- (void)_loadScene;
- (BOOL)_needsForegroundContainerView;
- (void)_prepareForEditing;
- (void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3;
- (void)_renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1;
- (void)_setContentViewsOpaque:(BOOL)arg1;
- (void)_setZoomFraction:(double)arg1 iconDiameter:(double)arg2;
- (BOOL)_shouldFreezeSceneForEditMode:(long long)arg1;
- (void)_startScrubbingAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_unloadSnapshotContentViews;
- (BOOL)_wantsOpportunisticLiveFaceLoading;
- (void)setEditView:(id)arg1;

@end

