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

@property (nonatomic, getter=isDownlinkMuted) BOOL downlinkMuted;
@property (readonly, nonatomic, getter=isTTY) BOOL tty;
@property (nonatomic, getter=isUplinkMuted) BOOL uplinkMuted;

+ (id)sharedAudioSystemController;
+ (id)sharedSystemController;
+ (id)sourceIdentifierForRouteID:(id)arg1;
- (void).cxx_destruct;
- (void)_handleDownlinkMuteDidChangeNotification:(id)arg1;
- (void)_handlePickableRoutesDidChangeNotification:(id)arg1;
- (void)_handleServerConnectionDiedNotification:(id)arg1;
- (void)_handleUplinkMuteDidChangeNotification:(id)arg1;
- (id)_pickableRoutesForPhoneCallWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForTTYWithForceNewRequest:(BOOL)arg1;
- (id)_pickableRoutesForVoiceMailWithForceNewRequest:(BOOL)arg1;
- (void)_updateCachedState;
- (id)bestGuessPickableRoutesForAnyCall;
- (id)currentlyPickedRouteIdForCategory:(id)arg1 andMode:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)pickableRouteWithUniqueIdentifier:(id)arg1;
- (id)pickableRoutesForCategory:(id)arg1 andMode:(id)arg2;
- (id)pickableRoutesForTTY;
- (BOOL)shouldSuppressCallUsingRoute:(id)arg1;

@end
