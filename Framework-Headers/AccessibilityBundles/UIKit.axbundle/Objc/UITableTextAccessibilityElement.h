//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class NSIndexPath;

@interface UITableTextAccessibilityElement : UIAccessibilityElement
{
    id _attributeDelegate;
    SEL _selector;
    NSIndexPath *fallbackIndexPath;
    id textDelegate;
}

@property (strong, nonatomic) NSIndexPath *fallbackIndexPath; // @synthesize fallbackIndexPath;
@property (nonatomic) id textDelegate; // @synthesize textDelegate;

- (id)_accessibilityCustomActions;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (id)_accessibilityEquivalenceTag;
- (id)_accessibilityIndexPath;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsInTableCell;
- (BOOL)_accessibilityIsScannerElement;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (int)_accessibilityScannerActivateBehavior;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (id)_accessibilitySpeakThisString;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextViewTextOperationResponder;
- (id)_tableViewCellAttributeDelegate;
- (id)_tableViewCellTextDelegate;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityCustomRotorItemsAtIndex:(long long)arg1;
- (id)accessibilityCustomRotorTitles;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (struct _NSRange)accessibilityRowRange;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)attributeDelegate;
- (void)dealloc;
- (id)description;
- (void)setAttributeDelegate:(id)arg1;

@end
