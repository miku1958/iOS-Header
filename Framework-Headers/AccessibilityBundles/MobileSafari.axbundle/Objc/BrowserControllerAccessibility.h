//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__BrowserControllerAccessibility_super.h"

@interface BrowserControllerAccessibility : __BrowserControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (id)accessibilityFocusedBrowserController;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityKeyboardDidHide:(id)arg1;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateVisibleContentInset;
- (void)_axUpdateVisibleContentInsetForScrollView:(id)arg1;
- (void)_initSubviews;
- (void)_setContentInsetAdjustments:(struct UIEdgeInsets)arg1 forScrollView:(id)arg2;
- (void)_setShowingSidebar:(BOOL)arg1;
- (id)accessibilityActiveTabDocument;
- (id)accessibilityCurrentWebView;
- (BOOL)accessibilityPerformEscape;
- (void)dealloc;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)setShowingReader:(BOOL)arg1 animated:(BOOL)arg2;
- (void)sidebarDimmingViewDismiss:(id)arg1;
- (void)togglePrivateBrowsingEnabled;

@end

