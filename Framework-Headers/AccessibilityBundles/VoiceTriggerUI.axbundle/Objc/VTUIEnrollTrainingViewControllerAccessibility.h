//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__VTUIEnrollTrainingViewControllerAccessibility_super.h"

@interface VTUIEnrollTrainingViewControllerAccessibility : __VTUIEnrollTrainingViewControllerAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)AXSuspendAudioTimer;
- (void)_accessibilityLoadAccessibilityInformation;
- (void)_accessibilitySuperShowTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(BOOL)arg3 animate:(BOOL)arg4;
- (void)_axAnnounceInstructionWithNumber:(long long)arg1;
- (void)_axAnnounceString:(id)arg1;
- (void)_axHandleAnnouncementDidFinishNotification:(id)arg1;
- (void)_axHandleElementFocusedNotification:(id)arg1;
- (void)_axHandleSuspendAudioTimerFired:(id)arg1;
- (void)_axHandleVoiceOverStatusChangedNotification:(id)arg1;
- (void)_axSetShowTrainingInstructionBlock:(CDUnknownBlockType)arg1;
- (CDUnknownBlockType)_axShowTrainingInstructionBlock;
- (void)_axSuspendAudio:(BOOL)arg1;
- (void)_continueFromIntro:(id)arg1;
- (void)_setupViews;
- (void)_showEnrollmentSuccessView;
- (void)_showIntroView;
- (void)_showStatusMessage:(id)arg1 afterDelay:(double)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_showTrainingInstruction:(long long)arg1 afterDelay:(double)arg2 isRetry:(BOOL)arg3 animate:(BOOL)arg4;
- (void)_triggerEndpoint:(id)arg1;
- (void)dealloc;
- (void)setAXSuspendAudioTimer:(id)arg1;

@end

