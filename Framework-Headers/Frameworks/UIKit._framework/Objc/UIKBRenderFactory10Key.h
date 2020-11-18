//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIKBRenderFactory.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactory10Key : UIKBRenderFactory
{
}

+ (BOOL)_isActiveKeyplaneSwitchKey:(id)arg1;
- (id)_preferredScriptFontForRendering:(int)arg1;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (struct CGPoint)abcKeyTextOffset;
- (id)activeControlKeyTraits;
- (double)capitalAbcSymbolSize;
- (id)controlKeyBackgroundColorName;
- (id)controlKeyDividerColorName;
- (id)controlKeyForegroundColorName;
- (id)controlKeyTraits;
- (id)defaultKeyDividerColorName;
- (struct CGPoint)dictationKeyTextOffset;
- (id)displayContentsForKey:(id)arg1;
- (unsigned long long)edgesAdjustedForTranslucentGapsForGeometry:(id)arg1 key:(id)arg2 onKeyplane:(id)arg3;
- (struct CGPoint)globeKeyTextOffset;
- (double)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect)arg1;
- (long long)lightHighQualityEnabledBlendForm;
- (struct CGPoint)longVowelSignKeyTextOffset;
- (double)numberPadKeyPrimarySymbolSize;
- (struct CGPoint)numberPadKeyPrimaryTextOffset;
- (struct CGPoint)numberPadKeySecondaryTextOffset;
- (struct CGPoint)numberPadVBarSecondaryTextOffset;
- (int)roundCornersForKey:(id)arg1 onKeyplane:(id)arg2;
- (void)setupColumnLayoutSegmentsWithControlWidth:(double)arg1;
- (id)shiftedControlKeyTraits;
- (id)shiftedWhiteControlKeyTraits;
- (BOOL)shouldShowBottomRowEdge;
- (BOOL)shouldShowTopRowEdge;
- (struct UIEdgeInsets)topEdgeAdjustmentInsets;
- (BOOL)useRoundCorner;

@end

