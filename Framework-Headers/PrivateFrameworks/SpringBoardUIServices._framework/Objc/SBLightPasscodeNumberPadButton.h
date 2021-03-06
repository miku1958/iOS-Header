//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUI/TPNumberPadLightStyleButton.h>

#import <SpringBoardUIServices/SBUIPasscodeNumberPadButton-Protocol.h>

@class NSString, UIColor;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>
{
    UIColor *_reduceTransparencyButtonColor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *reduceTransparencyButtonColor; // @synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor;
@property (readonly) Class superclass;

+ (double)_numberPadButtonOuterCircleDiameter;
+ (BOOL)_shouldUseAlternativeCirlceViewAlphas;
+ (struct CGSize)defaultSize;
+ (double)highlightedCircleViewAlpha;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (double)unhighlightedCircleViewAlpha;
+ (BOOL)usesTelephonyGlyphsWhereAvailable;
- (void).cxx_destruct;
- (int)characterType;
- (void)conformsToSBUIPasscodeNumberPadButton;
- (id)initForCharacter:(long long)arg1;
- (id)stringCharacter;

@end

