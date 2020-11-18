//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKViewController.h>

@class GKBubbleFlowAnimator;

@interface GKBubbleFlowRootViewController : GKViewController
{
    GKBubbleFlowAnimator *_animator;
    BOOL _showingInterstitial;
    BOOL _coveringContentUnderneath;
    BOOL _currentlyAnimatingADismiss;
}

@property (strong, nonatomic) GKBubbleFlowAnimator *animator; // @synthesize animator=_animator;
@property (readonly, nonatomic, getter=isCoveringContentUnderneath) BOOL coveringContentUnderneath; // @synthesize coveringContentUnderneath=_coveringContentUnderneath;
@property (nonatomic, getter=isCurrentlyAnimatingADismiss) BOOL currentlyAnimatingADismiss; // @synthesize currentlyAnimatingADismiss=_currentlyAnimatingADismiss;
@property (nonatomic, getter=isShowingInterstitial) BOOL showingInterstitial; // @synthesize showingInterstitial=_showingInterstitial;

+ (BOOL)_useTwoPartBubbleFlowModalPresentation;
+ (id)sharedBubbleFlowRootViewController;
- (void)_updateViewAlpha:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)clearInterstitialViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)popAllModalViewControllersAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)pseudoModalViewController;
- (void)showInterstitialViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)viewDidLoad;

@end
