//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, SKUIButtonViewElement, SKUIPlayButtonGradientView, SKUIPlayButtonShapeView, UIColor, UIImage, UIImageView, UIView, _UIBackdropView;

@interface SKUIPlayButtonControl : UIControl
{
    _UIBackdropView *_backdropView;
    UIColor *_backgroundColor;
    long long _backgroundType;
    SKUIPlayButtonShapeView *_borderLayer;
    UIView *_backgroundView;
    UIColor *_bufferProgressIndicatorColor;
    UIColor *_controlForeGroundColor;
    id _bufferProgressIndicatorCompositingFilter;
    UIImage *_customPlayImage;
    UIImage *_customToggleImage;
    BOOL _didInitialHighlightForTouch;
    SKUIPlayButtonGradientView *_gradientBackgroundView;
    NSArray *_gradientColors;
    long long _gradientType;
    UIImageView *_imageView;
    SKUIPlayButtonShapeView *_innerProgressLayer;
    BOOL _indeterminate;
    SKUIPlayButtonShapeView *_outerProgressLayer;
    float _progress;
    SKUIPlayButtonShapeView *_selectedLayer;
    BOOL _showingProgress;
    UIColor *_progressIndicatorColor;
    id _progressIndicatorCompositingFilter;
    BOOL _usesBlurredBackground;
    BOOL _showingPlayIndicator;
    BOOL _showBorder;
    BOOL _showOuterBorder;
    BOOL _disabledButSelectable;
    NSString *_backdropGroupName;
    SKUIButtonViewElement *_element;
    UIImage *_backgroundImageForBlurring;
    struct UIEdgeInsets _bigHitInsets;
}

@property (copy, nonatomic) NSString *backdropGroupName; // @synthesize backdropGroupName=_backdropGroupName;
@property (weak, nonatomic) UIImage *backgroundImageForBlurring; // @synthesize backgroundImageForBlurring=_backgroundImageForBlurring;
@property (readonly, nonatomic) long long backgroundType; // @synthesize backgroundType=_backgroundType;
@property (nonatomic) struct UIEdgeInsets bigHitInsets; // @synthesize bigHitInsets=_bigHitInsets;
@property (readonly, nonatomic) UIColor *controlForeGroundColor; // @synthesize controlForeGroundColor=_controlForeGroundColor;
@property (strong, nonatomic) UIImage *customPlayImage; // @synthesize customPlayImage=_customPlayImage;
@property (strong, nonatomic) UIImage *customToggleImage; // @synthesize customToggleImage=_customToggleImage;
@property (nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property (strong, nonatomic) SKUIButtonViewElement *element; // @synthesize element=_element;
@property (strong, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property (readonly, nonatomic, getter=isIndeterminate) BOOL indeterminate; // @synthesize indeterminate=_indeterminate;
@property (nonatomic) float progress; // @synthesize progress=_progress;
@property (copy, nonatomic) UIColor *progressIndicatorColor; // @synthesize progressIndicatorColor=_progressIndicatorColor;
@property (nonatomic) BOOL showOuterBorder; // @synthesize showOuterBorder=_showOuterBorder;
@property (readonly, nonatomic) BOOL showingPlayIndicator; // @synthesize showingPlayIndicator=_showingPlayIndicator;
@property (readonly, nonatomic) BOOL showingProgress; // @synthesize showingProgress=_showingProgress;

+ (CDStruct_afa449f9)_calculateStatistics:(struct CGImage *)arg1 withSize:(struct CGSize)arg2;
+ (id)blurColorForColor:(id)arg1;
+ (id)blurColorForImage:(id)arg1 forButtonSize:(struct CGSize)arg2 withOffsetRight:(float)arg3 withOffsetBottom:(float)arg4;
- (void).cxx_destruct;
- (id)_backgroundView;
- (void)_beginIndeterminateAnimation;
- (id)_borderLayer;
- (id)_cancelImage;
- (id)_classicBackdropView;
- (void)_createGradient:(id)arg1 withGradientType:(long long)arg2;
- (id)_defaultBackgroundView;
- (id)_gradientBackgroundView;
- (id)_imageView;
- (id)_innerProgressLayer;
- (id)_newShapeViewWithBounds:(struct CGRect)arg1 lineWidth:(double)arg2;
- (id)_outerProgressLayer;
- (id)_playImage;
- (void)_prepareForReuse;
- (BOOL)_renderAsEnabled;
- (id)_selectedLayer;
- (void)_showPlayIndicator:(BOOL)arg1;
- (id)_simpleBackdrop;
- (void)_toggleToPlayState;
- (void)_updateBackdropView;
- (void)_updateBackgroundBlur:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)_updateEnabledState;
- (void)_updateInnerProgressLayerStroke;
- (void)_useBlurredBackground:(BOOL)arg1;
- (void)beginIndeterminateAnimation;
- (float)buttonCornerRadius;
- (struct CGSize)buttonSize;
- (id)cancelImage;
- (id)defaultBackgroundColor;
- (void)endIndeterminateAnimation;
- (void)hideProgressAnimated:(BOOL)arg1;
- (struct CGRect)hitRect;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (id)outerBorderColor;
- (float)playButtonDefaultAlpha;
- (id)playImage;
- (void)playIndicatorDidChange:(BOOL)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)refresh;
- (void)setBackgroundGradientColors:(id)arg1 withGradientType:(long long)arg2;
- (void)setBackgroundImageForBlurring:(id)arg1 withOffsetRight:(float)arg2 withOffsetBottom:(float)arg3;
- (void)setBackgroundType:(long long)arg1;
- (void)setBufferProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setControlColor:(id)arg1;
- (void)setControlForegroundColor:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setProgress:(float)arg1 animated:(BOOL)arg2;
- (void)setProgressIndicatorColor:(id)arg1 withCompositingFilter:(id)arg2;
- (void)setSelected:(BOOL)arg1;
- (void)setShowBorder:(BOOL)arg1;
- (void)showPlayIndicator:(BOOL)arg1;
- (void)showPlayIndicator:(BOOL)arg1 force:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateOuterProgressLayerStroke;

@end

