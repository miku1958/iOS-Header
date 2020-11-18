//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMAVCore/IMSystemMonitorListener-Protocol.h>

@class IMAVChatParticipant, IMAccount, IMHandle, IMPair, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSMutableDictionary *_conferenceStateCache;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_interruptionBegan;
    NSDictionary *_pingTestResults;
    NSNumber *_frontCameraCaptureTime;
    NSNumber *_backCameraCaptureTime;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSNumber *_dataDownloaded;
    IMTimingCollection *_timingCollection;
    unsigned long long _localNetworkConnectionType;
    unsigned long long _remoteNetworkConnectionType;
    long long _pingTestResult;
    long long _networkCheckResult;
    NSDictionary *_callerProperties;
    NSObject<OS_dispatch_queue> *_conferenceQueue;
    NSData *_relayRemotePrimaryIdentifier;
    id _conferenceController;
    unsigned int _sessionID;
    NSError *_error;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    BOOL _hasGatheredInfo;
    BOOL _hasReceivedFirstFrame;
    BOOL _hasPendingAccept;
    BOOL _hasPendingInit;
    BOOL _isCaller;
    BOOL _isVideo;
    int _connectionType;
    BOOL _needsVideoRestart;
    BOOL _needsAudioRestart;
    BOOL _isVideoInterrupted;
    BOOL _isAudioInterrupted;
    BOOL _connectionStarted;
    BOOL _relayed;
    BOOL _isCallUpgrade;
    BOOL _mayRequireBreakBeforeMake;
    BOOL _terminating;
    BOOL _didRemoteMute;
    BOOL _didRemotePause;
    BOOL _callUpgrade;
    BOOL _airplaneModeEnabled;
    BOOL _metadataFinalized;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    struct CGSize _portraitAspectRatios;
    struct CGSize _landscapeAspectRatios;
}

