//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUAudioController.h>

@class NSArray, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface TUAudioSystemController : TUAudioController
{
    NSObject<OS_dispatch_queue> *_uplinkMutedQueue;
    NSObject<OS_dispatch_queue> *_downlinkMutedQueue;
    NSObject<OS_dispatch_queue> *_ttyQueue;
    NSObject<OS_dispatch_queue> *_pickableRoutesQueue;
    NSNumber *_isUplinkMutedCached;
    NSNumber *_isDownlinkMutedCached;
    NSNumber *_isTTYCached;
    NSArray *_pickableRoutesForTTY;
    NSArray *_pickableRoutesForPhoneCall;
    NSArray *_pickableRoutesForPlayAndRecordVideo;
    NSArray *_pickableRoutesForPlayAndRecordVoice;
    NSArray *_pickableRoutesForPlayAndRecordRemoteVoice;
    NSArray *_pickableRoutesForVoicemail;
    BOOL _isRequestingUplinkMuted;
    BOOL _isRequestingDownlinkMuted;
    BOOL _isRequestingTTY;
    BOOL _isRequestingPickableRoutesForTTY;
    BOOL _isRequestingPickableRoutesForPhoneCall;
    BOOL _isRequestingPickableRoutesForPlayAndRecordVideo;
    BOOL _isRequestingPickableRoutesForPlayAndRecordVoice;
    BOOL _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    BOOL _isRequestingPickableRoutesForVoicemail;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
    unsigned long long _lastVoicemailRoutesScheduleTime;
}

+ (id)sharedAudioSystemController;
+ (id)sharedSystemController;
- (void).cxx_destruct;
- (void)_handleCallStatusChanged;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (void)_pickableRoutesDidChangeNotification:(id)arg1;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)arg1;
- (id)bestGuessPickableRoutesForAnyCall;
- (void)dealloc;
- (id)init;
- (BOOL)isDownlinkMuted;
- (BOOL)isTTY;
- (BOOL)isUplinkMuted;
- (id)pickableRouteWithUniqueIdentifier:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)pickableRoutesForTTY;
- (BOOL)setDownlinkMuted:(BOOL)arg1;
- (BOOL)setUplinkMuted:(BOOL)arg1;
- (BOOL)shouldSuppressCallUsingRoute:(id)arg1;

@end

