//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUIServices/SBInteractionPassThroughView.h>

@class SBLockOverlayStylePropertiesFactory, UIButton, UILabel, UIResizableView, _UILegibilitySettings;
@protocol SBUILockOverlayViewDelegate;

@interface SBUILockOverlayView : SBInteractionPassThroughView
{
    id<SBUILockOverlayViewDelegate> _delegate;
    UIResizableView *_textContainerView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIButton *_actionButton;
    SBLockOverlayStylePropertiesFactory *_underlayPropertiesFactory;
    unsigned long long _style;
    _UILegibilitySettings *_legibilitySettings;
}

@property (readonly, strong, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property (nonatomic) id<SBUILockOverlayViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (readonly, nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly, strong, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property (readonly, strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (readonly, strong, nonatomic) SBLockOverlayStylePropertiesFactory *underlayPropertiesFactory; // @synthesize underlayPropertiesFactory=_underlayPropertiesFactory;

- (id)_actionFont;
- (void)_buttonPressed;
- (id)_legibilitySettingsForStyle:(unsigned long long)arg1;
- (double)_maxLabelWidth;
- (unsigned long long)_numberOfLinesForText:(id)arg1 font:(id)arg2 size:(struct CGSize)arg3;
- (void)_sizeView:(id)arg1 forFixedWith:(BOOL)arg2;
- (id)_subtitleFont;
- (id)_titleFont;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 style:(unsigned long long)arg2;
- (void)layoutSubviews;

@end
