//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableSet, NSString, UIColor, UIFont, UIImage, UILabel, _UILegibilitySettings, _UIVibrantSettings;
@protocol _UIGlintyStringViewDelegate;

@interface _UIGlintyStringView : UIView
{
    BOOL _animationRepeats;
    BOOL _adjustsFontSizeToFitWidth;
    BOOL _hasCustomBackgroundColor;
    BOOL _highlight;
    BOOL _allowsLuminanceAdjustments;
    BOOL _usesBackgroundDimming;
    BOOL _needsTextUpdate;
    BOOL _animating;
    BOOL _fading;
    BOOL _showing;
    int _textIndex;
    id<_UIGlintyStringViewDelegate> _delegate;
    NSString *_text;
    UIFont *_font;
    NSString *_textLanguage;
    _UILegibilitySettings *_legibilitySettings;
    _UIVibrantSettings *_vibrantSettings;
    UIView *_backgroundView;
    UIColor *_backgroundColor;
    UIColor *_chevronBackgroundColor;
    long long _chevronStyle;
    double _horizontalPadding;
    UILabel *_label;
    UIView *_spotlightView;
    UIImage *_chevron;
    UIView *_highlightView;
    UIView *_effectView;
    UIView *_blurView;
    UIView *_shimmerImageView;
    UIView *_reflectionImageView;
    double _blurAlpha;
    NSMutableSet *_blurHiddenRequesters;
    struct CGSize _labelSize;
    struct CGRect _chevronFrame;
}

@property (nonatomic) BOOL adjustsFontSizeToFitWidth; // @synthesize adjustsFontSizeToFitWidth=_adjustsFontSizeToFitWidth;
@property (nonatomic) BOOL allowsLuminanceAdjustments; // @synthesize allowsLuminanceAdjustments=_allowsLuminanceAdjustments;
@property (nonatomic) BOOL animating; // @synthesize animating=_animating;
@property (nonatomic) BOOL animationRepeats; // @synthesize animationRepeats=_animationRepeats;
@property (strong, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic) double blurAlpha; // @synthesize blurAlpha=_blurAlpha;
@property (strong, nonatomic) NSMutableSet *blurHiddenRequesters; // @synthesize blurHiddenRequesters=_blurHiddenRequesters;
@property (strong, nonatomic) UIView *blurView; // @synthesize blurView=_blurView;
@property (strong, nonatomic) UIImage *chevron; // @synthesize chevron=_chevron;
@property (strong, nonatomic) UIColor *chevronBackgroundColor; // @synthesize chevronBackgroundColor=_chevronBackgroundColor;
@property (nonatomic) struct CGRect chevronFrame; // @synthesize chevronFrame=_chevronFrame;
@property (nonatomic) long long chevronStyle; // @synthesize chevronStyle=_chevronStyle;
@property (nonatomic) id<_UIGlintyStringViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property (nonatomic) BOOL fading; // @synthesize fading=_fading;
@property (strong, nonatomic) UIFont *font; // @synthesize font=_font;
@property (nonatomic) BOOL hasCustomBackgroundColor; // @synthesize hasCustomBackgroundColor=_hasCustomBackgroundColor;
@property (nonatomic) BOOL highlight; // @synthesize highlight=_highlight;
@property (strong, nonatomic) UIView *highlightView; // @synthesize highlightView=_highlightView;
@property (nonatomic) double horizontalPadding; // @synthesize horizontalPadding=_horizontalPadding;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (readonly, nonatomic) struct CGRect labelFrame;
@property (nonatomic) struct CGSize labelSize; // @synthesize labelSize=_labelSize;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (nonatomic) BOOL needsTextUpdate; // @synthesize needsTextUpdate=_needsTextUpdate;
@property (strong, nonatomic) UIView *reflectionImageView; // @synthesize reflectionImageView=_reflectionImageView;
@property (strong, nonatomic) UIView *shimmerImageView; // @synthesize shimmerImageView=_shimmerImageView;
@property (nonatomic) BOOL showing; // @synthesize showing=_showing;
@property (strong, nonatomic) UIView *spotlightView; // @synthesize spotlightView=_spotlightView;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;
@property (nonatomic) int textIndex; // @synthesize textIndex=_textIndex;
@property (copy, nonatomic) NSString *textLanguage; // @synthesize textLanguage=_textLanguage;
@property (nonatomic) BOOL usesBackgroundDimming; // @synthesize usesBackgroundDimming=_usesBackgroundDimming;
@property (strong, nonatomic) _UIVibrantSettings *vibrantSettings; // @synthesize vibrantSettings=_vibrantSettings;

- (void).cxx_destruct;
- (double)_chevronHeightWithMaxOffset;
- (id)_chevronImageForStyle:(long long)arg1;
- (double)_chevronPadding;
- (double)_chevronVerticalOffset;
- (double)_chevronWidthWithPadding;
- (double)_chevronWidthWithPaddingCompression:(double)arg1;
- (id)_highlightColor;
- (id)_highlightCompositingFilter;
- (struct CGSize)_labelSizeThatFits:(struct CGSize)arg1;
- (void)_updateHighlight;
- (void)_updateLabelWithFrame:(struct CGRect)arg1;
- (void)addGlintyAnimations;
- (void)addReflectionAnimationToLayer:(id)arg1;
- (void)addShimmerAnimationToLayer:(id)arg1;
- (double)baselineOffsetFromBottom;
- (double)baselineOffsetFromBottomWithSize:(struct CGSize)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)fadeIn;
- (void)fadeInWithDuration:(double)arg1;
- (void)fadeOut;
- (void)fadeOutWithDuration:(double)arg1;
- (void)hide;
- (void)hideBlur;
- (void)hideEffects;
- (id)initWithText:(id)arg1 andFont:(id)arg2;
- (BOOL)isAnimating;
- (void)layoutSubviews;
- (void)removeGlintyAnimations;
- (void)setBlurHidden:(BOOL)arg1 forRequester:(id)arg2;
- (id)shapeViewForCharactersInString:(id)arg1 withFont:(id)arg2 centeredInFrame:(struct CGRect)arg3;
- (void)show;
- (void)showBlur;
- (void)showEffects;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateBlurForHiddenRequesters;
- (void)updateText;
- (void)updateTextWithBounds:(struct CGRect)arg1;

@end

