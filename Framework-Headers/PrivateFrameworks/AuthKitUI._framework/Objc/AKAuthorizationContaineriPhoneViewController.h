//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AuthKitUI/AKAuthorizationContainerViewController.h>

#import <AuthKitUI/UIViewControllerTransitioningDelegate-Protocol.h>

@class NSString, UITapGestureRecognizer, UIVisualEffectView;

@interface AKAuthorizationContaineriPhoneViewController : AKAuthorizationContainerViewController <UIViewControllerTransitioningDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIVisualEffectView *_blurBackgroundView;
    struct CGSize _containerContentSize;
}

@property (strong, nonatomic) UIVisualEffectView *blurBackgroundView; // @synthesize blurBackgroundView=_blurBackgroundView;
@property (nonatomic) struct CGSize containerContentSize; // @synthesize containerContentSize=_containerContentSize;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_delegate_authorizationContainerViewControllerDidDismiss;
- (BOOL)_delegate_authorizationContainerViewControllerShouldDismiss;
- (struct CGRect)_dismissalFrameForContentSize:(struct CGSize)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_layoutContainerView:(BOOL)arg1;
- (struct CGRect)_layoutFrameForContentSize:(struct CGSize)arg1;
- (id)animationControllerForDismissedController:(id)arg1;
- (id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3;
- (id)init;
- (id)initWithRootViewController:(id)arg1 authorizationContext:(id)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)setContainerContentSize:(struct CGSize)arg1 animated:(BOOL)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end
