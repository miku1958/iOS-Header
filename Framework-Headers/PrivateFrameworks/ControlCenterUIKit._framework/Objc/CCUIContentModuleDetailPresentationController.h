//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPresentationController.h>

#import <ControlCenterUIKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UIViewController;

@interface CCUIContentModuleDetailPresentationController : UIPresentationController <UIGestureRecognizerDelegate>
{
    UIViewController *_anchoringViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleBackgroundTap:(id)arg1;
- (double)_preferredExpandedContentHeightForViewController:(id)arg1;
- (double)_preferredExpandedContentWidthForViewController:(id)arg1;
- (BOOL)_shouldRespectDefinesPresentationContext;
- (void)containerViewWillLayoutSubviews;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2 anchoringViewController:(id)arg3;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)presentationTransitionWillBegin;
- (BOOL)shouldPresentInFullscreen;

@end

