//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIKBRenderFactoryiPhone.h>

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone
{
}

- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3;
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;
- (double)_row4ControlSegmentWidthLeft;
- (double)_row4ControlSegmentWidthRight;
- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;
- (double)bottomRowDefaultFontSize;
- (double)cornerRadiusForKey:(id)arg1;
- (double)defaultPathWeight;
- (struct CGSize)defaultVariantGeometrySize;
- (double)defaultVariantSizeThreshold;
- (double)deleteKeyFontSize;
- (id)deleteKeyImageName;
- (struct CGPoint)deleteKeyOffset;
- (id)deleteOnKeyImageName;
- (double)dictationKeyFontSize;
- (id)dictationKeyImageName;
- (struct CGPoint)dictationKeyOffset;
- (double)dismissKeyFontSize;
- (id)dismissKeyImageName;
- (struct CGPoint)dismissKeyOffset;
- (struct CGRect)dismissKeySymbolFrame;
- (id)displayContentsForKey:(id)arg1;
- (double)dualStringKeyFontSizeAdjustment;
- (struct CGPoint)dualStringKeyOffset;
- (double)emailDotKeyFontSize;
- (double)facemarkKeyFontSize;
- (double)fallbackFontSize;
- (double)fontSizeAdjustmentForNonAlphanumericKeycaps;
- (id)globalEmojiKeyImageName;
- (id)globalKeyImageName;
- (BOOL)iPadFudgeLayout;
- (struct CGRect)insetFrame:(struct CGRect)arg1 forKey:(id)arg2;
- (double)internationalKeyFontSize;
- (struct CGPoint)internationalKeyOffset;
- (double)keyCornerRadius;
- (double)keyInsetBottom;
- (id)lightKeycapsFontName;
- (id)lowQualityLayeredBackgroundColorName;
- (double)messagesTypeKeyplanSwitchKeyFontSize;
- (id)messagesWriteboardKeyImageName;
- (double)moreKeyFontSize;
- (id)multitapCompleteKeyImageName;
- (id)muttitapReverseKeyImageName;
- (double)predictiveKeyCornerRadius;
- (struct CGPoint)returnKeyOffset;
- (double)returnKeySymbolFrameInset;
- (long long)rowLimitForKey:(id)arg1;
- (struct CGPoint)secondaryShiftKeyOffset;
- (void)setAllowsPaddles:(BOOL)arg1;
- (void)setupLayoutSegments;
- (double)shiftKeyFontSize;
- (id)shiftKeyImageName;
- (struct CGPoint)shiftKeyOffset;
- (struct CGRect)shiftKeySymbolFrame;
- (id)shiftLockImageName;
- (id)shiftOnKeyImageName;
- (BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1;
- (double)skinnyKeyThreshold;
- (double)smallKanaKeyFontSize;
- (double)spaceKeyFontSize;
- (double)stringKeyFontSize;
- (struct CGPoint)stringKeyOffset;
- (BOOL)supportsGestureBehaviors;
- (BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;
- (double)symbolFrameInset;
- (id)thinKeycapsFontName;
- (double)tinyPunctuationGlyphFontSize;
- (struct CGPoint)tinyPunctuationGlyphOffset;
- (struct UIEdgeInsets)variantDisplayFrameInsets;
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3;
- (struct UIEdgeInsets)variantSymbolFrameInsets;
- (double)zhuyinFirstToneKeyFontSize;

@end

