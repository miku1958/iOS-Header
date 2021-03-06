//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CADisplayLink, NSMutableArray, UIKBKeyViewAnimator, UIKBTree, UIView;
@protocol UIKeyboardKeyplaneTransitionDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardKeyplaneTransition : NSObject
{
    double _currentProgress;
    double _liftOffProgress;
    double _finishProgress;
    double _finishDuration;
    double _finalTransitionStartTime;
    CADisplayLink *_displayLink;
    UIKBTree *_keyboard;
    UIKBTree *_start;
    UIKBTree *_end;
    UIView *_startView;
    UIView *_endView;
    CDUnknownBlockType _completionBlock;
    id<UIKeyboardKeyplaneTransitionDelegate> _transitionDelegate;
    BOOL _initiallyAtEnd;
    NSMutableArray *_transitionViews;
    UIKBKeyViewAnimator *_keyViewAnimator;
}

@property (copy) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, nonatomic) double endHeight;
@property (nonatomic) BOOL initiallyAtEnd; // @synthesize initiallyAtEnd=_initiallyAtEnd;
@property (strong, nonatomic) UIKBKeyViewAnimator *keyViewAnimator; // @synthesize keyViewAnimator=_keyViewAnimator;
@property (strong, nonatomic) UIKBTree *keyboard; // @synthesize keyboard=_keyboard;
@property (readonly, nonatomic) double nonInteractiveDuration;
@property (readonly, nonatomic) double startHeight;
@property (nonatomic) id<UIKeyboardKeyplaneTransitionDelegate> transitionDelegate; // @synthesize transitionDelegate=_transitionDelegate;

- (void)addTransitionView:(id)arg1 startFrame:(struct CGRect)arg2 endFrame:(struct CGRect)arg3;
- (BOOL)canDisplayTransitionFromKeyplane:(id)arg1 toKeyplane:(id)arg2;
- (void)cancelNonInteractiveAnimation;
- (void)commitTransitionRebuild;
- (void)dealloc;
- (void)finalizeTransition;
- (void)finishWithProgress:(double)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)rebuildWithStartKeyplane:(id)arg1 startView:(id)arg2 endKeyplane:(id)arg3 endView:(id)arg4;
- (void)removeAllAnimations;
- (void)runNonInteractivelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)transitionToFinalState:(id)arg1;
- (void)updateWithProgress:(double)arg1;

@end

