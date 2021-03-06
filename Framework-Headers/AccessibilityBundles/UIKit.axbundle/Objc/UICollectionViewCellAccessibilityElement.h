//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath, UICollectionViewCell;

@interface UICollectionViewCellAccessibilityElement : UIAccessibilityElement
{
    UICollectionViewCell *_cell;
    BOOL _usingRealCell;
    NSIndexPath *_indexPath;
}

@property (strong, nonatomic) UICollectionViewCell *cell; // @synthesize cell=_cell;
@property (strong, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;

- (void).cxx_destruct;
- (unsigned long long)_accessibilityAutomationType;
- (BOOL)_accessibilityBackingElementIsValid;
- (BOOL)_accessibilityCanBecomeNativeFocused;
- (id)_accessibilityCollectionViewCellContentSubviews;
- (void)_accessibilityCopy;
- (void)_accessibilityCut;
- (id)_accessibilityDataDetectorScheme:(struct CGPoint)arg1;
- (BOOL)_accessibilityHasNativeFocus;
- (BOOL)_accessibilityHasTextOperations;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsOutsideParentBounds;
- (BOOL)_accessibilityIsScannerGroup;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityPaste;
- (void)_accessibilityRedo;
- (long long)_accessibilityScannerActivateBehavior;
- (void)_accessibilitySelect;
- (void)_accessibilitySelectAll;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (id)_accessibilitySemanticContextForElement:(id)arg1;
- (BOOL)_accessibilitySetNativeFocus;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (BOOL)_accessibilityShouldAttemptScrollToFrameOnParentView;
- (BOOL)_accessibilityShouldIncludeRowRangeInElementDescription;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextOperations;
- (id)_accessibilityTextViewTextOperationResponder;
- (void)_accessibilityUndo;
- (id)_accessibilityUserTestingChildren;
- (BOOL)_accessibilityUserTestingIsCancelButton;
- (BOOL)_accessibilityUserTestingIsDefaultButton;
- (BOOL)_accessibilityUserTestingIsDestructiveButton;
- (BOOL)_accessibilityUserTestingIsPreferredButton;
- (id)_accessibilityUserTestingProxyView;
- (id)_accessibilityUserTestingVisibleAncestor;
- (BOOL)_accessibilityViewHierarchyHasNativeFocus;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (BOOL)accessibilityRespondsToUserInteraction;
- (struct _NSRange)accessibilityRowRange;
- (BOOL)accessibilityScrollToVisibleWithChild:(id)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (void)dealloc;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (BOOL)isAccessibilityElement;
- (id)realCell;
- (BOOL)shouldGroupAccessibilityChildren;

@end

