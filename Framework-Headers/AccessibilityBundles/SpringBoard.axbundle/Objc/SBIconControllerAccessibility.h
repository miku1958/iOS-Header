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
- (void)_accessibilityDropGrabbedIconsOnReceivingIconView:(id)arg1;
- (long long)_accessibilityIconListCount;
- (long long)_accessibilityIconListIndex;
- (void)_accessibilityMarkIconAsAnimating:(id)arg1;
- (void)_accessibilitySimpleMoveIconDropDidFinish:(id)arg1;
- (void)_accessibilityStatusChanged;
- (void)_accessibilitySwitchControlStatusChanged;
- (void)_accessibilityVoiceOverStatusChanged;
- (id)_axCurrentPageControl;
- (id)_axGrabbedIcons;
- (id)_axGrabbedIconsLabel;
- (id)_axIconScrollView;
- (BOOL)_axIsIconDragging;
- (id)_axLabelForIcons:(id)arg1;
- (id)_axRecipientIconView;
- (void)_axSetCurrentFolderScrollEnabled:(BOOL)arg1;
- (void)closeFolderAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)createNewFolderFromRecipientIcon:(id)arg1 grabbedIcon:(id)arg2;
- (void)handleHomeButtonTap;
- (id)init;
- (void)pushExpandedIcon:(id)arg1 location:(long long)arg2 withTransitionRequest:(id)arg3 animated:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)resetCurrentVisibleIconListImageVisibilityAndJitterState;
- (BOOL)scrollToIconListAtIndex:(long long)arg1 animate:(BOOL)arg2;
- (void)setIsEditing:(BOOL)arg1 withFeedbackBehavior:(id)arg2;

@end
