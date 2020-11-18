//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ToneLibrary/TLAlertPlaybackBackEndController-Protocol.h>

@class NSMapTable, NSString, TLAlertQueuePlayerController, TLAlertSystemSoundController;
@protocol OS_dispatch_queue;

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    TLAlertQueuePlayerController *_queuePlayerController;
    TLAlertSystemSoundController *_systemSoundController;
    NSMapTable *_alertContexts;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (long long)_playbackBackEndForAlert:(id)arg1;
+ (BOOL)_shouldStopAlertForUserInterruption:(id)arg1;
+ (id)sharedAlertController;
- (void).cxx_destruct;
- (void)_assertRunningOnAccessQueue;
- (id)_controllerForPlaybackBackEnd:(long long)arg1;
- (void)_didCompletePlaybackOfAlert:(id)arg1;
- (void)_didReachTimeoutForAlert:(id)arg1;
- (void)_performBlockOnAccessQueue:(CDUnknownBlockType)arg1;
- (id)_prepareForPlayingAlert:(id)arg1;
- (id)_queuePlayerController;
- (BOOL)_stopAllAlertsInCurrentProcess;
- (void)_stopPlayingAlerts:(id)arg1 withOptions:(CDStruct_2418a849)arg2 playbackCompletionType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_stopRepeatedlyPlayingAlert:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3 targetQueue:(id)arg4;
- (id)_systemSoundController;
- (void)dealloc;
- (id)init;
- (void)performBlockOnAudioEventQueue:(CDUnknownBlockType)arg1;
- (void)playAlert:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)stopAllAlerts;
- (void)stopPlayingAlerts:(id)arg1 withOptions:(CDStruct_2418a849)arg2 playbackCompletionType:(long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)stopRepeatedlyPlayingAlert:(id)arg1 withOptions:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3 targetQueue:(id)arg4;
- (void)updateAudioVolumeDynamicallyForAlert:(id)arg1 toValue:(float)arg2;

@end
