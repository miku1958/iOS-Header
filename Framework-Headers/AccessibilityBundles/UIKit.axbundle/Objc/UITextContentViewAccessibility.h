//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UITextContentViewAccessibility_super.h>

@interface UITextContentViewAccessibility : __UITextContentViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAttributedValueForRange:(struct _NSRange *)arg1;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetShouldUpdateCache:(BOOL)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (BOOL)_accessibilityShouldAnnounceFontInfo;
- (BOOL)_accessibilityShouldUpdateTextCache;
- (id)_accessibilitySupplementaryHeaderViews;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (struct CGRect)accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (BOOL)keyboardInput:(id)arg1 shouldInsertText:(id)arg2 isMarkedText:(BOOL)arg3;
- (BOOL)keyboardInput:(id)arg1 shouldReplaceTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)keyboardInputChanged:(id)arg1;
- (void)keyboardInputChangedSelection:(id)arg1;

@end

