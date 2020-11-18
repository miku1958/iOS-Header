//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <TelephonyUI/TPNumberPadButtonProtocol-Protocol.h>

@class CALayer, NSString, TPRevealingRingView, UIColor;

@interface TPNumberPadButton : UIControl <TPNumberPadButtonProtocol>
{
    TPRevealingRingView *_revealingRingView;
    unsigned int character;
    UIColor *_color;
    CALayer *_glyphLayer;
    CALayer *_highlightedGlyphLayer;
}

@property (nonatomic) double alphaOutsideAndInsideRing; // @dynamic alphaOutsideAndInsideRing;
@property unsigned int character; // @synthesize character;
@property (strong, nonatomic) UIColor *color; // @synthesize color=_color;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) CALayer *glyphLayer; // @synthesize glyphLayer=_glyphLayer;
@property (readonly) unsigned long long hash;
@property (strong) CALayer *highlightedGlyphLayer; // @synthesize highlightedGlyphLayer=_highlightedGlyphLayer;
@property (readonly, nonatomic) TPRevealingRingView *revealingRingView; // @synthesize revealingRingView=_revealingRingView;
@property (readonly) Class superclass;

+ (struct CGSize)defaultSize;
+ (double)highlightCrossfadeHighlightBeginTime;
+ (double)highlightCrossfadeHighlightFadeDuration;
+ (double)highlightCrossfadeNormalBeginTime;
+ (double)highlightCrossfadeNormalFadeDuration;
+ (double)horizontalPadding;
+ (id)imageForCharacter:(unsigned int)arg1;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2;
+ (id)imageForCharacter:(unsigned int)arg1 highlighted:(BOOL)arg2 whiteVersion:(BOOL)arg3;
+ (void)loadNumberPadKeyPrototypeView;
+ (id)localizedLettersForCharacter:(unsigned int)arg1;
+ (double)outerCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (void)resetLocale;
+ (void)resetLocaleIfNeeded;
+ (id)scriptKey;
+ (double)unhighlightCrossfadeHighlightBeginTime;
+ (double)unhighlightCrossfadeHighlightFadeDuration;
+ (double)unhighlightCrossfadeNormalBeginTime;
+ (double)unhighlightCrossfadeNormalFadeDuration;
+ (BOOL)usesBoldAssets;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
+ (double)verticalPadding;
- (void).cxx_destruct;
- (id)defaultColor;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initForCharacter:(unsigned int)arg1;
- (void)loadImagesForCurrentCharacter;
- (void)setHighlighted:(BOOL)arg1;
- (void)setUsesColorBurnBlending;
- (void)setUsesColorDodgeBlending;
- (void)touchCancelled;
- (void)touchDown;
- (void)touchUp;

@end

