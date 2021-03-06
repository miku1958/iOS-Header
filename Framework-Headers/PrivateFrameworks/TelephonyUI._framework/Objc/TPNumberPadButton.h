//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TelephonyUI/TPNumberPadButtonProtocol-Protocol.h>

@class CALayer, NSString, TPRevealingRingView, UIColor, UIView;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>
{
    long long character;
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
    UIView *_circleView;
    UIColor *_buttonColor;
    TPRevealingRingView *_revealingRingView;
}

@property (readonly, nonatomic) UIColor *buttonColor; // @synthesize buttonColor=_buttonColor;
@property long long character; // @synthesize character;
@property (strong) UIView *circleView; // @synthesize circleView=_circleView;
@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) CALayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) UIColor *highlightedButtonColor;
@property (strong) CALayer *highlightedGlyphLayer; // @synthesize highlightedGlyphLayer=_highlightedGlyphLayer;
@property (readonly, nonatomic) TPRevealingRingView *revealingRingView; // @synthesize revealingRingView=_revealingRingView;
@property (readonly) Class superclass;

+ (struct CGRect)circleBounds;
+ (struct CGSize)defaultSize;
+ (id)disabledImageForCharacter:(long long)arg1;
+ (double)highlightedCircleViewAlpha;
+ (double)horizontalPadding;
+ (id)imageForCharacter:(long long)arg1;
+ (id)imageForCharacter:(long long)arg1 highlighted:(BOOL)arg2;
+ (id)imageForCharacter:(long long)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3;
+ (BOOL)isCarPlay;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)localizedLettersForCharacter:(long long)arg1;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (void)resetLocale;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (double)unhighlightedCircleViewAlpha;
+ (BOOL)usesBoldAssets;
+ (BOOL)usesButtonSaturationFilters;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (double)verticalPadding;
- (void).cxx_destruct;
- (id)defaultColor;
- (void)highlightCircleView:(BOOL)arg1 animated:(BOOL)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initForCharacter:(long long)arg1;
- (void)reloadImagesForCurrentCharacter;
- (void)setGreyedOut:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)touchCancelled;
- (void)touchDown;
- (void)touchUp;

@end

