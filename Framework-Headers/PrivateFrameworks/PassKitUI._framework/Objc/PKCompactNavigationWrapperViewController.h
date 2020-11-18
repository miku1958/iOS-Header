//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@interface PKCompactNavigationWrapperViewController : UIViewController
{
    BOOL _hasExplicitTargetNavigationHeight;
    UIViewController *_wrappedViewController;
    double _targetNavigationHeight;
}

@property (readonly, nonatomic) BOOL hasExplicitTargetNavigationHeight; // @synthesize hasExplicitTargetNavigationHeight=_hasExplicitTargetNavigationHeight;
@property (nonatomic) double targetNavigationHeight; // @synthesize targetNavigationHeight=_targetNavigationHeight;
@property (readonly, nonatomic) UIViewController *wrappedViewController; // @synthesize wrappedViewController=_wrappedViewController;

- (void).cxx_destruct;
- (void)_setContentOverlayInsets:(struct UIEdgeInsets)arg1;
- (struct CGRect)_wrappedViewControllerFrameForBounds:(struct CGRect)arg1;
- (id)childViewControllerForHomeIndicatorAutoHidden;
- (id)childViewControllerForScreenEdgesDeferringSystemGestures;
- (id)childViewControllerForStatusBarHidden;
- (id)childViewControllerForStatusBarStyle;
- (id)childViewControllerForWhitePointAdaptivityStyle;
- (void)didMoveToParentViewController:(id)arg1;
- (unsigned long long)edgesForExtendedLayout;
- (BOOL)extendedLayoutIncludesOpaqueBars;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithViewController:(id)arg1;
- (void)loadView;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillLayoutSubviews;

@end
