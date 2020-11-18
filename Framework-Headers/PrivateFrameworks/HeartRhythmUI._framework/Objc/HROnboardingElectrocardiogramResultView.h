//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class HKSeparatorLineView, HRVideoPlayerView, NSLayoutConstraint, NSString, UIButton, UILabel;

@interface HROnboardingElectrocardiogramResultView : UIView
{
    BOOL _hideNumberedTitle;
    BOOL _alwaysExpanded;
    BOOL _shouldHideSeparatorLine;
    BOOL _expanded;
    NSString *_title;
    UILabel *_numberedTitleLabel;
    HRVideoPlayerView *_playerView;
    NSString *_numberedTitle;
    NSString *_visibleBody;
    UILabel *_visibleBodyLabel;
    UIButton *_learnMoreButton;
    UIView *_expandedView;
    HKSeparatorLineView *_separatorLineView;
    NSLayoutConstraint *_playerViewOrVisibleBodyLabelTopConstraint;
    NSLayoutConstraint *_bottomConstraint;
}

@property (nonatomic, getter=isAlwaysExpanded) BOOL alwaysExpanded; // @synthesize alwaysExpanded=_alwaysExpanded;
@property (strong, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property (nonatomic, getter=isExpanded) BOOL expanded; // @synthesize expanded=_expanded;
@property (strong, nonatomic) UIView *expandedView; // @synthesize expandedView=_expandedView;
@property (nonatomic, getter=isHidingNumberedTitle) BOOL hideNumberedTitle; // @synthesize hideNumberedTitle=_hideNumberedTitle;
@property (strong, nonatomic) UIButton *learnMoreButton; // @synthesize learnMoreButton=_learnMoreButton;
@property (copy, nonatomic) NSString *numberedTitle; // @synthesize numberedTitle=_numberedTitle;
@property (strong, nonatomic) UILabel *numberedTitleLabel; // @synthesize numberedTitleLabel=_numberedTitleLabel;
@property (strong, nonatomic) HRVideoPlayerView *playerView; // @synthesize playerView=_playerView;
@property (strong, nonatomic) NSLayoutConstraint *playerViewOrVisibleBodyLabelTopConstraint; // @synthesize playerViewOrVisibleBodyLabelTopConstraint=_playerViewOrVisibleBodyLabelTopConstraint;
@property (strong, nonatomic) HKSeparatorLineView *separatorLineView; // @synthesize separatorLineView=_separatorLineView;
@property (nonatomic) BOOL shouldHideSeparatorLine; // @synthesize shouldHideSeparatorLine=_shouldHideSeparatorLine;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (copy, nonatomic) NSString *visibleBody; // @synthesize visibleBody=_visibleBody;
@property (strong, nonatomic) UILabel *visibleBodyLabel; // @synthesize visibleBodyLabel=_visibleBodyLabel;

+ (id)resultViewWithItem:(id)arg1;
- (void).cxx_destruct;
- (double)_learnMoreButtonLastBaselineToBottom;
- (id)_numberedTitleFont;
- (double)_numberedTitleLastBaseLineToVideoTop;
- (double)_numberedTitleTopToFirstBaseline;
- (double)_playerViewOrVisibleBodyLabelTopConstant;
- (id)_playerViewOrVisibleBodyLabelTopConstraint;
- (void)_setUpConstraints;
- (void)_setUpNumberedTitleLabelConstraints;
- (void)_setUpPlayerViewTopConstraint;
- (void)_setUpUI;
- (void)_setUpVisibleBodyLabelTopConstraint;
- (void)_updateExpandedViewState;
- (void)_updateNumberedTitleViewState;
- (double)_visibleBodyFirstBaselineDistance;
- (id)_visibleBodyFont;
- (id)_visibleBodyFontTextStyle;
- (double)_visibleBodyLastBaselineToLearnMoreButtonFirstBaseline;
- (id)initWithTitle:(id)arg1 numberedTitle:(id)arg2 visibleBodyText:(id)arg3 video:(id)arg4 expandedView:(id)arg5;
- (void)learnMoreButtonTapped:(id)arg1;

@end
