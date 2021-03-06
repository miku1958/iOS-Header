//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@protocol PLExpandableViewDelegate;

@interface PLExpandableView : UIView
{
    id<PLExpandableViewDelegate> _delegate;
    CDUnknownBlockType _collapsingCompletionHandler;
    CDUnknownBlockType _expansionCompletionHandler;
    struct CGRect _contractedFrame;
    struct CGRect _expandedFrame;
    struct CGPoint _leftTouchLocation;
    struct CGPoint _rightTouchLocation;
    struct CGPoint _previousLeftLocation;
    struct CGPoint _previousRightLocation;
    unsigned long long _leftTouchIndex;
    unsigned long long _rightTouchIndex;
    double _pinchVelocity;
    double _trackingTimeInterval;
    double _expansionFraction;
    struct {
        unsigned int state:3;
        unsigned int prevState:3;
        unsigned int tracking:1;
        unsigned int autorotationDisabled:1;
        unsigned int animationDisabled:1;
        unsigned int updateContractedFrame:1;
        unsigned int updateExpandedFrame:1;
        unsigned int allowsExpansion:1;
        unsigned int delegateWillBeginExpanding:1;
        unsigned int delegateWillCompleteExpanding:1;
        unsigned int delegateDidCompleteExpanding:1;
        unsigned int delegateWillCancelExpanding:1;
        unsigned int delegateDidCancelExpanding:1;
        unsigned int delegateDidBeginCollapsing:1;
        unsigned int delegateWillCompleteCollapsing:1;
        unsigned int delegateDidCompleteCollapsing:1;
        unsigned int delegateWillCancelCollapsing:1;
        unsigned int delegateDidCancelCollapsing:1;
        unsigned int delegateExpandedFractionChanged:1;
    } _expandFlags;
}

@property (nonatomic) BOOL allowsExpansion;
@property (nonatomic) struct CGRect contractedFrame;
@property (nonatomic) struct CGRect expandedFrame;

- (BOOL)_canPinch;
- (void)_notifyDidCancelCollapsing;
- (void)_notifyDidCancelExpanding;
- (void)_notifyDidCompleteCollapsing;
- (void)_notifyDidCompleteExpanding;
- (void)_notifyWillBeginCollapsing;
- (void)_notifyWillBeginExpanding;
- (void)_notifyWillCancelCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCancelExpandingWithDuration:(double)arg1;
- (void)_notifyWillCompleteCollapsingWithDuration:(double)arg1;
- (void)_notifyWillCompleteExpandingWithDuration:(double)arg1;
- (void)_setAutorotationDisabled:(BOOL)arg1;
- (void)_transitionFromCancelContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCancelExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteContract:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromCompleteExpand:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracted:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromContracting:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanded:(int)arg1 withDuration:(double)arg2;
- (void)_transitionFromExpanding:(int)arg1 withDuration:(double)arg2;
- (void)beginTrackingPinch:(id)arg1;
- (BOOL)canCollapse;
- (void)canceledPinch:(id)arg1;
- (void)collapseWithAnimation:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (float)completeTrackingPinch:(id)arg1 toState:(int)arg2 duration:(double)arg3;
- (float)continueTrackingPinch:(id)arg1;
- (void)continuedPinch:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didMoveToWindow;
- (void)expandWithAnimation:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (double)expansionFraction;
- (void)finishTransition;
- (void)finishTransitionToState:(int)arg1;
- (void)finishedPinch:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isTracking;
- (void)notifyExpansionFraction:(float)arg1 force:(BOOL)arg2;
- (struct CGRect)pinchRect:(struct CGRect)arg1 inView:(id)arg2 insetTouches:(BOOL)arg3;
- (int)previousState;
- (void)setDelegate:(id)arg1;
- (void)setExpansionFraction:(double)arg1;
- (void)setState:(int)arg1 withDuration:(double)arg2;
- (int)snapState:(BOOL)arg1;
- (void)startedPinch:(id)arg1;
- (int)state;
- (void)stateDidChangeFrom:(int)arg1;
- (void)stateWillChangeTo:(int)arg1;
- (void)updatePinchState:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

