//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardHome/SBNestingViewController.h>

#import <SpringBoardHome/SBFolderControllerBackgroundViewDelegate-Protocol.h>

@class SBFolderContainerView, SBFolderController;
@protocol SBFolderPresentingViewControllerDelegate, UIViewControllerAnimatedTransitioning;

@interface SBFolderPresentingViewController : SBNestingViewController <SBFolderControllerBackgroundViewDelegate>
{
    id<SBFolderPresentingViewControllerDelegate> _folderPresentationDelegate;
    unsigned long long _backgroundEffect;
    id<UIViewControllerAnimatedTransitioning> _currentFolderAnimator;
}

@property (nonatomic) unsigned long long backgroundEffect; // @synthesize backgroundEffect=_backgroundEffect;
@property (strong, nonatomic) id<UIViewControllerAnimatedTransitioning> currentFolderAnimator; // @synthesize currentFolderAnimator=_currentFolderAnimator;
@property (weak, nonatomic) id<SBFolderPresentingViewControllerDelegate> folderPresentationDelegate; // @synthesize folderPresentationDelegate=_folderPresentationDelegate;
@property (readonly, nonatomic) SBFolderController *presentedFolderController;
@property (readonly, nonatomic) SBFolderContainerView *view;

- (void).cxx_destruct;
- (BOOL)_canShowWhileLocked;
- (void)dismissPresentedFolderControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)loadView;
- (double)minimumHomeScreenScaleForFolderControllerBackgroundView:(id)arg1;
- (id)nestingViewController:(id)arg1 animationControllerForOperation:(long long)arg2 onViewController:(id)arg3 animated:(BOOL)arg4;
- (id)nestingViewController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)nestingViewController:(id)arg1 sourceViewForPresentingViewController:(id)arg2;
- (void)nestingViewController:(id)arg1 willPerformOperation:(long long)arg2 onViewController:(id)arg3 withTransitionCoordinator:(id)arg4;
- (void)presentFolderController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

