//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UINavigationControllerAccessibility_super.h>

@interface UINavigationControllerAccessibility : __UINavigationControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilitySpeakThisViewController;
- (id)_popViewControllerWithTransition:(int)arg1 allowPoppingLast:(BOOL)arg2;
- (BOOL)accessibilityPerformEscape;
- (void)navigationBar:(id)arg1 buttonClicked:(int)arg2;
- (void)navigationTransitionView:(id)arg1 didStartTransition:(long long)arg2;
- (void)pushViewController:(id)arg1 transition:(int)arg2 forceImmediate:(BOOL)arg3;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;

@end

