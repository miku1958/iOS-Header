//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, SBFolderControllerAnimationContext, SBHIconAnimationSettings, SBValueConvergenceAnimator, UIView;
@protocol SBIconAnimationContaining, SBIconAnimatorDelegate;

@interface SBIconAnimator : NSObject
{
    double _fraction;
    double _hintFraction;
    BOOL _startAnimationAfterRotationEnds;
    BOOL _windowIsRotating;
    BOOL _cleanedUp;
    unsigned long long _animationCount;
    NSMutableArray *_pendedAnimationContexts;
    SBFolderControllerAnimationContext *_animationContext;
    BOOL _invalidated;
    id<SBIconAnimatorDelegate> _delegate;
    SBHIconAnimationSettings *_settings;
    SBValueConvergenceAnimator *_hintAnimator;
    UIView *_backgroundDarkeningView;
    id<SBIconAnimationContaining> _animationContainer;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;
@property (readonly, nonatomic) id<SBIconAnimationContaining> animationContainer; // @synthesize animationContainer=_animationContainer;
@property (strong, nonatomic) UIView *backgroundDarkeningView; // @synthesize backgroundDarkeningView=_backgroundDarkeningView;
@property (weak, nonatomic) id<SBIconAnimatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) double fraction;
@property (strong, nonatomic) SBValueConvergenceAnimator *hintAnimator; // @synthesize hintAnimator=_hintAnimator;
@property (nonatomic) double hintFraction; // @synthesize hintFraction=_hintFraction;
@property (nonatomic) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly, nonatomic, getter=isPastPointOfNoReturn) BOOL pastPointOfNoReturn;
@property (readonly, nonatomic) UIView *referenceView;
@property (strong, nonatomic) SBHIconAnimationSettings *settings; // @synthesize settings=_settings;

- (void).cxx_destruct;
- (void)_animateToFraction:(double)arg1 afterDelay:(double)arg2 withSharedCompletion:(CDUnknownBlockType)arg3;
- (void)_animateToFractionFromContext:(id)arg1;
- (void)_animateToFractionFromPendingContexts;
- (void)_cleanupAnimation;
- (void)_invalidateCompletions;
- (BOOL)_isDelayedForRotation;
- (unsigned long long)_numberOfSignificantAnimations;
- (void)_prepareAnimation;
- (void)_setAnimationFraction:(double)arg1;
- (void)_windowFinishedRotating;
- (void)animateToFraction:(double)arg1 afterDelay:(double)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)centralAnimationFactory;
- (void)cleanup;
- (void)dealloc;
- (void)hintToFraction:(double)arg1;
- (id)initWithAnimationContainer:(id)arg1;
- (void)prepare;

@end
