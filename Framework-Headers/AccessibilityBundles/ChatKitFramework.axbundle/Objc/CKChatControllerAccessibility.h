//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__CKChatControllerAccessibility_super.h"

@interface CKChatControllerAccessibility : __CKChatControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilitySpeakThisElementsAndStrings;
- (id)_actionsToolbar;
- (long long)_axCurrentLayoutIntent;
- (id)_axCurrentTargetBalloonView;
- (id)_axDescriptionForMessageEffectIdentifier:(id)arg1;
- (unsigned long long)_axLayoutIntentForTarget:(id)arg1 inBalloonView:(id)arg2;
- (void)_axSetCurrentLayoutIntent:(long long)arg1;
- (void)_axSetCurrentTargetBalloonView:(id)arg1;
- (void)_showPhotoPickerWithSourceType:(long long)arg1;
- (void)_showVCalViewerForMediaObject:(id)arg1;
- (BOOL)accessibilityPerformEscape;
- (void)actionMenuGestureRecognizerButtonGestureDidEnd:(id)arg1;
- (void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2;
- (void)dragManagerDidBeginDragging:(id)arg1;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)messageEntryViewSendButtonHit:(id)arg1;
- (void)sendSticker:(id)arg1 withDragTarget:(id)arg2;
- (void)setEffectPickerWindow:(id)arg1;
- (BOOL)transcriptCollectionViewController:(id)arg1 shouldSetupFullscreenEffectUI:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 willBeginImpactEffectAnimationWithSendAnimationContext:(id)arg2;

@end

