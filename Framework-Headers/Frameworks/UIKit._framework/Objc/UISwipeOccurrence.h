//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UISwipeActionPullViewDelegate-Protocol.h>

@class NSIndexPath, NSString, UIContextualAction, UISwipeActionController, UISwipeActionPullView, UIView;
@protocol _UISwipeViewManipulator, _UISwipedView;

@interface UISwipeOccurrence : NSObject <UISwipeActionPullViewDelegate>
{
    struct {
        unsigned int isTransitioning:1;
        unsigned int didNotifyWillFinish:1;
        unsigned int didNotifyDidFinish:1;
        unsigned int shouldReenableUserInteraction:1;
        unsigned int isRTL:1;
        unsigned int hasAmbiguousIndexPath:1;
        unsigned int didReloadData:1;
    } _flags;
    unsigned long long _actionExecutionCounter;
    UISwipeActionController *_controller;
    unsigned long long _style;
    unsigned long long _defaultStyle;
    UISwipeActionPullView *_leadingPullView;
    UISwipeActionPullView *_trailingPullView;
    id<_UISwipeViewManipulator> _manipulator;
    BOOL _swipedViewMaskWasRemoved;
    BOOL _active;
    NSIndexPath *_indexPath;
    long long _direction;
    double _offset;
    long long _state;
    unsigned long long _configuredDirection;
    UIView<_UISwipedView> *_swipedView;
    UIContextualAction *_currentAction;
    struct UIEdgeInsets _extraInsets;
    CDStruct_9b6dff2a _currentSwipeInfo;
}

@property (nonatomic) BOOL active; // @synthesize active=_active;
@property (nonatomic) unsigned long long configuredDirection; // @synthesize configuredDirection=_configuredDirection;
@property (strong, nonatomic) UIContextualAction *currentAction; // @synthesize currentAction=_currentAction;
@property (nonatomic) CDStruct_9b6dff2a currentSwipeInfo; // @synthesize currentSwipeInfo=_currentSwipeInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long direction; // @synthesize direction=_direction;
@property (nonatomic) struct UIEdgeInsets extraInsets; // @synthesize extraInsets=_extraInsets;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property (nonatomic) double offset; // @synthesize offset=_offset;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIView<_UISwipedView> *swipedView; // @synthesize swipedView=_swipedView;
@property (nonatomic) BOOL swipedViewMaskWasRemoved; // @synthesize swipedViewMaskWasRemoved=_swipedViewMaskWasRemoved;

- (void).cxx_destruct;
- (id)_actionView;
- (BOOL)_didReloadData;
- (void)_executeLifecycleForPerformedAction:(id)arg1 sourceView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (double)_extraOffsetForOffset:(double)arg1 withDirection:(unsigned long long)arg2;
- (void)_forceTeardown;
- (struct CGRect)_frameForPullView:(id)arg1 inSwipedItem:(id)arg2 withContainer:(id)arg3;
- (void)_freezeSwipedViewInsets;
- (BOOL)_hasAmbiguousIndexPath;
- (BOOL)_isSwipeDirectionExposingLeadingEdgePullView:(unsigned long long)arg1;
- (void)_moveItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 alongsideAnimations:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performSwipeAction:(id)arg1 inPullView:(id)arg2 swipeInfo:(CDStruct_9b6dff2a)arg3;
- (id)_pullViewForLeadingEdge:(BOOL)arg1;
- (id)_pullViewForSwipeDirection:(unsigned long long)arg1;
- (void)_removeAndResetPullViewImmediately:(id)arg1;
- (void)_resetItemWithSwipeInfo:(CDStruct_9b6dff2a)arg1 animated:(BOOL)arg2 deletion:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setDidReloadData;
- (void)_setHasAmbiguousIndexPath;
- (unsigned long long)_styleForConfiguration:(id)arg1;
- (unsigned long long)_swipeDirectionForPullView:(id)arg1;
- (void)_transitionToState:(long long)arg1;
- (void)_unfreezeSwipedViewInsets;
- (void)_updateLayoutUsingCurrentSwipeInfo:(BOOL)arg1;
- (void)_updatePullView:(id)arg1;
- (void)_updateSwipedStateOnSwipedView:(BOOL)arg1;
- (id)actionView;
- (void)beginSwipeTracking:(BOOL)arg1;
- (double)confirmationDistanceForPrimaryActionInSwipeActionPullView:(id)arg1;
- (void)endSwipe;
- (id)initWithController:(id)arg1 indexPath:(id)arg2 defaultStyle:(unsigned long long)arg3;
- (id)lockActionViewForAnimation;
- (void)performPrimaryActionWithSwipeInfo:(CDStruct_9b6dff2a)arg1;
- (CDStruct_324b76a9)prepareWithSwipeDirection:(unsigned long long)arg1 configuration:(id)arg2;
- (void)resetAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)setupManipulatorWithController:(id)arg1;
- (BOOL)shouldDismissWithTouchLocation:(struct CGPoint)arg1;
- (void)swipeActionPullView:(id)arg1 tappedAction:(id)arg2;
- (struct CGRect)swipedViewRestingFrame;
- (void)unlockActionViewForAnimation:(id)arg1;
- (void)updateLayout;
- (void)updateOffsetWithSwipeInfo:(CDStruct_9b6dff2a)arg1 isTracking:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)updateSwipedView;
- (double)velocity;

@end

