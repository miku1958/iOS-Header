//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBRenderFactory.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory_Monolith : UIKBRenderFactory
{
}

- (id)_activeTraitsForKey:(id)arg1;
- (id)_activeTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_activeTraitsForLetterKey:(id)arg1;
- (id)_disabledTraitsForKey:(id)arg1;
- (id)_disabledTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_disabledTraitsForLetterKey:(id)arg1;
- (id)_enabledTraitsForKey:(id)arg1;
- (id)_enabledTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_enabledTraitsForLetterKey:(id)arg1;
- (id)_highlightedTraitsForKey:(id)arg1;
- (id)_highlightedTraitsForKeyplaneSwitchKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_highlightedTraitsForLetterKey:(id)arg1;
- (struct CGPoint)_textOffsetForKey:(id)arg1;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (id)_variantTraitsForLetterKey:(id)arg1;
- (id)backgroundTraitsForKeyplane:(id)arg1;
- (void)configureCornersOnGeometry:(id)arg1 forKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forActiveKeyplaneSwitchKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forActiveLetterKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forEnabledKeyplaneSwitchKey:(id)arg2;
- (void)configureSymbolStyle:(id)arg1 forEnabledLetterKey:(id)arg2;
- (id)disabledTextColor;
- (id)displayContentsForKey:(id)arg1;
- (id)enabledTextColor;
- (id)highlightedKeyColor;
- (double)highlightedLetterKeyFontSize;
- (double)highlightedSpaceKeyFontSize;
- (id)highlightedTextColor;
- (double)highlightedTextKeyFontSize;
- (id)highlightedVariantKeyColor;
- (BOOL)includeDeleteInVariants;
- (double)keyRoundRectRadius;
- (double)letterKeyFontSize;
- (double)letterKeyFontWeight;
- (BOOL)preferGlyphForClear;
- (BOOL)preferGlyphForDelete;
- (double)shadowRadius;
- (double)shadowYOffset;
- (double)spaceKeyFontSize;
- (BOOL)spaceKeyIsPressed;
- (double)textKeyFontSize;
- (double)textKeyFontWeight;
- (id)variantKeyColor;

@end

