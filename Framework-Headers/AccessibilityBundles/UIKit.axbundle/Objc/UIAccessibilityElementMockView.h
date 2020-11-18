//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIView;
@protocol UIAccessibilityElementMockViewDelegateProtocol;

@interface UIAccessibilityElementMockView : UIAccessibilityElement
{
    id<UIAccessibilityElementMockViewDelegateProtocol> _delegate;
    long long _subviewIndex;
    UIView *_view;
}

@property (weak, nonatomic) id<UIAccessibilityElementMockViewDelegateProtocol> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long subviewIndex; // @synthesize subviewIndex=_subviewIndex;
@property (strong, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (struct CGRect)_accessibilityBoundsForRange:(struct _NSRange)arg1;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityHitTestShouldFallbackToNearestChild;
- (BOOL)_accessibilityIsScannerElement;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)_accessibilityIsSpeakThisElement;
- (id)_accessibilityLineNumberAndColumnForPoint:(struct CGPoint)arg1;
- (struct _NSRange)_accessibilityLineRangeForPosition:(unsigned long long)arg1;
- (struct CGPoint)_accessibilityMaxScrubberPosition;
- (struct CGPoint)_accessibilityMinScrubberPosition;
- (long long)_accessibilityPageCount;
- (long long)_accessibilityPageIndex;
- (struct _NSRange)_accessibilityRangeForLineNumberAndColumn:(id)arg1;
- (id)_accessibilityScannerGroupElements;
- (int)_accessibilityScannerGroupTraits;
- (id)_accessibilityScrollAncestor;
- (BOOL)_accessibilityScrollToVisible;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (void)_accessibilitySetValue:(id)arg1;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityUserTestingElementType;
- (id)_accessibilityUserTestingParent;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (long long)accessibilityCompareGeometry:(id)arg1;
- (id)accessibilityContainerElements;
- (id)accessibilityCustomActions;
- (id)accessibilityCustomRotors;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentification;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (struct _NSRange)accessibilityRowRange;
- (BOOL)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (struct CGPoint)convertPoint:(struct CGPoint)arg1 fromView:(id)arg2;
- (void)dealloc;
- (id)description;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (void)revalidate;
- (void)setAccessibilityContainer:(id)arg1;

@end

