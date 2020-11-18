//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVChat, IMHandle, NSArray, NSData, NSDictionary, NSMutableArray, NSString, NSTimer;

@interface IMAVChatParticipant : NSObject
{
    BOOL _sendingAudio;
    BOOL _sendingVideo;
    BOOL _audioMuted;
    BOOL _videoPaused;
    BOOL _videoDegraded;
    BOOL _mediaStalled;
    BOOL _isInitiator;
    BOOL _inviteDelivered;
    BOOL _hasReinitiateCapability;
    unsigned int _state;
    unsigned int _cameraType;
    unsigned int _cameraOrientation;
    unsigned int _chatEndedReason;
    int _chatError;
    unsigned int _screenOrientation;
    NSArray *_additionalPeers;
    NSArray *_excludingPushTokens;
    NSString *_vcPartyID;
    IMHandle *_imHandle;
    IMHandle *_inviter;
    IMAVChat *_avChat;
    NSDictionary *_properties;
    NSString *_conferenceID;
    NSTimer *_connectTimeoutTimer;
    NSMutableArray *_participantsCallInfo;
    NSData *_inFrequencyLevel;
    NSData *_outFrequencyLevel;
    struct CGSize _remotePortraitOrientation;
    struct CGSize _remoteLandscapeOrientation;
    struct CGSize _remotePIPPortraitOrientation;
    struct CGSize _remotePIPLandscapeOrientation;
    struct CGRect _remotePortraitContentRect;
    struct CGRect _remoteLandscapeContentRect;
}

