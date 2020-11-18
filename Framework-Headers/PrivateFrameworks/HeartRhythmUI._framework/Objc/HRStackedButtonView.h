//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, NSLayoutYAxisAnchor, NSString, UIBlurEffect, UILabel;
@protocol HRStackedButtonViewDelegate;

@interface HRStackedButtonView : UIView
{
    BOOL _bottomAdjustsForHomeButtonlessScreen;
    BOOL _fixedBottomButtonSpacing;
    BOOL _blurHidden;
    NSArray *_buttons;
    long long _lastButtonMode;
    NSArray *_titles;
    NSArray *_styles;
    long long _buttonMode;
    NSString *_footerText;
    NSString *_boldFooterText;
    long long _footerTextAlignment;
    UILabel *_footerTextLabel;
    UIBlurEffect *_backgroundBlurEffect;
    UIView *_backgroundBlurView;
    NSLayoutConstraint *_backgroundBlurViewLeadingConstraint;
    NSLayoutConstraint *_backgroundBlurViewTrailingConstraint;
    NSLayoutYAxisAnchor *_firstTopAnchor;
    double _firstTopConstant;
    NSLayoutConstraint *_bottomConstraint;
    id<HRStackedButtonViewDelegate> _delegate;
}

@property (strong, nonatomic) UIBlurEffect *backgroundBlurEffect; // @synthesize backgroundBlurEffect=_backgroundBlurEffect;
@property (strong, nonatomic) UIView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property (strong, nonatomic) NSLayoutConstraint *backgroundBlurViewLeadingConstraint; // @synthesize backgroundBlurViewLeadingConstraint=_backgroundBlurViewLeadingConstraint;
@property (strong, nonatomic) NSLayoutConstraint *backgroundBlurViewTrailingConstraint; // @synthesize backgroundBlurViewTrailingConstraint=_backgroundBlurViewTrailingConstraint;
@property (nonatomic, getter=isBlurHidden) BOOL blurHidden; // @synthesize blurHidden=_blurHidden;
@property (copy, nonatomic) NSString *boldFooterText; // @synthesize boldFooterText=_boldFooterText;
@property (nonatomic) BOOL bottomAdjustsForHomeButtonlessScreen; // @synthesize bottomAdjustsForHomeButtonlessScreen=_bottomAdjustsForHomeButtonlessScreen;
@property (strong, nonatomic) NSLayoutConstraint *bottomConstraint; // @synthesize bottomConstraint=_bottomConstraint;
@property (nonatomic) long long buttonMode; // @synthesize buttonMode=_buttonMode;
@property (strong, nonatomic) NSArray *buttons; // @synthesize buttons=_buttons;
@property (weak, nonatomic) id<HRStackedButtonViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSLayoutYAxisAnchor *firstTopAnchor; // @synthesize firstTopAnchor=_firstTopAnchor;
@property (nonatomic) double firstTopConstant; // @synthesize firstTopConstant=_firstTopConstant;
@property (nonatomic) BOOL fixedBottomButtonSpacing; // @synthesize fixedBottomButtonSpacing=_fixedBottomButtonSpacing;
@property (copy, nonatomic) NSString *footerText; // @synthesize footerText=_footerText;
@property (nonatomic) long long footerTextAlignment; // @synthesize footerTextAlignment=_footerTextAlignment;
@property (strong, nonatomic) UILabel *footerTextLabel; // @synthesize footerTextLabel=_footerTextLabel;
@property (nonatomic) long long lastButtonMode; // @synthesize lastButtonMode=_lastButtonMode;
@property (copy, nonatomic) NSArray *styles; // @synthesize styles=_styles;
@property (copy, nonatomic) NSArray *titles; // @synthesize titles=_titles;

+ (double)_buttonSpacingForValue:(double)arg1;
+ (id)_footerFontTextStyle;
+ (id)_footerTextBoldFont;
+ (id)_footerTextFont;
+ (double)_footerTextSpacingForValue:(double)arg1;
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 delegate:(id)arg4;
+ (id)buddyStackedButtonViewWithTitles:(id)arg1 footerText:(id)arg2 boldFooterText:(id)arg3 footerTextAlignment:(long long)arg4 delegate:(id)arg5;
+ (double)topPadding;
- (void).cxx_destruct;
- (void)_assignConstraintsForButtons;
- (id)_attributedFooterText;
- (id)_createButtons;
- (void)_createViewBottomConstraint;
- (void)_setUpBlurEffect;
- (void)_setUpButtons;
- (void)_setUpFooterText;
- (void)_updateBottomConstraint;
- (void)_updateForCurrentSizeCategory;
- (void)actionButtonTapped:(id)arg1;
- (void)alignBlurViewHorizontalConstraintsWithView:(id)arg1;
- (id)firstBaselineAnchor;
- (id)initWithButtonTitles:(id)arg1 styles:(id)arg2 footerText:(id)arg3 boldFooterText:(id)arg4 footerTextAlignment:(long long)arg5 delegate:(id)arg6;
- (id)lastBaselineAnchor;
- (void)traitCollectionDidChange:(id)arg1;

@end
