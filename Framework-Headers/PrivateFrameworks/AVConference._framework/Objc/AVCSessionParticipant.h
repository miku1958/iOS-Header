//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVConference/AVCSessionParticipantControlProtocol-Protocol.h>

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCXPCClientShared;
@protocol AVCSessionParticipantDelegate, OS_dispatch_queue;

@interface AVCSessionParticipant : NSObject <AVCSessionParticipantControlProtocol>
{
    unsigned long long _idsParticipantID;
    NSString *_participantID;
    NSData *_participantData;
    id _delegate;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_delegateNotificationQueue;
    VCXPCClientShared *_connection;
    NSData *_frequencyLevels;
    long long _videoToken;
    unsigned char _videoQuality;
    unsigned int _visibilityIndex;
    unsigned int _prominenceIndex;
    NSMutableDictionary *_participantConfig;
    BOOL _audioMuted;
    BOOL _audioEnabled;
    BOOL _audioPaused;
    BOOL _videoEnabled;
    BOOL _videoPaused;
    float _volume;
    float _audioPosition;
    BOOL _configurationInProgress;
    BOOL _hasPendingChanges;
}

@property (nonatomic, getter=isAudioEnabled) BOOL audioEnabled; // @synthesize audioEnabled=_audioEnabled;
@property (nonatomic, getter=isAudioMuted) BOOL audioMuted; // @synthesize audioMuted=_audioMuted;
@property (nonatomic, getter=isAudioPaused) BOOL audioPaused; // @synthesize audioPaused=_audioPaused;
@property (nonatomic) float audioPosition; // @synthesize audioPosition=_audioPosition;
@property (readonly, nonatomic) NSDictionary *config;
@property (nonatomic) BOOL configurationInProgress; // @synthesize configurationInProgress=_configurationInProgress;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<AVCSessionParticipantDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateNotificationQueue; // @synthesize delegateNotificationQueue=_delegateNotificationQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSData *frequencyLevels; // @synthesize frequencyLevels=_frequencyLevels;
@property (nonatomic) BOOL hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *negotiationData; // @synthesize negotiationData=_participantData;
@property (readonly, nonatomic) unsigned long long participantID; // @synthesize participantID=_idsParticipantID;
@property (nonatomic) unsigned int prominenceIndex; // @synthesize prominenceIndex=_prominenceIndex;
@property (strong, nonatomic) VCXPCClientShared *sharedXPCConnection;
@property (nonatomic) NSObject<OS_dispatch_queue> *stateQueue;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_participantID;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;
@property (nonatomic, getter=isVideoPaused) BOOL videoPaused; // @synthesize videoPaused=_videoPaused;
@property (nonatomic) unsigned char videoQuality; // @synthesize videoQuality=_videoQuality;
@property (nonatomic) long long videoToken; // @synthesize videoToken=_videoToken;
@property (nonatomic) unsigned int visibilityIndex; // @synthesize visibilityIndex=_visibilityIndex;
@property (nonatomic) float volume; // @synthesize volume=_volume;

- (void)dealloc;
- (void)deregisterFromNotifications;
- (id)initWithParticipantID:(unsigned long long)arg1 data:(id)arg2 delegate:(id)arg3 queue:(id)arg4;
- (BOOL)isConnectedToSession;
- (id)newNSErrorWithErrorDictionary:(id)arg1;
- (void)registerBlocksForNotifications;
- (void)setStateAudioEnabled:(BOOL)arg1;
- (void)setStateAudioPaused:(BOOL)arg1;
- (void)setStateVideoEnabled:(BOOL)arg1;
- (void)setStateVideoPaused:(BOOL)arg1;
- (void)setupConfig;
- (void)setupNotificationQueue:(id)arg1;

@end

