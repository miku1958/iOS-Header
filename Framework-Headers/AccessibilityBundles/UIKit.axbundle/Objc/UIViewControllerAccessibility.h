//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIViewControllerAccessibility_super.h>

@interface UIViewControllerAccessibility : __UIViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityDidLoadAccessibilityInformation;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityPresentsAsPopup;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (id)_accessibilitySpeakThisView;
- (id)_accessibilitySpeakThisViewController;
- (id)_accessibilitySpeakThisViews;
- (id)_accessibilityUserTestingViewControllerInfo;
- (void)_presentViewController:(id)arg1 modalSourceViewController:(id)arg2 presentationController:(id)arg3 animationController:(id)arg4 interactionController:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_primitiveSetNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;
- (void)_setAccessibilityDidLoadAccessibilityInformation:(BOOL)arg1;
- (void)_setNavigationControllerContentInsetAdjustment:(struct UIEdgeInsets)arg1;
- (BOOL)accessibilityPostScreenChangedForChildViewController:(id)arg1 isAddition:(BOOL)arg2;
- (BOOL)accessibilityScroll:(long long)arg1;
- (void)dismissViewControllerAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dismissViewControllerWithTransition:(int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performSegueWithIdentifier:(id)arg1 sender:(id)arg2;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)presentViewController:(id)arg1 withTransition:(int)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAccessibilityLabel:(id)arg1;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

