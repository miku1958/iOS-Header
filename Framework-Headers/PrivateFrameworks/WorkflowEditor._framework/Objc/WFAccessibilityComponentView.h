//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class WFAccessibilityActionComponent;

@interface WFAccessibilityComponentView : UIView
{
}

@property (strong, nonatomic, setter=ck_setComponent:) WFAccessibilityActionComponent *ck_component; // @dynamic ck_component;

- (id)_ck_accessibilityTarget;
- (BOOL)accessibilityActivate;
- (struct CGPoint)accessibilityActivationPoint;
- (id)accessibilityAttributedValue;
- (void)accessibilityDecrement;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;

@end

