//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SBIconViewAccessibility_super.h"

@interface SBIconViewAccessibility : __SBIconViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityAddToFolderActions:(id)arg1;
- (void)_accessibilityBeginOrEndSimpleMoveAction:(id)arg1;
- (BOOL)_accessibilityBeginSimpleMove;
- (id)_accessibilityBundleIdentifier;
- (BOOL)_accessibilityCanPerformEscapeAction;
- (void)_accessibilityCancelMove;
- (void)_accessibilityCreateNewFolder;
- (void)_accessibilityDropFromFolderAction:(id)arg1;
- (BOOL)_accessibilityElementShouldBeInvalid;
- (BOOL)_accessibilityHasBadge;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilityIconPlacementActions:(id)arg1;
- (BOOL)_accessibilityIsInCmdTabSwitcher;
- (BOOL)_accessibilityIsInFolder;
- (BOOL)_accessibilityIsInShortcutMenu;
- (void)_accessibilityMoveAfter;
- (void)_accessibilityMoveBefore;
- (BOOL)_accessibilityRetainsCustomRotorActionSetting;
- (id)_accessibilityScrollStatus;
- (BOOL)_accessibilityStartJiggleMode;
- (id)_accessibilitySupportGesturesAttributes;
- (BOOL)_accessibilitySupportsActivateAction;
- (id)_accessibilityUserTestingChildren;
- (void)_updateCloseBoxAnimated:(BOOL)arg1;
- (BOOL)accessibilityActivate;
- (id)accessibilityCustomActions;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityIdentifier;
- (id)accessibilityLabel;
- (BOOL)accessibilityPerformEscape;
- (BOOL)accessibilityPerformMagicTap;
- (BOOL)accessibilityScrollToVisible;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end

