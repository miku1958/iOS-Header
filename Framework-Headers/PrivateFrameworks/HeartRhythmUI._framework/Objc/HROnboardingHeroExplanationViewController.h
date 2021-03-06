//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HeartRhythmUI/HROnboardingBaseViewController.h>

#import <HeartRhythmUI/HRStackedButtonViewDelegate-Protocol.h>

@class HRStackedButtonView, NSLayoutConstraint, NSString, UILabel, UIView;

@interface HROnboardingHeroExplanationViewController : HROnboardingBaseViewController <HRStackedButtonViewDelegate>
{
    long long _textAlignment;
    UIView *_heroView;
    UILabel *_titleLabel;
    UILabel *_bodyLabel;
    HRStackedButtonView *_stackedButtonView;
    NSLayoutConstraint *_contentViewBottomConstraint;
}

@property (strong, nonatomic) UILabel *bodyLabel; // @synthesize bodyLabel=_bodyLabel;
@property (readonly, nonatomic) NSString *bodyString;
@property (readonly, nonatomic) NSString *buttonTitleString;
@property (strong, nonatomic) NSLayoutConstraint *contentViewBottomConstraint; // @synthesize contentViewBottomConstraint=_contentViewBottomConstraint;
@property (strong, nonatomic) UIView *heroView; // @synthesize heroView=_heroView;
@property (strong, nonatomic) HRStackedButtonView *stackedButtonView; // @synthesize stackedButtonView=_stackedButtonView;
@property (nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, nonatomic) NSString *titleString;

- (void).cxx_destruct;
- (void)_adjustButtonFooterViewLocationForViewContentHeight;
- (id)_bodyFont;
- (id)_bodyFontTextStyle;
- (void)_setUpButtonFooterView;
- (id)_titleFont;
- (id)_titleFontTextStyle;
- (double)_titleLastBaselineToBodyTop;
- (double)_titleTopToFirstBaseline;
- (double)_titleTopToFirstBaselineLeading;
- (id)createHeroView;
- (void)setUpConstraints;
- (void)setUpUI;
- (void)stackedButtonView:(id)arg1 didTapButtonAtIndex:(long long)arg2;
- (long long)stackedButtonViewLastButtonMode;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

