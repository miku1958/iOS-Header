//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@interface UIView (TVMLKitAdditions)
+ (void)tv_performByPreventingAdditiveAnimations:(CDUnknownBlockType)arg1;
- (void)_transferAttributesFromElement:(id)arg1;
- (void)didSelect;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3;
- (void)setValue:(id)arg1 forTVViewStyle:(id)arg2;
- (void)transferLayoutStylesFromElement:(id)arg1;
- (id)tv_AccessibilityText;
- (long long)tv_alignment;
- (struct UIEdgeInsets)tv_alignmentInsetsForExpectedWidth:(double)arg1;
- (id)tv_backgroundColor;
- (long long)tv_contentAlignment;
- (void)tv_disableAnimation:(BOOL)arg1 forProperty:(id)arg2;
- (id)tv_elementName;
- (unsigned long long)tv_elementType;
- (struct UIEdgeInsets)tv_focusMargin;
- (id)tv_highlightColor;
- (id)tv_impressionableElementsForDocument:(id)arg1;
- (id)tv_impressionableElementsForDocument:(id)arg1 parentViewController:(id)arg2;
- (double)tv_interitemSpacing;
- (BOOL)tv_isAnimationDisabledForProperty:(id)arg1;
- (BOOL)tv_isPrototypeView;
- (double)tv_itemHeight;
- (double)tv_itemWidth;
- (id)tv_layout;
- (double)tv_lineSpacing;
- (struct UIEdgeInsets)tv_margin;
- (BOOL)tv_marqueeOnHighlight;
- (double)tv_maxHeight;
- (double)tv_maxWidth;
- (double)tv_minHeight;
- (double)tv_minWidth;
- (struct UIEdgeInsets)tv_nonDirectionalMargin;
- (struct UIEdgeInsets)tv_padding;
- (long long)tv_position;
- (void)tv_setAccessibilityText:(id)arg1;
- (void)tv_setLayout:(id)arg1;
- (void)tv_setShowcaseFactor:(double)arg1;
- (void)tv_setSiriData:(id)arg1;
- (void)tv_setValue:(id)arg1 forTVViewTag:(id)arg2;
- (BOOL)tv_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)tv_shouldReuseCachedSizeThatFits:(struct CGSize)arg1 previousTargetSize:(struct CGSize)arg2 newTargetSize:(struct CGSize)arg3;
- (BOOL)tv_showOnHighlight;
- (id)tv_siriData;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)tv_sizeThatFits:(struct CGSize)arg1 withSizeCalculation:(CDUnknownBlockType)arg2;
- (id)tv_valueForTVViewTag:(id)arg1;
- (id)valueForTVViewStyle:(id)arg1;
@end

