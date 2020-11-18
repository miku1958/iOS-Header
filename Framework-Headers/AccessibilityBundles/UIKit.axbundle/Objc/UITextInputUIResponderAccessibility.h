//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UITextInputUIResponderAccessibility_super.h>

@interface UITextInputUIResponderAccessibility : __UITextInputUIResponderAccessibility_super
{
}

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (void)_accessibilityCheckBorderHit:(BOOL)arg1 left:(BOOL)arg2;
- (long long)_accessibilityLineEndPosition;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (long long)_accessibilityLineStartPosition;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (id)_accessibilitySpeakThisString;
- (long long)_accessibilityTextInputLinePosition:(BOOL)arg1;
- (id)_accessibilityTextRectsForSpeakThisStringRange:(struct _NSRange)arg1;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_moveLeft:(BOOL)arg1 withHistory:(id)arg2;
- (void)_moveRight:(BOOL)arg1 withHistory:(id)arg2;
- (void)_updateSelectionWithTextRange:(id)arg1 withAffinityDownstream:(BOOL)arg2;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;

@end

