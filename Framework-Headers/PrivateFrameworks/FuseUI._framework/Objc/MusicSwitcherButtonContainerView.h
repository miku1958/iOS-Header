//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MPUTextButton, NSString, UIButton, UIFont;
@protocol MusicSwitcherButtonContainerViewDelegate;

@interface MusicSwitcherButtonContainerView : UIView
{
    UIFont *_defaultFontForTrailingAndLeadingButtons;
    MPUTextButton *_leadingButton;
    UIView *_leftHairlineView;
    MPUTextButton *_trailingButton;
    UIView *_rightHairlineView;
    UIButton *_switcherButton;
    BOOL _hairlineHidden;
    BOOL _switcherButtonHidden;
    id<MusicSwitcherButtonContainerViewDelegate> _delegate;
    UIFont *_fontOfTextRightAbove;
    UIFont *_fontOfLeadingAndTrailingButtons;
    NSString *_leadingButtonTitle;
    UIFont *_switcherButtonFont;
    NSString *_switcherButtonTitle;
    NSString *_trailingButtonTitle;
}

@property (weak, nonatomic) id<MusicSwitcherButtonContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIFont *fontOfLeadingAndTrailingButtons; // @synthesize fontOfLeadingAndTrailingButtons=_fontOfLeadingAndTrailingButtons;
@property (strong, nonatomic) UIFont *fontOfTextRightAbove; // @synthesize fontOfTextRightAbove=_fontOfTextRightAbove;
@property (nonatomic, getter=isHairlineHidden) BOOL hairlineHidden; // @synthesize hairlineHidden=_hairlineHidden;
@property (copy, nonatomic) NSString *leadingButtonTitle; // @synthesize leadingButtonTitle=_leadingButtonTitle;
@property (strong, nonatomic) UIFont *switcherButtonFont; // @synthesize switcherButtonFont=_switcherButtonFont;
@property (nonatomic, getter=isSwitcherButtonHidden) BOOL switcherButtonHidden; // @synthesize switcherButtonHidden=_switcherButtonHidden;
@property (copy, nonatomic) NSString *switcherButtonTitle; // @synthesize switcherButtonTitle=_switcherButtonTitle;
@property (readonly, nonatomic) UIView *switcherButtonView;
@property (copy, nonatomic) NSString *trailingButtonTitle; // @synthesize trailingButtonTitle=_trailingButtonTitle;

+ (id)_chevronImageForTraitCollection:(id)arg1;
+ (id)defaultHairlineColor;
+ (double)heightWithFontOfTextRightAbove:(id)arg1 traitCollection:(id)arg2 shouldConsiderLeadingAndTrailingButtons:(BOOL)arg3;
+ (double)imageWidthForTraitCollection:(id)arg1 includingPadding:(BOOL)arg2;
- (void).cxx_destruct;
- (void)_handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (void)_handleLeadingButtonTapped:(id)arg1;
- (void)_handleSwitcherButtonTapped:(id)arg1;
- (void)_handleTrailingButtonTapped:(id)arg1;
- (id)_helperButtonsFont;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

