//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__PHHandsetDialerLCDViewAccessibility_super.h"

@interface PHHandsetDialerLCDViewAccessibility : __PHHandsetDialerLCDViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (double)_accessibilityAllowedGeometryOverlap;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilitySubviews;
- (void)_voStatusChanged:(id)arg1;
- (void)dealloc;
- (void)deleteBackward;
- (void)deleteCharacter;
- (BOOL)hasText;
- (id)initWithFrame:(struct CGRect)arg1 forDialerType:(int)arg2;
- (void)insertText:(id)arg1;
- (void)setText:(id)arg1 needsFormat:(BOOL)arg2;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)updateAddAndDeleteButtonForText:(id)arg1 name:(id)arg2 animated:(BOOL)arg3;

@end

