//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIColor, _TPTemplatedColoredImageView;

@interface TPRevealingRingView : UIView
{
    CDStruct_f15746dd _outerViewDrawingProperties;
    _TPTemplatedColoredImageView *_outerView;
    CDStruct_f15746dd _outerGammaViewDrawingProperties;
    _TPTemplatedColoredImageView *_outerGammaView;
    CDStruct_f15746dd _innerGammaViewDrawingProperties;
    _TPTemplatedColoredImageView *_innerGammaView;
    CDStruct_f15746dd _innerViewDrawingProperties;
    _TPTemplatedColoredImageView *_innerView;
    UIColor *_colorOutsideRing;
    UIColor *_colorInsideRing;
    struct UIEdgeInsets _paddingOutsideRing;
    double _defaultRingStrokeWidth;
    double _gammaBoost;
    double _revealAnimationDuration;
    double _unrevealAnimationDuration;
    double _minimumRevealingScale;
    double _cornerRadius;
    int _animationStyle;
    BOOL _isCircularRing;
    double _innerGammaAlpha;
    BOOL _revealed;
    BOOL _gammaBoostOuterRing;
    BOOL _gammaBoostInside;
    double _alphaInsideRing;
    double _alphaOutsideRing;
}

@property (nonatomic) double alphaInsideRing; // @synthesize alphaInsideRing=_alphaInsideRing;
@property (nonatomic) double alphaOutsideRing; // @synthesize alphaOutsideRing=_alphaOutsideRing;
@property (nonatomic) int animationStyle; // @synthesize animationStyle=_animationStyle;
@property (strong, nonatomic) UIColor *colorInsideRing; // @synthesize colorInsideRing=_colorInsideRing;
@property (strong, nonatomic) UIColor *colorOutsideRing; // @synthesize colorOutsideRing=_colorOutsideRing;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (nonatomic) double defaultRingStrokeWidth; // @synthesize defaultRingStrokeWidth=_defaultRingStrokeWidth;
@property (nonatomic) double gammaBoost; // @synthesize gammaBoost=_gammaBoost;
@property (nonatomic) BOOL gammaBoostInside; // @synthesize gammaBoostInside=_gammaBoostInside;
@property (nonatomic) BOOL gammaBoostOuterRing; // @synthesize gammaBoostOuterRing=_gammaBoostOuterRing;
@property (nonatomic) double minimumRevealingScale; // @synthesize minimumRevealingScale=_minimumRevealingScale;
@property (readonly, nonatomic) struct UIEdgeInsets paddingOutsideRing; // @synthesize paddingOutsideRing=_paddingOutsideRing;
@property (nonatomic) double revealAnimationDuration; // @synthesize revealAnimationDuration=_revealAnimationDuration;
@property (readonly, nonatomic) struct CGSize ringSize; // @dynamic ringSize;
@property (nonatomic) double unrevealAnimationDuration; // @synthesize unrevealAnimationDuration=_unrevealAnimationDuration;

+ (id)classIdentifier;
- (void).cxx_destruct;
- (void)_adjustGammaBoostIfNecessary;
- (void)_animateForReveal:(BOOL)arg1 withDuration:(float)arg2 delay:(double)arg3;
- (void)_calculateOuter:(struct CGRect *)arg1 inner:(struct CGRect *)arg2 newXOffset:(double *)arg3 newYOffset:(double *)arg4 withScale:(double)arg5;
- (void)_computeInnerGammaViewDrawingPropertiesWithScale:(double)arg1;
- (void)_computeInnerViewDrawingPropertiesWithScale:(double)arg1;
- (void)_computeOuterGammaViewDrawingPropertiesWithScale:(double)arg1;
- (void)_evaluateCircularness;
- (BOOL)_isSquare:(struct CGSize)arg1;
- (BOOL)_shouldDrawAsCircle:(struct CGSize)arg1 cornerRadius:(double)arg2;
- (id)description;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 paddingOutsideRing:(struct UIEdgeInsets)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setPaddingOutsideRing:(struct UIEdgeInsets)arg1;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setRevealed:(BOOL)arg1 animated:(BOOL)arg2 delay:(double)arg3;
- (void)setRingGammaBoost:(double)arg1;
- (void)setUsesColorBurnBlending:(BOOL)arg1;
- (void)setUsesColorDodgeBlending:(BOOL)arg1;

@end
