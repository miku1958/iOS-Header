//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AXSpringBoardServerInstance/AVSpeechSynthesizerDelegate-Protocol.h>
#import <AXSpringBoardServerInstance/AXSBVoiceOverSwipeDetectorDelegate-Protocol.h>
#import <AXSpringBoardServerInstance/BBObserverDelegate-Protocol.h>

@class AXAccessQueueTimer, AXDispatchTimer, NSString, UIWindow;

@interface AXSpringBoardSettingsLoader : NSObject <AXSBVoiceOverSwipeDetectorDelegate, BBObserverDelegate, AVSpeechSynthesizerDelegate>
{
    UIWindow *_voiceOverVibrateWindow;
    AXAccessQueueTimer *_voiceOverActivationCanceler;
    AXDispatchTimer *_managedConfigurationNotificationCoalesceTimer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)_checkAccessibilityOptionsSetByiTunes;
+ (void)_checkClosedCaptioningSetByitunes;
+ (void)_checkContrastSetting;
+ (void)_checkInvertColorsSetByiTunes;
+ (void)_checkMonoAudioSetByiTunes;
+ (void)_checkSpeakAutofillSetByiTunes;
+ (void)_checkVoiceOverTouchSetByiTunes;
+ (void)_checkZoomTouchSetByiTunes;
+ (void)_findNoteFromLoginSessionWithCompletion:(CDUnknownBlockType)arg1;
+ (void)_registerForNotifications;
+ (void)_setVoiceOverTouchSettings:(unsigned char)arg1;
+ (void)_updateAXSettings;
+ (void)_updateSpringBoardHelper;
+ (void)bootstrapGuidedAccessIfNeeded;
+ (void)checkAccessibilityOptions;
+ (void)checkScreenContrast;
+ (void)initialize;
- (void)_handleGuidedAccessManagedConfigurationDidChange:(id)arg1;
- (void)_hideVoiceOverEnabler;
- (void)_initializeRemoteSettingsListener;
- (BOOL)_isDeviceAffectedByVOActivationWorkaround;
- (void)_makeVoiceOverVibrateWindow;
- (void)_playVOActivationSoundEnded;
- (void)_playVOActivationSoundStarted;
- (void)_reachabilityChanged:(id)arg1;
- (void)_registerForSpokenNotes;
- (void)_registerReachability;
- (void)_remoteAccessibilitySettingsChanged:(id)arg1;
- (void)_showSwipeDetectionEnablerView;
- (void)_showVibrationVoiceOverEnablerView;
- (void)_updateAXSettings;
- (void)_updateRemoteAccessibilitySettings;
- (void)_voiceOverEnabled:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(BOOL)arg4 withReply:(CDUnknownBlockType)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)swipeDetectorCanceled;
- (void)swipeDetectorDetectedSwipe;

@end
