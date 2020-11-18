//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__RemindersCheckboxCellAccessibility_super.h"

@interface RemindersCheckboxCellAccessibility : __RemindersCheckboxCellAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (BOOL)_accessibilityCanDeleteTableViewCell;
- (long long)_accessibilityIndexOfCheckbox;
- (BOOL)_accessibilityIsCheckbox:(id)arg1;
- (BOOL)_accessibilityIsNewReminderCell;
- (BOOL)_accessibilityIsSearchReminderCell;
- (BOOL)_accessibilityIsSpeakThisElement;
- (void)_accessibilityLoadAccessibilityInformation;
- (id)_accessibilityRetrieveTableViewIvarsText;
- (BOOL)_accessibilityTableViewCellSubclassShouldExist;
- (void)_axAnnotateTextView;
- (BOOL)_axInNotificationCenter;
- (id)_axTextView;
- (id)accessibilityCustomActions;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (id)accessibilityHint;
- (BOOL)accessibilityIsEditingReminder;
- (id)accessibilityLabel;
- (void)accessibilityUpdateChildren;
- (void)dealloc;
- (void)didMoveToWindow;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 appearance:(int)arg3 contentMask:(unsigned long long)arg4 deadlinePosition:(unsigned long long)arg5 width:(double)arg6;
- (void)setAccessoryType:(long long)arg1;
- (struct CGRect)tableTextAccessibleFrame:(id)arg1;

@end
