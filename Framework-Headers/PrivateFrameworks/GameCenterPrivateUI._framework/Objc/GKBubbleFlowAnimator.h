//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/UINavigationControllerDelegate-Protocol.h>
#import <GameCenterPrivateUI/UITabBarControllerDelegate-Protocol.h>

@class GKBubbleSet, NSString;

@interface GKBubbleFlowAnimator : NSObject <UINavigationControllerDelegate, UITabBarControllerDelegate>
{
    GKBubbleSet *_mostRecentOverlayBubbleSet;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) GKBubbleSet *mostRecentOverlayBubbleSet; // @synthesize mostRecentOverlayBubbleSet=_mostRecentOverlayBubbleSet;
@property (readonly) Class superclass;
@property (readonly) Class superclass;

+ (id)sharedAnimator;
- (void)_addKeyframesForAnimatingBubblePathsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesComingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesGoingOffscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithBubblesStayingOnscreenAndInfo:(id)arg1;
- (void)_addKeyframesForBubbleControlAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomFromAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForCustomToAnimationsForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeInForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForSubviewsToFadeOutForTransitionWithInfo:(id)arg1;
- (void)_addKeyframesForViewCrossfadeForTransitionWithInfo:(id)arg1;
- (void)_animateBubblesTransitionWithInfo:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_cleanupSubviewsWeFadedOutForTransitionWithInfo:(id)arg1;
- (void)_finalPreparationsBeforeBeginningTransitionWithInfo:(id)arg1;
- (void)_finishTransitionWithInfo:(id)arg1;
- (void)_moveBubblesToTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (BOOL)_navigationControllerShouldUseBuiltinInteractionController:(id)arg1;
- (id)_pathTransitionInfoFromPathAnimator:(id)arg1 forTransitionWithInfo:(id)arg2;
- (void)_prepareTransitionWithInfo:(id)arg1;
- (void)_resetContentInBubbles:(id)arg1 viewController:(id)arg2 adoptionFlags:(CDStruct_b207fc29)arg3;
- (void)_returnBubblesFromTransitionView:(id)arg1 forTransitionWithInfo:(id)arg2;
- (id)_savvyViewControllerForViewController:(id)arg1 fromViewController:(id)arg2;
- (void)_stopIdleAnimatingOffscreenBubblesAfterTransitionWithInfo:(id)arg1;
- (void)_syncBubbleVisibilityWithInfo:(id)arg1;
- (id)_transitionInfoForBubbleFlowInvalidationOfViewController:(id)arg1;
- (id)_transitionInfoForBubbleFlowSimpleUpdateOfViewController:(id)arg1;
- (void)animateBubblesFromViewController:(id)arg1 toViewController:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)invalidateBubblePositionsForViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
- (void)overlayViewNeedsUpdateForRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (union _GLKVector3)restingWorldPositionForBubble:(id)arg1 viewController:(id)arg2 forTransitionWithInfo:(id)arg3 getFrame:(struct CGRect *)arg4;
- (long long)syncOverlayViewBubbles:(id)arg1 withViewController:(id)arg2;
- (id)tabBarController:(id)arg1 animatorForFromViewController:(id)arg2 toViewController:(id)arg3;
- (id)transitionInfoForBubbleFlowTransitionFromViewController:(id)arg1 toViewController:(id)arg2;

@end
