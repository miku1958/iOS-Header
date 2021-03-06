//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBUIWorkspaceAnimationController.h>

#import <SpringBoard/SBUIAnimationControllerObserver-Protocol.h>

@class NSString, SBMainSwitcherViewController;

@interface SBUISwitcherAnimationController : SBUIWorkspaceAnimationController <SBUIAnimationControllerObserver>
{
    BOOL _interruptible;
    SBMainSwitcherViewController *_switcherViewController;
    CDUnknownBlockType _animationBlock;
}

@property (nonatomic, getter=_isInterruptible, setter=_setInterruptible:) BOOL _interruptible; // @synthesize _interruptible;
@property (copy, nonatomic) CDUnknownBlockType animationBlock; // @synthesize animationBlock=_animationBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) SBMainSwitcherViewController *switcherViewController; // @synthesize switcherViewController=_switcherViewController;

- (void).cxx_destruct;
- (void)_addSignpostsForAnimationEnd;
- (void)_addSignpostsForAnimationStart;
- (void)_didComplete;
- (id)_layoutState;
- (id)_previousLayoutState;
- (void)_startAnimation;
- (void)_updatePPTsForAnimationEnd;
- (void)_updatePPTsForAnimationStart;
- (void)animationControllerDidFinishAnimation:(id)arg1;
- (id)animationSettings;
- (id)initWithWorkspaceTransitionRequest:(id)arg1 switcherViewController:(id)arg2 childAnimationControllers:(id)arg3 animationBlock:(CDUnknownBlockType)arg4;
- (BOOL)isInterruptible;
- (BOOL)isReasonableMomentToInterrupt;
- (BOOL)shouldResignActiveForAnimation;

@end

