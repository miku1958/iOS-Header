//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterPrivateUI/GKBubbleFlowRootViewController.h>

@class _GKBubbleFlowPseudoModalViewController;

@interface _GKBubbleFlowOnDemandFormSheetViewController : GKBubbleFlowRootViewController
{
    BOOL _falseDismissSkippedOrCompleted;
    _GKBubbleFlowPseudoModalViewController *_pseudoModalViewController;
}

@property (nonatomic) BOOL falseDismissSkippedOrCompleted; // @synthesize falseDismissSkippedOrCompleted=_falseDismissSkippedOrCompleted;
@property (strong, nonatomic) _GKBubbleFlowPseudoModalViewController *pseudoModalViewController; // @synthesize pseudoModalViewController=_pseudoModalViewController;

- (void)_cleanUpOurPresentedModalSetupRootViewControllerIfNecessaryAnimated:(BOOL)arg1;
- (void)_ensureWeHaveAPresentedModalSetupRootViewControllerToPresent:(id)arg1 andThen:(CDUnknownBlockType)arg2 animated:(BOOL)arg3;
- (BOOL)_obscuringContentUnderneath;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)isCoveringContentUnderneath;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;

@end
