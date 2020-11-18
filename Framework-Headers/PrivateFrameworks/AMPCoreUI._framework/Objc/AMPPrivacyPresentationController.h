//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <AMPCoreUI/UIAdaptivePresentationControllerDelegate-Protocol.h>

@class NSString, UIView;

@interface AMPPrivacyPresentationController : UIPresentationController <UIAdaptivePresentationControllerDelegate>
{
    UIView *_dimmingView;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct CGRect)_frameForTransitionViewInPresentationSuperview:(id)arg1;
- (void)_prepareDimmingViewIfNecessary;
- (long long)adaptivePresentationStyle;
- (long long)adaptivePresentationStyleForPresentationController:(id)arg1;
- (void)containerViewDidLayoutSubviews;
- (void)containerViewWillLayoutSubviews;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (id)presentationController:(id)arg1 viewControllerForAdaptivePresentationStyle:(long long)arg2;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldRemovePresentersView;

@end

