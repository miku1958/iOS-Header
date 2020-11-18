//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, HRVideoPlayerView, NSLayoutConstraint, UILabel;

@interface HROnboardingElectrocardiogramExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    UILabel *_titleLabel;
    HRVideoPlayerView *_animatedWatchRhythmVideoView;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (strong, nonatomic) HRVideoPlayerView *animatedWatchRhythmVideoView; // @synthesize animatedWatchRhythmVideoView=_animatedWatchRhythmVideoView;
@property (strong, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property (strong, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property (strong, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (double)_titleLastBaselineToVideoViewTop;
- (double)_videoViewBottomToBodyFirstBaseline;
- (id)initForOnboarding:(BOOL)arg1;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

