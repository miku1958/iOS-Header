//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKViewController.h>

@class NSLayoutConstraint, UIScrollView, UIView;
@protocol HROnboardingPageViewControllerDelegate;

@interface HROnboardingBaseViewController : HKViewController
{
    BOOL _onboarding;
    UIView *_contentView;
    UIScrollView *_scrollView;
    long long _leftButtonType;
    long long _rightButtonType;
    id<HROnboardingPageViewControllerDelegate> _delegate;
    UIView *_footerView;
    NSLayoutConstraint *_scrollViewBottomConstraint;
}

@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (strong, nonatomic) id<HROnboardingPageViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIView *footerView; // @synthesize footerView=_footerView;
@property (nonatomic) long long leftButtonType; // @synthesize leftButtonType=_leftButtonType;
@property (readonly, nonatomic, getter=isOnboarding) BOOL onboarding; // @synthesize onboarding=_onboarding;
@property (nonatomic) long long rightButtonType; // @synthesize rightButtonType=_rightButtonType;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (strong, nonatomic) NSLayoutConstraint *scrollViewBottomConstraint; // @synthesize scrollViewBottomConstraint=_scrollViewBottomConstraint;

- (void).cxx_destruct;
- (void)_adjustScrollViewForFooterView;
- (id)_buttonForButtonType:(long long)arg1;
- (id)_closeButton;
- (id)_onboardingAtrialFibrillationDetectionCancelButton;
- (id)_onboardingElectrocardiogramCancelButton;
- (void)_setUpNavigationBar;
- (id)_skipButton;
- (id)_titleFontTextStyle;
- (double)_titleTopToFirstBaselineLeading;
- (void)closeButtonTapped:(id)arg1;
- (id)initForOnboarding:(BOOL)arg1;
- (void)onboardingAtrialFibrillationDetectionCancelButtonTapped:(id)arg1;
- (void)onboardingElectrocardiogramCancelButtonTapped:(id)arg1;
- (void)presentAlertWithMessage:(id)arg1;
- (void)presentLearnMoreAlertWithMessage:(id)arg1 learnMoreTapped:(CDUnknownBlockType)arg2;
- (void)removeFooterView;
- (void)setFooterView:(id)arg1 insets:(struct NSDirectionalEdgeInsets)arg2;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)skipButtonTapped:(id)arg1;
- (id)titleFont;
- (double)titleTopToFirstBaseline;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

