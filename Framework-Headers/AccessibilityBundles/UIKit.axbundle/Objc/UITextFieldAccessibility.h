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
- (id)_accessibilityInternalButton;
- (id)_accessibilityInternalData;
- (id)_accessibilityNativeFocusPreferredElement;
- (id)_accessibilityPlaceholderValue:(BOOL)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (void)_accessibilitySwitchOrderedChildrenFrom:(id)arg1;
- (id)_accessibilityTextFieldElement;
- (id)_accessibilityTextFieldText;
- (void)_accessibilityUpdateButtons;
- (BOOL)_axTextFieldIsHidden;
- (void)_clearButtonClicked:(id)arg1;
- (void)_updateButtons;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (BOOL)accessibilityElementIsFocused;
- (id)accessibilityLabel;
- (id)accessibilityPlaceholderValue;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (BOOL)fieldEditor:(id)arg1 shouldInsertText:(id)arg2 replacingRange:(struct _NSRange)arg3;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (void)keyboardInputChangedSelection:(id)arg1;
- (void)layoutSubviews;
- (void)paste:(id)arg1;
- (void)selectAll:(id)arg1;

@end

