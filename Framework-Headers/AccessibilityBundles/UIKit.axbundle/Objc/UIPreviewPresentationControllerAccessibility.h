//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIPreviewPresentationControllerAccessibility_super.h>

@interface UIPreviewPresentationControllerAccessibility : __UIPreviewPresentationControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityDismissPresentation;
- (BOOL)_axPerformLeadingAction;
- (BOOL)_axPerformTrailingAction;
- (void)_axSetupContainerView;
- (BOOL)_axShowMoreActions:(id)arg1;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)arg1;
- (void)containerViewWillLayoutSubviews;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;
- (void)presentationTransitionWillBegin;
- (void)updateSwipeActionsIfApplicable;

@end

