//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, UIButton, UIFont, UIKBTutorialModalDisplayStyling, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface UIKBTutorialModalDisplay : UIView
{
    long long _appearance;
    UIView *_containerView;
    UIView *_mediaView;
    UIButton *_button;
    UIKBTutorialModalDisplayStyling *_styling;
    UIVisualEffectView *_backgroundBlurView;
    NSLayoutConstraint *_containerViewTopConstraits;
    NSArray *_adjustableConstraints;
    NSLayoutConstraint *_widthAdjustmentConstraint;
}

@property (strong, nonatomic) NSArray *adjustableConstraints; // @synthesize adjustableConstraints=_adjustableConstraints;
@property (nonatomic) long long appearance; // @synthesize appearance=_appearance;
@property (strong, nonatomic) UIVisualEffectView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (strong, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property (strong, nonatomic) NSLayoutConstraint *containerViewTopConstraits; // @synthesize containerViewTopConstraits=_containerViewTopConstraits;
@property (readonly, nonatomic) NSString *largeTitle;
@property (readonly, nonatomic) UIFont *largeTitleFont;
@property (readonly, nonatomic) NSArray *mediaContents;
@property (readonly, nonatomic) double mediaLayoutWidthAdjustment;
@property (strong, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property (readonly, nonatomic) double pagingInterval;
@property (readonly, nonatomic) BOOL presentsFullScreen;
@property (strong, nonatomic) UIKBTutorialModalDisplayStyling *styling; // @synthesize styling=_styling;
@property (readonly, nonatomic) NSArray *textBodyDescriptions;
@property (readonly, nonatomic) UIFont *textBodyFont;
@property (readonly, nonatomic) long long textBodyMaxLines;
@property (readonly, nonatomic) NSArray *textTitleDescriptions;
@property (readonly, nonatomic) UIFont *textTitleFont;
@property (strong, nonatomic) NSLayoutConstraint *widthAdjustmentConstraint; // @synthesize widthAdjustmentConstraint=_widthAdjustmentConstraint;

- (void).cxx_destruct;
- (void)configBackgroundBlur;
- (void)configContainerView;
- (id)constructMediaView;
- (double)containerBottomPadding;
- (void)containerForAlertPresentation;
- (void)containerForFullScreenView;
- (void)containerForKeyboardView;
- (double)containerTopPadding;
- (void)extraButtonTapAction;
- (id)initWithKeyboardAppearance:(long long)arg1;
- (BOOL)isPortrait;
- (void)layoutSubviews;
- (void)restartPagingAnimation;
- (struct UIEdgeInsets)safeAreaInsets;
- (struct CGSize)sizeForTutorialPageView;
- (void)tapInsideButton:(id)arg1;
- (void)updateMediaViewTextAndPlacement;

@end
