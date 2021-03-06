//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBViewControllerReversibleAnimatedTransitioning-Protocol.h>

@class NSString;
@protocol SBHWidgetConfigurationAnimating;

@interface SBHWidgetConfigurationAnimatorAdapter : NSObject <SBViewControllerReversibleAnimatedTransitioning>
{
    id<SBHWidgetConfigurationAnimating> _animator;
    unsigned long long _transitionToken;
}

@property (readonly, nonatomic) id<SBHWidgetConfigurationAnimating> animator; // @synthesize animator=_animator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long transitionToken; // @synthesize transitionToken=_transitionToken;

- (void).cxx_destruct;
- (void)animateTransition:(id)arg1;
- (void)cancelTransition:(id)arg1 withCompletionSpeed:(double)arg2 completionCurve:(long long)arg3;
- (id)initWithAnimator:(id)arg1;
- (BOOL)supportsRestarting;
- (double)transitionDuration:(id)arg1;

@end

