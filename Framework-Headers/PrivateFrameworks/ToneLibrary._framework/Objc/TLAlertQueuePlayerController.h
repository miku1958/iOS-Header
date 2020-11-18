//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/TLAlertPlaybackBackEndController-Protocol.h>

@class AVQueuePlayer, NSString, TLAlert;
@protocol OS_dispatch_queue;

@interface TLAlertQueuePlayerController : NSObject <TLAlertPlaybackBackEndController>
{
    NSObject<OS_dispatch_queue> *_audioEventQueue;
    NSString *_audioEventQueueLabel;
    BOOL _isObservingQueuePlayer;
    AVQueuePlayer *_queuePlayer;
    TLAlert *_playingAlert;
    NSString *_playingToneIdentifier;
    CDUnknownBlockType _playingAlertCompletionHandler;
    NSString *_previousAudioCategory;
    unsigned long long _previousAudioCategoryOptions;
    BOOL _isBypassingRingerSwitchPolicy;
    BOOL _isAudioSessionActive;
    unsigned long long _audioSessionDeactivationPreventionRequestsCount;
    BOOL _isObservingAudioSessionInterruptionNotification;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_audioCategoryForAlert:(id)arg1;
+ (id)_clientNameForAlert:(id)arg1;
+ (long long)_clientPriorityForAlert:(id)arg1;
+ (id)_propertyKeysOfInterestForToneAssets;
+ (BOOL)_shouldBypassRingerSwitchPolicyForAlert:(id)arg1;
+ (BOOL)_shouldHandleAudioSessionActivationForAlert:(id)arg1;
+ (BOOL)_shouldVibrateForAlert:(id)arg1;
- (void).cxx_destruct;
- (void)_activateAudioSessionIfNeeded;
- (void)_assertRunningOnAudioEventQueue;
- (float)_audioVolumeForAlert:(id)arg1 audioCategory:(id)arg2;
- (void)_beginPreventingAudioSessionDeactivation;
- (BOOL)_canPlayToneAsset:(id)arg1;
- (void)_createQueuePlayerIfNecessary;
- (void)_deactivateAudioSessionIfNeeded;
- (void)_destroyQueuePlayer;
- (void)_didCompletePlaybackWithCompletionType:(long long)arg1 error:(id)arg2;
- (void)_didEndPlayingAlert;
- (void)_endPreventingAudioSessionDeactivation;
- (id)_fallbackToneIdentifierForPlayingAlert;
- (void)_handleAudioSessionInterruptionNotification:(id)arg1;
- (void)_handleAudioSessionInterruptionOfType:(unsigned long long)arg1 withOptions:(unsigned long long)arg2;
- (void)_playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_queuePlayer:(id)arg1 currentItemStatusWasUpdatedToValue:(long long)arg2;
- (void)_queuePlayer:(id)arg1 currentItemWasUpdatedFromValue:(id)arg2;
- (void)_reloadPlaybackForPlayingAlertWithToneIdentifier:(id)arg1;
- (void)_startObservingAudioSessionInterruptionNotifications;
- (void)_startObservingQueuePlayer;
- (void)_startPlaybackForAssetWithLoadedProperties:(id)arg1 alert:(id)arg2;
- (void)_stopObservingAudioSessionInterruptionNotifications;
- (void)_stopObservingQueuePlayer;
- (void)_stopPlayback;
- (void)_stopPlaybackWithOptions:(CDStruct_2418a849)arg1 playerWasAlreadyPausedExternally:(BOOL)arg2;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(CDStruct_2418a849)arg2 playbackCompletionType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;
- (void)_willBeginPlayingAlert;
- (void)dealloc;
- (id)init;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)performBlockOnAudioEventQueue:(CDUnknownBlockType)arg1;
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(CDStruct_2418a849)arg2 playbackCompletionType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end

