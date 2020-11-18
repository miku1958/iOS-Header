//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationShortLookViewController.h>

@class UIView;

@interface NCLegacyNotificationShortLookViewController : NCNotificationShortLookViewController
{
    UIView *_backgroundView;
}

@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;

- (void).cxx_destruct;
- (void)_backgroundTapGesture:(id)arg1;
- (void)_configureScrollViewIfNecessary;
- (void)_finishAdditionalContentReveal;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (id)_legacyLookViewIfLoaded;
- (void)_loadLookView;
- (id)_newTransitionManager;
- (void)_notificationViewControllerViewDidLoad;
- (struct CGSize)_preferredCustomContentSizeForSize:(struct CGSize)arg1;
- (void)_resizeLegacyScrollViewToFitContentSize;
- (void)_resizeLegacyScrollViewToFitContentSizeWithKeyboardFrame:(struct CGRect)arg1;
- (void)_setCustomContentProvidingViewController:(id)arg1;
- (void)_setupCustomContentProvider;
- (BOOL)_tryDismissingShortLookInScrollView:(id)arg1;
- (void)_updateScrollViewContentSize;
- (void)_updateWithProvidedCustomContent;
- (BOOL)dismissPresentedViewControllerAndClearNotification:(BOOL)arg1 animated:(BOOL)arg2;
- (void)expandAndPlayAudioMessage;
- (BOOL)hasCommittedToPresentingCustomContentProvidingViewController;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentLongLook:(CDUnknownBlockType)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (BOOL)shouldAutomaticallyForwardAppearanceMethods;
- (void)transitioningDelegate:(id)arg1 didFinishDismissalOfViewController:(id)arg2 completed:(BOOL)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

