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
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (id)_accessibilityLinks;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_allowCustomActionHintSpeakOverride;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;
- (id)accessibilityCustomRotorTitles;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)selectAll:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setSelectedRange:(struct _NSRange)arg1;

@end