@property (readonly, nonatomic) long long _activeCallID;
@property (strong, nonatomic, setter=_setConferenceID:) NSString *_conferenceID; // @synthesize _conferenceID;
@property (strong, setter=_setConnectTimeoutTimer:) NSTimer *_connectTimeoutTimer; // @synthesize _connectTimeoutTimer;
@property (setter=_setInviteDelivered:) BOOL _inviteDelivered; // @synthesize _inviteDelivered;
@property (strong, nonatomic) NSMutableArray *_participantsCallInfo; // @synthesize _participantsCallInfo;
@property (nonatomic, setter=_setRemoteLandscapeContentRect:) struct CGRect _remoteLandscapeContentRect; // @synthesize _remoteLandscapeContentRect;
@property (nonatomic, setter=_setRemoteLandscapeOrientation:) struct CGSize _remoteLandscapeOrientation; // @synthesize _remoteLandscapeOrientation;
@property (nonatomic, setter=_setRemotePIPLandscapeOrientation:) struct CGSize _remotePIPLandscapeOrientation; // @synthesize _remotePIPLandscapeOrientation;
@property (nonatomic, setter=_setRemotePIPPortraitOrientation:) struct CGSize _remotePIPPortraitOrientation; // @synthesize _remotePIPPortraitOrientation;
@property (nonatomic, setter=_setRemotePortraitContentRect:) struct CGRect _remotePortraitContentRect; // @synthesize _remotePortraitContentRect;
@property (nonatomic, setter=_setRemotePortraitOrientation:) struct CGSize _remotePortraitOrientation; // @synthesize _remotePortraitOrientation;
@property (nonatomic, setter=_setScreenOrientation:) unsigned int _screenOrientation; // @synthesize _screenOrientation;
@property (strong, nonatomic) NSArray *additionalPeers; // @synthesize additionalPeers=_additionalPeers;
@property (nonatomic, setter=setAVChat:) IMAVChat *avChat; // @synthesize avChat=_avChat;
@property (setter=_setCameraOrientation:) unsigned int cameraOrientation; // @synthesize cameraOrientation=_cameraOrientation;
@property (setter=_setCameraType:) unsigned int cameraType; // @synthesize cameraType=_cameraType;
@property (nonatomic, setter=_setChatError:) int error; // @synthesize error=_chatError;
@property (strong, nonatomic) NSArray *excludingPushTokens; // @synthesize excludingPushTokens=_excludingPushTokens;
@property (readonly, nonatomic) BOOL hasConnectingSessions;
@property (nonatomic) BOOL hasReinitiateCapability; // @synthesize hasReinitiateCapability=_hasReinitiateCapability;
@property (readonly, nonatomic) BOOL hasUnfinishedSessions;
@property (readonly, strong, nonatomic) IMHandle *imHandle; // @synthesize imHandle=_imHandle;
@property (strong, nonatomic) NSData *inFrequencyLevel; // @synthesize inFrequencyLevel=_inFrequencyLevel;
@property (readonly, strong, nonatomic) IMHandle *invitedBy; // @synthesize invitedBy=_inviter;
@property (nonatomic, setter=setAudioMuted:) BOOL isAudioMuted; // @dynamic isAudioMuted;
@property (nonatomic, setter=setAudioMuted:) BOOL isAudioMuted; // @synthesize isAudioMuted=_audioMuted;
@property (readonly, nonatomic) BOOL isInitiator; // @synthesize isInitiator=_isInitiator;
@property (readonly, nonatomic) BOOL isLocalParticipant;
@property (readonly, nonatomic) BOOL isMediaStalled; // @dynamic isMediaStalled;
@property (setter=setMediaStalled:) BOOL isMediaStalled; // @synthesize isMediaStalled=_mediaStalled;
@property (readonly, nonatomic) BOOL isSendingAudio; // @dynamic isSendingAudio;
@property (readonly, nonatomic) BOOL isSendingAudio; // @synthesize isSendingAudio=_sendingAudio;
@property (readonly, nonatomic) BOOL isSendingVideo; // @dynamic isSendingVideo;
@property (readonly, nonatomic) BOOL isSendingVideo; // @synthesize isSendingVideo=_sendingVideo;
@property (readonly, nonatomic) BOOL isVideoDegraded; // @dynamic isVideoDegraded;
@property (setter=setVideoDegraded:) BOOL isVideoDegraded; // @synthesize isVideoDegraded=_videoDegraded;
@property (nonatomic, setter=setVideoPaused:) BOOL isVideoPaused; // @dynamic isVideoPaused;
@property (nonatomic, setter=setVideoPaused:) BOOL isVideoPaused; // @synthesize isVideoPaused=_videoPaused;
@property (readonly, strong, nonatomic) NSString *name;
@property (strong, nonatomic) NSData *outFrequencyLevel; // @synthesize outFrequencyLevel=_outFrequencyLevel;
@property (strong, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property (readonly, nonatomic) unsigned int reasonChatEnded; // @synthesize reasonChatEnded=_chatEndedReason;
@property (nonatomic) unsigned int state; // @synthesize state=_state;
@property (strong, setter=setVCPartyID:) NSString *vcPartyID; // @synthesize vcPartyID=_vcPartyID;
@property (nonatomic) void *videoBackLayer;
@property (nonatomic) void *videoLayer;

- (id)_callInfoForCallID:(long long)arg1;
- (id)_callInfoForReinitiate;
- (id)_callInfoWithState:(long long)arg1;
- (id)_callInfosWaitingForAcceptAction;
- (id)_callInfosWaitingForResponse;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 response:(id)arg2;
- (void)_cleanupOrphanedCallInfos;
- (void)_connectTimeout:(id)arg1;
- (BOOL)_generateCallInfo:(id)arg1;
- (void)_handleIMAVResponse:(unsigned int)arg1;
- (void)_hangupCallLaterIfReinitiateFailsForCallInfo:(id)arg1;
- (id)_initAs:(id)arg1 invitedBy:(id)arg2 sendingAudio:(BOOL)arg3 sendingVideo:(BOOL)arg4 usingICE:(BOOL)arg5 toChat:(id)arg6 inState:(unsigned int)arg7 withError:(int)arg8 andReason:(unsigned int)arg9 andVCPartyID:(id)arg10 account:(id)arg11;
- (id)_natType;
- (void)_noteInviteDelivered:(BOOL)arg1;
- (id)_processIncomingCallProperties:(id)arg1;
- (void)_processPropertyUpdate:(id)arg1;
- (BOOL)_processResponseDictionary:(id)arg1 allowSecondConnection:(BOOL)arg2;
- (id)_proxyRepresentation;
- (void)_reInitiateWithCallInfo:(id)arg1;
- (void)_registerCallInfo:(id)arg1;
- (void)_sendResponse:(unsigned int)arg1 callInfo:(id)arg2;
- (void)_setState:(unsigned int)arg1 withReason:(unsigned int)arg2 andError:(int)arg3;
- (void)_switchToUseNewIMHandle:(id)arg1;
- (void)_updateProperties:(id)arg1;
- (struct CGSize)aspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (long long)bestCallID;
- (id)callInfoBeingHandedOff;
- (void)cancelInvitation;
- (void)cancelInvitationWithReason:(unsigned int)arg1;
- (void)cancelInvitationWithResponse:(unsigned int)arg1;
- (struct CGRect)contentRectForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (void)disconnectFromAVChat;
- (id)init;
- (id)initAs:(id)arg1 invitedBy:(id)arg2 toChat:(id)arg3 account:(id)arg4;
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (BOOL)matchesAVConferenceCallID:(long long)arg1;
- (void)reinitializeCallForCallID:(unsigned int)arg1;
- (void)requestIconIfNecessary;
- (void)resetWaitingToConnectTimer;
- (void)sendAVMessage:(unsigned int)arg1 userInfo:(id)arg2;
- (void)sendInvitation;
- (void)sendResponse:(unsigned int)arg1;
- (void)setStateToEndedWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)setWaitingToConnect:(BOOL)arg1;

@end

