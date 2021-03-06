//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRLinkTextViewDelegate-Protocol.h>
#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HKElectrocardiogram, HROnboardingElectrocardiogramResultView, HRStackedButtonView, NSLayoutAnchor, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramPossibleResultsViewController : HROnboardingBaseViewController <HRLinkTextViewDelegate, HRStackedButtonViewDelegate>
{
    HKElectrocardiogram *_electrocardiogram;
    UILabel *_titleLabel;
    HROnboardingElectrocardiogramResultView *_sinusRhythmResultReview;
    HROnboardingElectrocardiogramResultView *_atrialFibrillationResultView;
    HROnboardingElectrocardiogramResultView *_highOrLowHeartRateResultView;
    HROnboardingElectrocardiogramResultView *_inconclusiveResultView;
    HROnboardingElectrocardiogramResultView *_onlyResultView;
    HROnboardingElectrocardiogramResultView *_bottomResultView;
    UILabel *_disclaimerLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutAnchor *_viewTopAnchor;
    NSLayoutConstraint *_contentViewBottomConstraint;
    NSLayoutConstraint *_disclaimerLabelTopConstraint;
}

@property (strong, nonatomic) HROnboardingElectrocardiogramResultView *atrialFibrillationResultView; // @synthesize atrialFibrillationResultView=_atrialFibrillationResultView;
@property (strong, nonatomic) HROnboardingElectrocardiogramResultView *bottomResultView; // @synthesize bottomResultView=_bottomResultView;
@property (strong, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property (strong, nonatomic) UILabel *disclaimerLabel; // @synthesize disclaimerLabel=_disclaimerLabel;
@property (strong, nonatomic) NSLayoutConstraint *disclaimerLabelTopConstraint; // @synthesize disclaimerLabelTopConstraint=_disclaimerLabelTopConstraint;
@property (strong, nonatomic) HKElectrocardiogram *electrocardiogram; // @synthesize electrocardiogram=_electrocardiogram;
@property (strong, nonatomic) HROnboardingElectrocardiogramResultView *highOrLowHeartRateResultView; // @synthesize highOrLowHeartRateResultView=_highOrLowHeartRateResultView;
@property (strong, nonatomic) HROnboardingElectrocardiogramResultView *inconclusiveResultView; // @synthesize inconclusiveResultView=_inconclusiveResultView;
@property (strong, nonatomic) HROnboardingElectrocardiogramResultView *onlyResultView; // @synthesize onlyResultView=_onlyResultView;
@property (strong, nonatomic) HROnboardingElectrocardiogramResultView *sinusRhythmResultReview; // @synthesize sinusRhythmResultReview=_sinusRhythmResultReview;
@property (strong, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) NSLayoutAnchor *viewTopAnchor; // @synthesize viewTopAnchor=_viewTopAnchor;

- (void).cxx_destruct;
- (void)_adjustDisclaimerLabelConstraints;
- (void)_adjustStackedButtonViewLocationForViewContentHeight;
- (void)_pauseResultViewVideos;
- (void)_playResultViewVideos;
- (id)_resultViewForSample:(id)arg1 activeAlgorithmVersion:(long long)arg2;
- (void)_setStackedButtonViewAsFooterView;
- (void)_setUpAllResultViewConstraints;
- (void)_setUpAllResultViews;
- (void)_setUpBottomResultViewConstraint;
- (void)_setUpDisclaimerLabel;
- (void)_setUpOnlyResultView;
- (void)_setUpOnlyResultViewConstraints;
- (void)_setUpStackedButtonView;
- (void)_setUpTitle;
- (void)_setUpTitleConstraints;
- (void)_updateForCurrentSizeCategory;
- (id)initForOnboarding:(BOOL)arg1 upgradingFromAlgorithmVersion:(long long)arg2;
- (id)initWithSample:(id)arg1;
- (void)linkTextView:(id)arg1 didTapOnLinkInRange:(struct _NSRange)arg2;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

