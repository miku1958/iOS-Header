//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink;
@protocol _SFDynamicBarAnimatorDelegate;

@interface _SFDynamicBarAnimator : NSObject
{
    double _topBarHeightForState[2];
    double _bottomBarOffsetForState[2];
    BOOL _dragging;
    CADisplayLink *_displayLink;
    double _targetTopBarHeight;
    double _unroundedTopBarHeight;
    double _lastUnroundedTopBarHeight;
    BOOL _didHideBarsByMoving;
    BOOL _didHideOrShowBarsExplicitly;
    double _lastOffset;
    BOOL _inSteadyState;
    long long _state;
    double _topBarHeight;
    double _bottomBarOffset;
    double _minimumTopBarHeight;
    id<_SFDynamicBarAnimatorDelegate> _delegate;
}

@property (readonly, nonatomic) double bottomBarOffset; // @synthesize bottomBarOffset=_bottomBarOffset;
@property (weak, nonatomic) id<_SFDynamicBarAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double minimumTopBarHeight; // @synthesize minimumTopBarHeight=_minimumTopBarHeight;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly, nonatomic) long long targetState;
@property (readonly, nonatomic) double topBarHeight; // @synthesize topBarHeight=_topBarHeight;

- (void).cxx_destruct;
- (double)_bottomBarOffsetForTopBarHeight:(double)arg1;
- (BOOL)_canTransitionToState:(long long)arg1 withMinimumTopBarHeight:(double)arg2;
- (double)_constrainTopBarHeight:(double)arg1;
- (double)_constrainTopBarHeight:(double)arg1 withMinimumTopBarHeight:(double)arg2;
- (void)_displayLinkFired:(id)arg1;
- (void)_endDraggingWithVelocity:(double)arg1;
- (void)_moveBarsWithDelta:(double)arg1;
- (void)_setInSteadyState:(BOOL)arg1;
- (void)_transitionToSteadyState;
- (void)_updateDisplayLink;
- (void)_updateOutputs;
- (void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2;
- (void)beginDraggingWithOffset:(double)arg1;
- (BOOL)canTransitionToState:(long long)arg1;
- (void)dealloc;
- (void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2;
- (void)endScrolling;
- (id)init;
- (void)setBottomBarOffset:(double)arg1 forState:(long long)arg2;
- (void)setTopBarHeight:(double)arg1 forState:(long long)arg2;
- (void)updateDraggingWithOffset:(double)arg1;

@end

