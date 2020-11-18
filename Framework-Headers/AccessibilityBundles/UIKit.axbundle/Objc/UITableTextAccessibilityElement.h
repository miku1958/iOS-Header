//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@interface UITableTextAccessibilityElement : UIAccessibilityElement
{
    SEL _selector;
    id textDelegate;
    id attributeDelegate;
}

@property (weak, nonatomic) id attributeDelegate; // @synthesize attributeDelegate;
@property (weak, nonatomic) id textDelegate; // @synthesize textDelegate;

- (void).cxx_destruct;
- (id)_accessibilityAllDragSourceDescriptors;
- (id)_accessibilityAllDropPointDescriptors;
- (id)_accessibilityCapturedImages;
- (id)_accessibilityCustomActionGroupIdentifier;
- (double)_accessibilityDelayBeforeUpdatingOnActivation;
- (id)_accessibilityEquivalenceTag;
- (BOOL)_accessibilityImplementsDefaultRowRange;
- (struct _NSRange)_accessibilityIndexPathAsRange;
- (BOOL)_accessibilityIsAwayAlertElement;
- (BOOL)_accessibilityIsInTableCell;
- (BOOL)_accessibilityIsSpeakThisElement;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (long long)_accessibilityScannerActivateBehavior;
- (unsigned long long)_accessibilityScanningBehaviorTraits;
- (id)_accessibilityScrollStatus;
- (struct _NSRange)_accessibilitySelectedTextRange;
- (void)_accessibilitySetSelectedTextRange:(struct _NSRange)arg1;
- (id)_accessibilitySpeakThisString;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityTextViewTextOperationResponder;
- (BOOL)_accessibilityUseElementAtPositionAfterActivation;
- (id)_tableViewCellAttributeDelegate;
- (id)_tableViewCellTextDelegate;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (void)accessibilityElementDidBecomeFocused;
- (void)accessibilityElementDidLoseFocus;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (id)accessibilityLanguage;
- (id)accessibilityLocalizationBundleID;
- (id)accessibilityLocalizationBundlePath;
- (id)accessibilityLocalizedStringKey;
- (id)accessibilityLocalizedStringTableName;
- (BOOL)accessibilityRespondsToUserInteraction;
- (struct _NSRange)accessibilityRowRange;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityUserInputLabels;
- (id)accessibilityValue;
- (BOOL)canBecomeFocused;
- (id)description;

@end
