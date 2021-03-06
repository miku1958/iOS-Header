//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UIIndexBarAccessoryViewAccessibility_super.h>

@interface UIIndexBarAccessoryViewAccessibility : __UIIndexBarAccessoryViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibiityDisplayEntryNearestToContentOffset:(struct CGPoint)arg1;
- (void)_accessibilityJumpToTableIndex:(id)arg1;
- (void)_accessibilityMoveToIndexAtPosition:(long long)arg1;
- (long long)_axCurrentPosition;
- (id)_axEntries;
- (id)_axLabelForEntry:(id)arg1;
- (void)_axPostNotificationForEntry:(id)arg1;
- (BOOL)_didSelectEntry:(id)arg1 atIndex:(long long)arg2;
- (void)accessibilityDecrement;
- (id)accessibilityFlowToElements;
- (void)accessibilityIncrement;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (BOOL)isAccessibilityElement;

@end

