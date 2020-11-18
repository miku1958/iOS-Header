//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSNumberFormatter, UIImageView, UILabel;
@protocol CEKApertureButtonDelegate;

@interface CEKApertureButton : UIButton
{
    BOOL _shouldShowApertureValue;
    BOOL _wantsBackground;
    BOOL __rightToLeftFormatting;
    id<CEKApertureButtonDelegate> _delegate;
    double _apertureValue;
    long long _expansionDirection;
    long long _orientation;
    UIImageView *__circleOutlineView;
    UILabel *__symbolLabel;
    UILabel *__valueLabel;
    UIImageView *__circleBackgroundView;
    NSNumberFormatter *__decimalFormatter;
    NSNumberFormatter *__wholeNumberFormatter;
    double __cachedSpaceWidth;
    double __cachedSymbolLabelWidth;
    double __cachedValueLabelWidth;
    struct UIEdgeInsets _tappableEdgeInsets;
}

@property (readonly, nonatomic) double _cachedSpaceWidth; // @synthesize _cachedSpaceWidth=__cachedSpaceWidth;
@property (readonly, nonatomic) double _cachedSymbolLabelWidth; // @synthesize _cachedSymbolLabelWidth=__cachedSymbolLabelWidth;
@property (nonatomic, setter=_setCachedValueLabelWidth:) double _cachedValueLabelWidth; // @synthesize _cachedValueLabelWidth=__cachedValueLabelWidth;
@property (strong, nonatomic) UIImageView *_circleBackgroundView; // @synthesize _circleBackgroundView=__circleBackgroundView;
@property (readonly, nonatomic) UIImageView *_circleOutlineView; // @synthesize _circleOutlineView=__circleOutlineView;
@property (readonly, nonatomic) NSNumberFormatter *_decimalFormatter; // @synthesize _decimalFormatter=__decimalFormatter;
@property (readonly, nonatomic, getter=_isRightToLeftFormatting) BOOL _rightToLeftFormatting; // @synthesize _rightToLeftFormatting=__rightToLeftFormatting;
@property (readonly, nonatomic) UILabel *_symbolLabel; // @synthesize _symbolLabel=__symbolLabel;
@property (readonly, nonatomic) UILabel *_valueLabel; // @synthesize _valueLabel=__valueLabel;
@property (readonly, nonatomic) NSNumberFormatter *_wholeNumberFormatter; // @synthesize _wholeNumberFormatter=__wholeNumberFormatter;
@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic) double apertureValue; // @synthesize apertureValue=_apertureValue;
@property (weak, nonatomic) id<CEKApertureButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long expansionDirection; // @synthesize expansionDirection=_expansionDirection;
@property (nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property (nonatomic) BOOL shouldShowApertureValue; // @synthesize shouldShowApertureValue=_shouldShowApertureValue;
@property (nonatomic) struct UIEdgeInsets tappableEdgeInsets; // @synthesize tappableEdgeInsets=_tappableEdgeInsets;
@property (nonatomic) BOOL wantsBackground; // @synthesize wantsBackground=_wantsBackground;

- (void).cxx_destruct;
- (id)_circleImageWithColor:(id)arg1;
- (struct UIEdgeInsets)_expansionInsets;
- (void)_rotateView:(id)arg1 withInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3;
- (void)_setCenterAndBoundsForView:(id)arg1 frame:(struct CGRect)arg2;
- (void)_setLayer:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_updateBackgroundView;
- (void)_updateColorsAnimated:(BOOL)arg1;
- (void)_updateSymbolLabelOrientationAnimated:(BOOL)arg1;
- (void)_updateValueLabel;
- (struct UIEdgeInsets)alignmentRectInsets;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setActive:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOrientation:(long long)arg1 animated:(BOOL)arg2;
- (void)setShouldShowApertureValue:(BOOL)arg1 animated:(BOOL)arg2;

@end
