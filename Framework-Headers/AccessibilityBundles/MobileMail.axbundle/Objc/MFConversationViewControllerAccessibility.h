//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__MFConversationViewControllerAccessibility_super.h"

@interface MFConversationViewControllerAccessibility : __MFConversationViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityFirstElementForFocus;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilityPerformLeadingActionWithCell:(id)arg1;
- (id)_accessibilityTitleForLeadingActionWithCell:(id)arg1;
- (id)_axAutomaticallyMarkReadTimer;
- (void)_axCancelMarkAsReadTimer;
- (id)_axElementForFocusInCell:(id)arg1;
- (id)_axFirstVisibleCell;
- (BOOL)_axFocusOnReferenceMessage;
- (id)_axMessageSubjectView;
- (void)_axSetAutomaticallyMarkReadTimer:(id)arg1;
- (void)_axSetFocusOnReferenceOnMessage:(BOOL)arg1;
- (void)_axSetSkipNextFocusOnMessage:(BOOL)arg1;
- (void)_axSimulateTapArrowButtonWithDirection:(int)arg1;
- (BOOL)_axSkipNextFocusOnMessage;
- (id)_previewActionForTriageAction:(unsigned long long)arg1 withMessages:(id)arg2 forSwipe:(BOOL)arg3;
- (void)_scrollToReferenceMessage;
- (void)_shrinkMessagesToBarButton:(id)arg1 withInteraction:(id)arg2;
- (id)accessibilityCustomRotors;
- (BOOL)accessibilityScroll:(long long)arg1;
- (id)arrowControlsView;
- (void)arrowControlsView:(id)arg1 didTapButtonWithDirection:(int)arg2;
- (void)cancelAutomaticMarkAsReadForMessage:(id)arg1;
- (void)invalidateAutomaticMarkAsReadForAllMessages;
- (void)messageViewControllerDidTapRevealActionsButton:(id)arg1;
- (void)scheduleAutomaticMarkAsReadForMessage:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end