@property (strong, nonatomic, setter=_setGUID:) NSString *GUID; // @synthesize GUID=_GUID;
@property (readonly, nonatomic) BOOL _allParticipantsUsingICE;
@property (strong, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // @synthesize _backCameraCaptureTime;
@property (readonly, nonatomic) long long _bustedCallID;
@property (readonly, nonatomic) NSNumber *_callDuration;
@property (strong, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property (nonatomic, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *_conferenceQueue; // @synthesize _conferenceQueue;
@property (readonly, nonatomic) NSNumber *_connectDuration;
@property (nonatomic, setter=_setConnectionStarted:) BOOL _connectionStarted; // @synthesize _connectionStarted;
@property (nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property (readonly, nonatomic) NSNumber *_currentNatType;
@property (readonly, strong) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property (strong, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // @synthesize _frontCameraCaptureTime;
@property (readonly, strong, nonatomic) NSArray *_imHandles;
@property (strong, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // @synthesize _interruptionBegan;
@property (nonatomic, setter=_setIsAudioInterrupted:) BOOL _isAudioInterrupted; // @synthesize _isAudioInterrupted;
@property (nonatomic, setter=_setIsCallUpgrade:) BOOL _isCallUpgrade; // @synthesize _isCallUpgrade;
@property (readonly, nonatomic) BOOL _isProxy;
@property (nonatomic, setter=_setIsVideoInterrupted:) BOOL _isVideoInterrupted; // @synthesize _isVideoInterrupted;
@property (nonatomic, setter=_setLocalNetworkConnectionType:) unsigned long long _localNetworkConnectionType; // @synthesize _localNetworkConnectionType;
@property (strong, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property (nonatomic, setter=_setNeedsAudioRestart:) BOOL _needsAudioRestart; // @synthesize _needsAudioRestart;
@property (nonatomic, setter=_setNeedsVideoRestart:) BOOL _needsVideoRestart; // @synthesize _needsVideoRestart;
@property (nonatomic, setter=_setNetworkCheckResult:) long long _networkCheckResult; // @synthesize _networkCheckResult;
@property (nonatomic, setter=_setPingTestResult:) long long _pingTestResult; // @synthesize _pingTestResult;
@property (strong, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // @synthesize _pingTestResults;
@property (readonly, nonatomic) NSNumber *_relayConnectDuration;
@property (strong, nonatomic, setter=_setRelayRemotePrimaryIdentifier:) NSData *_relayRemotePrimaryIdentifier; // @synthesize _relayRemotePrimaryIdentifier;
@property (readonly, nonatomic) NSNumber *_remoteNatType;
@property (nonatomic, setter=_setRemoteNetworkConnectionType:) unsigned long long _remoteNetworkConnectionType; // @synthesize _remoteNetworkConnectionType;
@property (readonly, nonatomic) BOOL _usesRelay;
@property (readonly, strong, nonatomic) IMAccount *account;
@property (nonatomic, setter=_setAirplaneModeEnabled:) BOOL airplaneModeEnabled; // @synthesize airplaneModeEnabled=_airplaneModeEnabled;
@property (nonatomic, getter=isCallUpgrade, setter=_setCallUpgrade:) BOOL callUpgrade; // @synthesize callUpgrade=_callUpgrade;
@property (strong, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property (nonatomic) unsigned int cameraOrientation;
@property (nonatomic) unsigned int cameraType;
@property (strong, nonatomic, setter=_setConferenceID:) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property (nonatomic) double connectionTimeoutTime;
@property (strong, nonatomic, setter=_setConnectionTimeoutTimer:) NSTimer *connectionTimeoutTimer; // @synthesize connectionTimeoutTimer=_connectionTimeoutTimer;
@property (strong, nonatomic, setter=setDataDownloaded:) NSNumber *dataDownloaded; // @synthesize dataDownloaded=_dataDownloaded;
@property (strong, nonatomic, setter=setDataRate:) NSNumber *dataRate; // @synthesize dataRate=_dataRate;
@property (strong, nonatomic, setter=setDataUploaded:) NSNumber *dataUploaded; // @synthesize dataUploaded=_dataUploaded;
@property (readonly, strong, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property (readonly, strong, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property (readonly, strong, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property (readonly, nonatomic) BOOL didRemoteMute;
@property (nonatomic, setter=_setDidRemoteMute:) BOOL didRemoteMute; // @synthesize didRemoteMute=_didRemoteMute;
@property (readonly, nonatomic) BOOL didRemotePause;
@property (nonatomic, setter=_setDidRemotePause:) BOOL didRemotePause; // @synthesize didRemotePause=_didRemotePause;
@property (readonly, nonatomic) int endedError;
@property (readonly, nonatomic) unsigned int endedReason;
@property (strong, nonatomic, setter=_setFirstFrameTimeoutTimer:) NSTimer *firstFrameTimeoutTimer; // @synthesize firstFrameTimeoutTimer=_firstFrameTimeoutTimer;
@property (readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property (readonly, strong, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property (readonly, strong, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
@property (nonatomic) double invitationTimeoutTime;
@property (strong, nonatomic, setter=_setInviteTimeoutTimer:) NSTimer *inviteTimeoutTimer; // @synthesize inviteTimeoutTimer=_inviteTimeoutTimer;
@property (strong, nonatomic, setter=_setInviteTimeoutTimerStart:) NSDate *inviteTimeoutTimerStart; // @synthesize inviteTimeoutTimerStart=_inviteTimeoutTimerStart;
@property (readonly, nonatomic) BOOL isActive; // @dynamic isActive;
@property (readonly, nonatomic) BOOL isCaller; // @synthesize isCaller=_isCaller;
@property (nonatomic, setter=setMute:) BOOL isMute;
@property (nonatomic, setter=setPaused:) BOOL isPaused;
@property (nonatomic, setter=setRemoteMute:) BOOL isRemoteMute;
@property (nonatomic) BOOL isSendingAudio;
@property (nonatomic) BOOL isSendingVideo;
@property (readonly, nonatomic) BOOL isStateFinal; // @dynamic isStateFinal;
@property (readonly, nonatomic) BOOL isUsingWifi;
@property (readonly, nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (nonatomic, setter=_setLandscapeAspectRatios:) struct CGSize landscapeAspectRatios; // @synthesize landscapeAspectRatios=_landscapeAspectRatios;
@property (readonly, strong, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property (nonatomic) void *localVideoBackLayer;
@property (nonatomic) void *localVideoLayer;
@property (nonatomic) BOOL mayRequireBreakBeforeMake; // @synthesize mayRequireBreakBeforeMake=_mayRequireBreakBeforeMake;
@property (nonatomic, setter=_setMetadataFinalized:) BOOL metadataFinalized; // @synthesize metadataFinalized=_metadataFinalized;
@property (readonly, strong, nonatomic) IMHandle *otherIMHandle;
@property (readonly, strong, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property (nonatomic, setter=_setPortraitAspectRatios:) struct CGSize portraitAspectRatios; // @synthesize portraitAspectRatios=_portraitAspectRatios;
@property (nonatomic, getter=isRelayed) BOOL relayed; // @synthesize relayed=_relayed;
@property (readonly, strong, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;
@property (readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property (readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property (nonatomic, getter=isTerminating, setter=_setTerminating:) BOOL terminating; // @synthesize terminating=_terminating;

+ (id)_acceptedChats;
+ (id)_activeChat;
+ (id)_avChatArray;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(BOOL)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatList;
+ (id)_chatListLock;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_connectedChat;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
+ (id)_incomingInvitations;
+ (id)_nonFinalChat;
+ (id)_outgoingInvitations;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)acceptedChats;
+ (id)activeChat;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatList;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)connectedChat;
+ (id)connectedChats;
+ (id)connectingChats;
+ (double)defaultConnectionTimeoutTime;
+ (double)defaultInvitationTimeoutTime;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)outgoingInvitations;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(BOOL)arg2;
- (void)__responseToVCInvite:(id)arg1;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_airplaneModeChanged:(id)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)_cacheBool:(BOOL)arg1 forKey:(id)arg2;
- (BOOL)_cachedBoolForKey:(id)arg1;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)_clearCache;
- (void)_clearConnectionTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(BOOL)arg2;
- (void)_connectionTimeout:(id)arg1;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (void)_firstFrameTimeout:(id)arg1;
- (void)_handleAVError:(id)arg1;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(BOOL)arg4;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (BOOL)_hasCachedBoolForKey:(id)arg1;
- (id)_initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(BOOL)arg5 extraProperties:(id)arg6;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 isRelayed:(BOOL)arg4 GUID:(id)arg5 video:(BOOL)arg6 extraProperties:(id)arg7;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_invitationTimeout:(id)arg1;
- (BOOL)_isCallUpgradeTo:(id)arg1;
- (BOOL)_isVideoUpgradeTo:(id)arg1;
- (BOOL)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_noteFirstFrame;
- (id)_participantMatchingVCPartyID:(id)arg1;
- (BOOL)_participantsCheckOut;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(BOOL)arg2 orientationChanged:(BOOL)arg3 aspectChanged:(BOOL)arg4 cameraWillSwitch:(BOOL)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize)arg8;
- (void)_postStateToDelegateIfNecessary;
- (BOOL)_processVCResponseDict:(id)arg1;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
- (void)_reduceInvitationTimeoutTime;
- (void)_responseToVCInvite:(id)arg1;
- (void)_resumeAudioState;
- (void)_resumeVideoState;
- (void)_saveAudioRestartState;
- (void)_saveVideoRestartState;
- (void)_setActiveConference;
- (void)_setConnectionTimeoutTimer;
- (void)_setCreationDate;
- (void)_setDateConnected;
- (void)_setFirstFrameTimeoutTimer;
- (void)_setInvitationTimeoutTimer;
- (void)_setStateDisconnected;
- (void)_submitCallConnectedLogging;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(BOOL)arg2 isVideo:(BOOL)arg3;
- (id)_timings;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_vccInitDidFinish:(id)arg1;
- (void)acceptInvitation;
- (void)beginChat;
- (void)cancelInvitation;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(BOOL)arg2;
- (void)conferenceDidPauseAudioWithCallID:(long long)arg1 didPauseAudio:(BOOL)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(BOOL)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (id)description;
- (void)endChat;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (id)initIncomingFrom:(id)arg1 isVideo:(BOOL)arg2 callerProperties:(id)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(BOOL)arg2 isRelayed:(BOOL)arg3 GUID:(id)arg4;
- (void)invite:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)inviteAll;
- (id)inviteesInfo;
- (BOOL)isConferenceSilent;
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (id)participantWithID:(id)arg1;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)setMetadataFinalized;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1;
- (BOOL)startPreviewWithError:(id *)arg1;
- (BOOL)stopPreview;
- (void)systemApplicationDidBecomeActive;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemDidFastUserSwitchOut;
- (void)systemWillShutdown;
- (void)toggleMute;
- (void)togglePaused;
- (id)vcPartyIDForIMHandle:(id)arg1;

@end

