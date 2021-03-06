//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UISwitchAccessibility_super.h>

@interface UISwitchAccessibility : __UISwitchAccessibility_super
{
}

@property (nonatomic, setter=_accessibilitySetIsAccessibleViaTableViewCell:) BOOL _accessibilityIsAccessibleViaTableViewCell;

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (unsigned long long)_accessibilityAutomationType;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityKeyCommands;
- (BOOL)_accessibilitySupportsActivateAction;
- (void)_fkaSwitchOff;
- (void)_fkaSwitchOn;
- (void)_keyboardActivate;
- (id)_viewToAddFocusLayer;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityLabel;
- (id)accessibilityPath;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)setEnabled:(BOOL)arg1;

@end

