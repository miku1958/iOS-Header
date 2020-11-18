//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIAccessibilityElement.h>

@class UIPickerView;

@interface UIAccessibilityPickerComponent : UIAccessibilityElement
{
    unsigned long long _component;
    UIPickerView *_picker;
}

@property (nonatomic) unsigned long long component; // @synthesize component=_component;
@property (weak, nonatomic) UIPickerView *picker; // @synthesize picker=_picker;

- (void).cxx_destruct;
- (unsigned long long)_accessibilityDatePickerComponentType;
- (id)_accessibilityDateTimePickerValues;
- (long long)_accessibilityIndexForPickerString:(id)arg1;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityMoveSelection:(long long)arg1;
- (int)_accessibilityPickerType;
- (id)_accessibilityScrollStatus;
- (id)_accessibilityUserTestingChildren;
- (id)_accessibilityViewForComponent;
- (BOOL)_isRowDisabledInWebKit:(long long)arg1;
- (void)accessibilityDecrement;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (BOOL)accessibilityScroll:(long long)arg1;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;

@end

