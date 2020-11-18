//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreSpeech/CSPolicy.h>

#import <CoreSpeech/CSSiriClientBehaviorMonitorDelegate-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_queue;

@interface CSVoiceTriggerAOPModeEnabledPolicyIOS : CSPolicy <CSSiriClientBehaviorMonitorDelegate>
{
    NSObject<OS_dispatch_queue> *_recordStateQueue;
    BOOL _isSiriClientConsideredAsRecord;
    NSString *_pendingRecordingStopUUID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSiriClientConsideredAsRecord; // @synthesize isSiriClientConsideredAsRecord=_isSiriClientConsideredAsRecord;
@property (strong, nonatomic) NSString *pendingRecordingStopUUID; // @synthesize pendingRecordingStopUUID=_pendingRecordingStopUUID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addConditionsForIOSAOP;
- (void)_addConditionsForIOSBargeIn;
- (void)_addVoiceTriggerAOPModeEnabledConditions;
- (BOOL)_isSpeechDetectionDevicePresent;
- (void)_subscribeEventMonitors;
- (id)init;
- (void)siriClientBehaviorMonitor:(id)arg1 didChangedRecordState:(BOOL)arg2 withEventUUID:(id)arg3 withContext:(id)arg4;
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5;
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2;

@end
