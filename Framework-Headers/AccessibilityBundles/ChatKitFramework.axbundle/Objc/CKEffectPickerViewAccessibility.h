//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__CKEffectPickerViewAccessibility_super.h"

@interface CKEffectPickerViewAccessibility : __CKEffectPickerViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_axUpdateCloseButton;
- (void)_axUpdateScrollView;
- (void)_touchUpInsideDotButton:(id)arg1;
- (id)accessibilityElements;
- (BOOL)accessibilityScroll:(long long)arg1;
- (BOOL)accessibilityViewIsModal;
- (void)addEffect:(id)arg1 withDescriptiveText:(id)arg2 withIdentifier:(id)arg3;
- (void)cancelImpactSelection;
- (void)effectTypeDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sendButtonFrame:(struct CGRect)arg2 balloonViewOrigin:(struct CGPoint)arg3 composition:(id)arg4;

@end
