//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <iWorkImport/TSDContentsScaleProviding-Protocol.h>

@interface CALayer (TSDAdditions) <TSDContentsScaleProviding>

@property (readonly, nonatomic) double contentsScale;

- (void)addDistortAnimationWithVector:(struct CGPoint)arg1;
- (void)addDragRotationAnimationWithDelta:(struct CGPoint)arg1;
- (void)addFlipTransitionAnimationToLayer:(id)arg1;
- (void)addJiggleAnimation;
- (void)addJiggleAnimationWithDuration:(double)arg1 angle:(double)arg2;
- (void)addPerspectiveProjection;
- (void)addPerspectiveSublayerProjectionUsingScreenSize:(struct CGSize)arg1;
- (void)addPopInAnimation:(id)arg1;
- (void)addPopOutAnimation:(id)arg1;
- (void)addPulseAnimation;
- (void)addReflectionSubLayerWithHeight:(double)arg1 startOpacity:(double)arg2;
- (void)addResetAnimation;
- (void)addResetAnimationWithDelegate:(id)arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2;
- (void)addRippleAnimationFromPosition:(struct CGPoint)arg1 withScale:(double)arg2 addPerspectiveProjection:(BOOL)arg3;
- (void)addRotateInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addScaleInAnimationWithDuration:(double)arg1 delay:(double)arg2;
- (void)addSproingAnimationFromPoint:(struct CGPoint)arg1;
- (void)addWaveAnimation;
- (void)addWaveAnimationWithOffset:(struct CGSize)arg1 zPosition:(double)arg2;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3;
- (void)addWaveAnimationWithScale:(double)arg1 offset:(struct CGSize)arg2 zPosition:(double)arg3 addPerspectiveProjection:(BOOL)arg4;
- (void)addZoomAnimation;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1;
- (void)addZoomAnimationFromPoint:(struct CGPoint)arg1 startingScale:(double)arg2;
- (void)addZoomDownAnimation;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1;
- (void)addZoomDownAnimationFromPoint:(struct CGPoint)arg1 endingScale:(double)arg2 delay:(double)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)bakedLayer;
- (id)bakedLayerForLayerRect:(struct CGRect)arg1;
- (double)durationOfAllAnimations;
- (struct CGRect)frameIncludingSublayers;
- (BOOL)hasPopInAnimation;
- (id)layerByAddingReflectionWithHeight:(double)arg1 startOpacity:(double)arg2;
- (struct CGImage *)newRasterizedImageRef;
- (struct CGImage *)newRasterizedImageRefForLayerRect:(struct CGRect)arg1;
- (double)opacityByApplyingAnimation:(id)arg1 atTime:(double)arg2 animationCache:(id)arg3;
- (double)p_perspectiveZDistanceUsingSize:(struct CGSize)arg1;
- (void)pause;
- (void)pauseAtTime:(double)arg1;
- (void)removeAllAnimationsOnLayerTree;
- (void)removeDistortAnimation;
- (void)removeDragRotationAnimation;
- (void)removeFlipTransitionAnimation;
- (void)removeJiggleAnimation;
- (void)removePopInAnimation;
- (void)removePopOutAnimation;
- (void)removePulseAnimation;
- (void)removeResetAnimation;
- (void)removeRippleAnimation;
- (void)removeRotateInAnimation;
- (void)removeScaleInAnimation;
- (void)removeSproingAnimation;
- (void)removeWaveAnimation;
- (void)removeWaveAnimationAnimated:(BOOL)arg1;
- (void)removeZoomAnimation;
- (void)removeZoomDownAnimation;
- (void)resume;
- (void)resumeAtTime:(double)arg1;
- (void)setIfDifferentFrame:(struct CGRect)arg1 orTransform:(struct CGAffineTransform)arg2;
- (struct CATransform3D)transform3DByApplyingAnimation:(id)arg1 atTime:(double)arg2 offset:(struct CGPoint)arg3 animationCache:(id)arg4;
- (BOOL)tsd_hideOverlayLayerDuringZoomOperations;
- (void)tsd_setHideOverlayLayerDuringZoomOperations:(BOOL)arg1;
- (id)zoomDownAnimation;
@end

