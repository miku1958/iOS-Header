//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSLayoutConstraint, UIButton, UIFont;
@protocol EKUIEventStatusButtonsViewDelegate;

@interface EKUIEventStatusButtonsView : UIView
{
    NSArray *_buttons;
    NSArray *_actions;
    UIFont *_font;
    double _outsideMargin;
    NSLayoutConstraint *_leadingMarginConstraint;
    NSLayoutConstraint *_trailingMarginConstraint;
    double _baselineFromBoundsTop;
    BOOL _forcesSingleButtonToCenter;
    NSArray *_currentConstraints;
    BOOL _disableButtonHighlights;
    BOOL _shouldUseVerticalLayout;
    id<EKUIEventStatusButtonsViewDelegate> _delegate;
    long long _selectedAction;
    double _buttonsCharge;
    long long _textSizeMode;
}

@property (strong, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (nonatomic) double buttonsCharge; // @synthesize buttonsCharge=_buttonsCharge;
@property (readonly, nonatomic) UIButton *centerButton;
@property (weak, nonatomic) id<EKUIEventStatusButtonsViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL disableButtonHighlights; // @synthesize disableButtonHighlights=_disableButtonHighlights;
@property (readonly, nonatomic) UIFont *font;
@property (nonatomic) long long selectedAction; // @synthesize selectedAction=_selectedAction;
@property (nonatomic) BOOL shouldUseVerticalLayout; // @synthesize shouldUseVerticalLayout=_shouldUseVerticalLayout;
@property (nonatomic) long long textSizeMode; // @synthesize textSizeMode=_textSizeMode;

+ (id)logHandle;
- (void).cxx_destruct;
- (long long)_actionForButton:(id)arg1;
- (id)_buttonForAction:(long long)arg1;
- (long long)_buttonIndexForAction:(long long)arg1;
- (id)_buttonTitleForAction:(long long)arg1;
- (double)_defaultFontSizeForButtons;
- (id)_fontWithSize:(double)arg1 selected:(BOOL)arg2;
- (id)_horizontalConstraintStringForMiddleButtonsStartingAt:(unsigned long long)arg1 endingAt:(unsigned long long)arg2 resultingViews:(id)arg3;
- (double)_minimumFontSize;
- (id)_newToolbarButton;
- (void)_setupButtons;
- (void)_setupConstraints;
- (BOOL)_shouldCenterButton;
- (void)_updateButtonFontsWithSize:(double)arg1;
- (double)_updateFontSizesFromDelegate;
- (void)_updateSelectionToButton:(id)arg1;
- (double)baselineFromBoundsTop;
- (void)buttonTapped:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1 actions:(id)arg2 delegate:(id)arg3 centerSingleButton:(BOOL)arg4;
- (void)layoutSubviews;
- (void)updateConstraints;
- (void)updateFonts;
- (void)updateForMiniBarState:(BOOL)arg1;

@end

