//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UITextViewAccessibility_super.h>

@interface UITextViewAccessibility : __UITextViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAttributedTextRetrieval;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (double)_accessibilityFontSize;
- (id)_accessibilityGetValue;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityOverridesLabelValueHintSelector:(SEL)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViews;
- (id)_accessibilityTextSelectionRectWithLargestVisualRangeFromCandidates:(id)arg1;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityAttributedValue;
- (id)accessibilityCustomRotors;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityPlaceholderValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)resignFirstResponder;
- (void)setAttributedPlaceholder:(id)arg1;
- (void)setAttributedText:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;

@end

