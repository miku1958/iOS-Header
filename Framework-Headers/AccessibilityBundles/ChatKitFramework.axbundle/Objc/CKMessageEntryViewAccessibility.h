//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__CKMessageEntryViewAccessibility_super.h"

@interface CKMessageEntryViewAccessibility : __CKMessageEntryViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (void)_accessibilityApplyArrowLabel;
- (void)_accessibilityApplyBrowserLabel;
- (void)_accessibilityApplyPhotoLabel;
- (void)_accessibilityApplyPlaceholderLabel;
- (void)_accessibilityApplySelectedTraitToMediaButton;
- (BOOL)_accessibilityIsMediaJoystickVisible;
- (void)_accessibilityLoadAccessibilityInformation;
- (BOOL)_accessibilityOnlyComparesByXAxis;
- (BOOL)accessibilityElementsHidden;
- (BOOL)accessibilityViewIsModal;
- (void)arrowButtonTapped:(id)arg1;
- (void)audioMenuItemAction:(id)arg1;
- (void)audioReplyButtonCancel:(id)arg1;
- (void)audioReplyButtonStart:(id)arg1;
- (void)audioReplyButtonStop:(id)arg1;
- (void)browserButtonTapped:(id)arg1;
- (void)collapsedPlaceholderLabelTapped:(id)arg1;
- (void)configureAudioActionMenuControllerForPlayback:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect)arg1 marginInsets:(struct UIEdgeInsets)arg2 shouldAllowImpact:(BOOL)arg3 shouldShowSendButton:(BOOL)arg4 shouldShowSubject:(BOOL)arg5 shouldShowPluginButtons:(BOOL)arg6 shouldShowCharacterCount:(BOOL)arg7;
- (void)layoutSubviews;
- (void)loadRecordedAudioViewsIfNeeded;
- (void)presentAudioActionMenu;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)touchUpInsideDeleteAudioRecordingButton:(id)arg1;
- (void)touchUpInsideSendButton:(id)arg1;
- (void)updateEntryView;

@end

