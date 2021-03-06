//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBFluidSwitcherViewController.h>

#import <SpringBoard/SBSwitcherAppSuggestionViewControllerDelegate-Protocol.h>

@class NSString, SBSwitcherAppSuggestionViewController;

@interface SBDeckSwitcherViewController : SBFluidSwitcherViewController <SBSwitcherAppSuggestionViewControllerDelegate>
{
    SBSwitcherAppSuggestionViewController *_appSuggestionController;
}

@property (strong, nonatomic) SBSwitcherAppSuggestionViewController *appSuggestionController; // @synthesize appSuggestionController=_appSuggestionController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_setBestAppSuggestion:(id)arg1 animationCompletion:(CDUnknownBlockType)arg2;
- (id)bestAppSuggestion;
- (void)handleGestureDidBegin:(id)arg1;
- (id)initWithRootModifier:(id)arg1 liveContentOverlayCoordinator:(id)arg2 debugName:(id)arg3;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2;
- (void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2;
- (long long)orientationForSuggestionViewController:(id)arg1;
- (void)performTransitionWithContext:(id)arg1 animated:(BOOL)arg2 alongsideAnimationHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setBestAppSuggestion:(id)arg1;
- (void)suggestionViewController:(id)arg1 activatedSuggestion:(id)arg2;
- (void)viewWillLayoutSubviews;

@end

