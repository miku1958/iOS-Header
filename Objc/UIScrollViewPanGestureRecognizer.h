//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPanGestureRecognizer.h>

@class UIScrollView, UIScrollViewDirectionalPressGestureRecognizer;

__attribute__((visibility("hidden")))
@interface UIScrollViewPanGestureRecognizer : UIPanGestureRecognizer
{
    UIScrollView *_scrollView;
    SEL _scrollViewAction;
    struct CGPoint _reconsideredLockingLocation;
    unsigned int _lastLockingAxis:2;
    unsigned int _lockingAxis:2;
    unsigned int _hasParentScrollView:1;
    unsigned int _caughtDeceleratingScrollView:1;
    unsigned int _directionalLockEnabled:1;
    unsigned int _transfersTrackingFromParentScrollView:1;
    unsigned int _movedAfterCaughtDeceleratingScrollViewButBeganNotYetDelivered:1;
    long long _indirectScrollingState;
    double _translationScaleFactor;
    UIScrollViewDirectionalPressGestureRecognizer *_directionalPressGestureRecognizer;
}

@property (readonly, nonatomic, getter=_beganCaughtDeceleratingScrollViewAndMoved) BOOL beganCaughtDeceleratingScrollViewAndMoved;
@property (readonly, nonatomic, getter=_caughtDeceleratingScrollView) BOOL caughtDeceleratingScrollView;
@property (nonatomic, getter=isDirectionalLockEnabled) BOOL directionalLockEnabled;
@property (weak, nonatomic) UIScrollViewDirectionalPressGestureRecognizer *directionalPressGestureRecognizer; // @synthesize directionalPressGestureRecognizer=_directionalPressGestureRecognizer;
@property (weak, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (nonatomic) double translationScaleFactor; // @synthesize translationScaleFactor=_translationScaleFactor;

- (void).cxx_destruct;
- (struct CGPoint)_adjustSceneReferenceLocation:(struct CGPoint)arg1;
- (BOOL)_canTransferTrackingFromParentPagingScrollView;
- (void)_centroidMovedTo:(struct CGPoint)arg1 atTime:(double)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint)_convertPoint:(struct CGPoint)arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (double)_hysteresis;
- (void)_resetGestureRecognizer;
- (void)_scrollViewDidEndZooming;
- (BOOL)_shouldContinueToWaitToTransferTrackingFromParentScrollView;
- (BOOL)_shouldTransferTrackingFromParentScrollViewForCurrentOffset;
- (BOOL)_shouldTryToBeginWithEvent:(id)arg1;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)delaysTouchesBegan;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setView:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint)translationInView:(id)arg1;
- (struct CGPoint)velocityInView:(id)arg1;

@end

