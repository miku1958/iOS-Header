//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UITextFieldAccessibility_super.h>

@interface UITextFieldAccessibility : __UITextFieldAccessibility_super
{
}

+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (long long)_accessibilityCountAccessibleChildren:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (id)_accessibilityInternalFakeTextField;
- (id)_accessibilityInternalFakeTextField:(BOOL)arg1;
- (id)_accessibilityLeftButtons;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityPlaceholderValue:(BOOL)arg1;
- (id)_accessibilityResponderElement;
- (id)_accessibilityRightButtons;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTextFieldText;
- (BOOL)_axTextFieldIsHidden;
- (void)_clearButtonClicked:(id)arg1;
- (struct CGPoint)accessibilityActivationPoint;
- (BOOL)accessibilityElementIsFocused;
- (id)accessibilityElements;
- (id)accessibilityLabel;
- (id)accessibilityPlaceholderValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;

@end
