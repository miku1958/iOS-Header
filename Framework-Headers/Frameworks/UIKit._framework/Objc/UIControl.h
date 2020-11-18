//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface UIControl : UIView
{
    NSMutableArray *_targetActions;
    struct CGPoint _previousPoint;
    double _downTime;
    struct {
        unsigned int disabled:1;
        unsigned int tracking:1;
        unsigned int touchInside:1;
        unsigned int touchDragged:1;
        unsigned int requiresDisplayOnTracking:1;
        unsigned int highlighted:1;
        unsigned int dontHighlightOnTouchDown:1;
        unsigned int delayActions:1;
        unsigned int allowActionsToQueue:1;
        unsigned int pendingUnhighlight:1;
        unsigned int selected:1;
        unsigned int verticalAlignment:2;
        unsigned int horizontalAlignment:2;
        unsigned int wasLastHighlightSuccessful:1;
        unsigned int touchHasHighlighted:1;
    } _controlFlags;
}

@property (nonatomic) long long contentHorizontalAlignment; // @dynamic contentHorizontalAlignment;
@property (nonatomic) long long contentVerticalAlignment; // @dynamic contentVerticalAlignment;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @dynamic enabled;
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // @dynamic highlighted;
@property (nonatomic, getter=isSelected) BOOL selected; // @dynamic selected;
@property (readonly, nonatomic) unsigned long long state; // @dynamic state;
@property (readonly, nonatomic, getter=isTouchInside) BOOL touchInside; // @dynamic touchInside;
@property (readonly, nonatomic, getter=isTracking) BOOL tracking; // @dynamic tracking;

- (void).cxx_destruct;
- (void)_cancelDelayedActions;
- (struct CGRect)_clippedHighlightBounds;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)_delayActions;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (long long)_focusedSound;
- (BOOL)_hasActionForEventMask:(unsigned long long)arg1;
- (double)_highlightCornerRadius;
- (void)_sendActionsForEvents:(unsigned long long)arg1 withEvent:(id)arg2;
- (void)_sendDelayedActions;
- (void)_sendDelayedActions:(BOOL)arg1;
- (void)_setHighlightOnMouseDown:(BOOL)arg1;
- (void)_setLastHighlightSuccessful:(BOOL)arg1;
- (void)_setTouchHasHighlighted:(BOOL)arg1;
- (unsigned long long)_stateForFocusUpdateContext:(id)arg1;
- (BOOL)_touchHasHighlighted;
- (void)_unhighlight;
- (BOOL)_wasLastHighlightSuccessful;
- (id)actionsForTarget:(id)arg1 forControlEvent:(unsigned long long)arg2;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forEvents:(int)arg3;
- (unsigned long long)allControlEvents;
- (id)allTargets;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canBecomeFocused;
- (BOOL)cancelMouseTracking;
- (BOOL)cancelTouchTracking;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)hasOneOrMoreTargets;
- (id)hitTest:(struct CGPoint)arg1 forEvent:(struct __GSEvent *)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)pointMostlyInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (void)removeTarget:(id)arg1 forEvents:(int)arg2;
- (BOOL)requiresDisplayOnTracking;
- (void)sendAction:(SEL)arg1 to:(id)arg2 forEvent:(id)arg3;
- (void)sendActionsForControlEvents:(unsigned long long)arg1;
- (void)setRequiresDisplayOnTracking:(BOOL)arg1;
- (void)setTracking:(BOOL)arg1;
- (BOOL)shouldTrack;
- (BOOL)touchDragged;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

