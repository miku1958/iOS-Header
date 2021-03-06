//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/_TVStackTemplateController.h>

@class CAGradientLayer, NSArray, UIView, UIViewController;
@protocol VUIProductUberBackgroundInterface;

__attribute__((visibility("hidden")))
@interface VUIProductShowcaseViewController : _TVStackTemplateController
{
    BOOL _lightStatusBar;
    UIViewController<VUIProductUberBackgroundInterface> *_productBanner;
    UIView *_navBarGradientView;
    CAGradientLayer *_gradientLayer;
    NSArray *_navBarButtons;
    UIView *_transitionBackgroundView;
}

@property (strong, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property (nonatomic) BOOL lightStatusBar; // @synthesize lightStatusBar=_lightStatusBar;
@property (strong, nonatomic) NSArray *navBarButtons; // @synthesize navBarButtons=_navBarButtons;
@property (strong, nonatomic) UIView *navBarGradientView; // @synthesize navBarGradientView=_navBarGradientView;
@property (strong, nonatomic) UIViewController<VUIProductUberBackgroundInterface> *productBanner; // @synthesize productBanner=_productBanner;
@property (strong, nonatomic) UIView *transitionBackgroundView; // @synthesize transitionBackgroundView=_transitionBackgroundView;

- (void).cxx_destruct;
- (void)_configureBannerView:(id)arg1;
- (void)_configureNavigationBarGradient;
- (void)_configureTransitionBackgroundView;
- (id)_gradientLayer;
- (void)_handleAppWillEnterForeground:(id)arg1;
- (void)_handleAutoHighlightScroll:(id)arg1;
- (long long)_overrideLargeTitleDisplayMode;
- (void)_setUserActivityData;
- (void)_setupProductBanner;
- (void)configureAppearanceTransition;
- (long long)preferredStatusBarStyle;
- (long long)preferredStatusBarUpdateAnimation;
- (void)scrollViewDidScroll:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateWithViewElement:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;

@end

