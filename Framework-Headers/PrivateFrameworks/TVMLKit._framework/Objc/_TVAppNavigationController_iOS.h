//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVAppNavigationController.h>

@interface _TVAppNavigationController_iOS : _TVAppNavigationController
{
    BOOL _shouldFakeStatusBarVisible;
    BOOL _shouldPreventContentFromShiftingVertically;
    BOOL _originalValueForNavigationBarForceFullHeightInLandscape;
}

@property (nonatomic) BOOL originalValueForNavigationBarForceFullHeightInLandscape; // @synthesize originalValueForNavigationBarForceFullHeightInLandscape=_originalValueForNavigationBarForceFullHeightInLandscape;
@property (nonatomic) BOOL shouldFakeStatusBarVisible; // @synthesize shouldFakeStatusBarVisible=_shouldFakeStatusBarVisible;
@property (nonatomic) BOOL shouldPreventContentFromShiftingVertically; // @synthesize shouldPreventContentFromShiftingVertically=_shouldPreventContentFromShiftingVertically;

- (id)_accessibilityButtonBackgroundDefaultTintColor;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (void)didPresentTraitsOverridingViewController;
- (void)didShowViewController:(id)arg1 animated:(BOOL)arg2;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)willPresentTraitsOverridingViewController;

@end
