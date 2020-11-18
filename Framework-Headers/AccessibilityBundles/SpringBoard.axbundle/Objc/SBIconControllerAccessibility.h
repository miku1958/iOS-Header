//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__SBIconControllerAccessibility_super.h"

@interface SBIconControllerAccessibility : __SBIconControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityCancelSBAXIconMoveSpeakTimer;
- (BOOL)_accessibilityCloseOpenFolder;
- (void)_accessibilityCompactDestinationListWithPlaceholderPath:(id)arg1;
- (void)_accessibilityDropGrabbedIconAndContinueEditing:(BOOL)arg1;
- (void)_accessibilityDropGrabbedIconOnReceivingIcon:(id)arg1;
- (BOOL)_accessibilityDropIconIntoEmptyDock;
- (BOOL)_accessibilityDropIconOntoNewPage;
- (void)_accessibilityDropIconWithPath:(id)arg1 compactDestinationListNow:(BOOL *)arg2 dropComplete:(CDUnknownBlockType)arg3;
- (void)_accessibilityEndSimpleMove;
- (long long)_accessibilityIconListCount;
- (long long)_accessibilityIconListIndex;
- (BOOL)_accessibilityIconMovedToPosition;
- (void)_accessibilityMarkIconAsAnimating:(id)arg1;
- (void)_accessibilityMarkIconAsReadyToMove:(id)arg1;
- (void)_accessibilityMarkIconAsRecipient:(id)arg1;
- (void)_accessibilityMoveIcon:(id)arg1 inFolder:(id)arg2 toIndex:(unsigned long long)arg3 inListView:(id)arg4 folder:(id)arg5;
- (void)_accessibilityMoveIcon:(id)arg1 nextToIcon:(id)arg2 shouldPlaceBefore:(BOOL)arg3;
- (void)_accessibilityPerformMoveByDragAndDrop:(id)arg1;
- (void)_accessibilityPerformSimpleMove:(id)arg1;
- (void)_accessibilityPickUpIcon:(id)arg1;
- (void)_accessibilitySBAXIconFolderOpeningTimerFired;
- (void)_accessibilitySimpleMoveIconDropDidFinish:(id)arg1;
- (void)_accessibilityStatusChanged;
- (void)_accessibilitySwitchControlStatusChanged;
- (void)_accessibilityVoiceOverStatusChanged;
- (id)_axCurrentPageControl;
- (void)_cancelFolderSpringloadTimer;
- (BOOL)_dismissRightEdgeSpotlight:(BOOL)arg1;
- (void)_resetFolderSpringloadTimer;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (void)handleHomeButtonTap;
- (void)iconTouchBegan:(id)arg1;
- (id)init;
- (BOOL)isIconVisiblyRepresented:(id)arg1;
- (void)noteGrabbedIconLocationChangedWithTouch:(id)arg1;
- (void)popExpandedIconWithTransitionRequest:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pushExpandedIcon:(id)arg1 withTransitionRequest:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (BOOL)scrollToIconListAtIndex:(long long)arg1 animate:(BOOL)arg2;
- (void)setGrabbedIcon:(id)arg1;
- (void)setIsEditing:(BOOL)arg1;
- (void)setRecipientIcon:(id)arg1 duration:(double)arg2;

@end

