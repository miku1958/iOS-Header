//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient, CALayer, NSDictionary, NSMutableDictionary, NSTimer;
@protocol AVConferenceDelegate, OS_dispatch_queue;

@interface AVConference : NSObject
{
    AVConferenceXPCClient *connection;
    id opaqueConf;
    BOOL useServer;
    id _delegate;
    NSDictionary *serverBag;
    BOOL _isUsingFrontCamera;
    BOOL _microphoneMuted;
    NSMutableDictionary *_stateCacheForCallID;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    BOOL shouldDisplayNetworkQualityGraph_;
    NSTimer *networkQualityUpdateTimer_;
    CALayer *networkQualityGraphLayer_;
}

@property (nonatomic) NSObject<AVConferenceDelegate> *delegate;
@property (getter=isSpeakerPhoneEnabled) BOOL enableSpeakerPhone;
@property (nonatomic, getter=isInputFrequencyMeteringEnabled) BOOL inputFrequencyMeteringEnabled;
@property (readonly) float inputMeterLevel;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (readonly) int localFrameHeight;
@property (readonly) int localFrameWidth;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted; // @synthesize microphoneMuted=_microphoneMuted;
@property (readonly) unsigned int natType;
@property (strong) CALayer *networkQualityGraphLayer; // @synthesize networkQualityGraphLayer=networkQualityGraphLayer_;
@property (strong) NSTimer *networkQualityUpdateTimer; // @synthesize networkQualityUpdateTimer=networkQualityUpdateTimer_;
@property (nonatomic, getter=isOutputFrequencyMeteringEnabled) BOOL outputFrequencyMeteringEnabled;
@property (readonly) float outputMeterLevel;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) BOOL requiresWifi;
@property BOOL shouldDisplayNetworkQualityGraph; // @synthesize shouldDisplayNetworkQualityGraph=shouldDisplayNetworkQualityGraph_;
@property (getter=isUsingViceroyBlobFormat) BOOL useViceroyBlobFormat;

+ (short)addressPointerFromBlob:(id)arg1;
+ (unsigned int)doBlockingConnectionCheck;
+ (unsigned int)doBlockingConnectionCheck:(BOOL)arg1;
+ (id)externalAddressForSelfConnectionBlob:(id)arg1;
+ (BOOL)hasActiveAudioSession;
+ (void)refreshLoggingParameters;
+ (void)setAudioSessionProperties:(id)arg1;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)stopAudioSession;
- (void)addGKSCallEvent:(id)arg1 sessionID:(id)arg2;
- (id)callMetadataForCallID:(long long)arg1;
- (id)callStateForCallID:(id)arg1;
- (void)cancelCallID:(long long)arg1;
- (id)capabilitiesForCallID:(long long)arg1;
- (id)convertBlobtoNewBlob:(id)arg1;
- (id)convertBlobtoOldBlob:(id)arg1;
- (id)currentAudioInputDevice;
- (id)currentAudioOutputDevice;
- (void)dealloc;
- (void)deregisterBlocksForVCNotifications;
- (unsigned int)doBlockingConnectionCheck;
- (BOOL)getIsAudioPaused:(BOOL *)arg1 callID:(long long)arg2 error:(id *)arg3;
- (BOOL)getIsVideoPaused:(BOOL *)arg1 callID:(long long)arg2 error:(id *)arg3;
- (void)handleGKSConnectivitySettingsUpdate:(id)arg1;
- (id)init;
- (id)initWithClientUUID:(id)arg1;
- (id)initWithClientUUID:(id)arg1 transportType:(unsigned int)arg2;
- (long long)initializeNewCall;
- (long long)initializeNewCallWithDeviceRole:(int)arg1;
- (void)inviteDictionaryForCallID:(long long)arg1 remoteInviteDictionary:(id)arg2 nonCellularCandidateTimeout:(double)arg3 block:(CDUnknownBlockType)arg4 queue:(id)arg5;
- (long long)lastActiveCallID;
- (void)listenForNotifications;
- (double)localBitrateForCallID:(long long)arg1;
- (double)localFramerateForCallID:(long long)arg1;
- (double)localPacketLossRateForCallID:(long long)arg1;
- (id)localScreenAttributesForVideoAttributes:(id)arg1;
- (float)networkQuality;
- (double)networkQualityForCallID:(long long)arg1;
- (id)newRandomParticipantID;
- (void)processCancelRelayRequest:(long long)arg1 cancelDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayRequestResponse:(long long)arg1 responseDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRelayUpdate:(long long)arg1 updateDict:(id)arg2 didOriginateRequest:(BOOL)arg3;
- (void)processRemoteIPChange:(id)arg1 callID:(long long)arg2;
- (void)registerBlocksForVCNotifications;
- (double)remoteBitrateForCallID:(long long)arg1;
- (void)remoteCancelledCallID:(long long)arg1;
- (int)remoteFrameHeightForCallID:(long long)arg1;
- (int)remoteFrameWidthForCallID:(long long)arg1;
- (double)remoteFramerateForCallID:(long long)arg1;
- (double)remotePacketLossRateForCallID:(long long)arg1;
- (void *)remoteVideoBackLayer;
- (void *)remoteVideoLayer;
- (double)roundTripTimeForCallID:(long long)arg1;
- (void)sendARPLData:(id)arg1 toCallID:(long long)arg2;
- (void)sendData:(id)arg1 forCallID:(long long)arg2 encrypted:(BOOL)arg3;
- (void)sendProtobuf:(id)arg1 withType:(long long)arg2 forCallID:(long long)arg3;
- (void)serverDied;
- (void)serverReconnected;
- (BOOL)setActive:(BOOL)arg1;
- (BOOL)setAudioInputDevice:(id)arg1;
- (BOOL)setAudioOutputDevice:(id)arg1;
- (void)setCallReport:(long long)arg1 withReport:(id)arg2;
- (void)setCallState:(id)arg1 forCallID:(id)arg2;
- (void)setConferenceState:(unsigned int)arg1 forCallID:(long long)arg2;
- (void)setConferenceVisualRectangle:(struct CGRect)arg1 forCallID:(long long)arg2;
- (void)setLastActiveCallID:(long long)arg1;
- (void)setLocalScreenAttributes:(id)arg1;
- (BOOL)setPauseAudio:(BOOL)arg1 callID:(long long)arg2 error:(id *)arg3;
- (BOOL)setPauseVideo:(BOOL)arg1 callID:(long long)arg2 error:(id *)arg3;
- (void)setPeerCN:(id)arg1 callID:(long long)arg2;
- (void)setPeerProtocolVersion:(unsigned int)arg1 forCallID:(long long)arg2;
- (void)setPeerReportingIdentifier:(id)arg1 sessionIdentifier:(id)arg2 forCallID:(long long)arg3;
- (void)setRemoteVideoBackLayer:(void *)arg1;
- (void)setRemoteVideoLayer:(void *)arg1;
- (BOOL)setServerInfo:(id)arg1;
- (void)setSessionID:(id)arg1 callID:(long long)arg2;
- (void)setSetSessionID:(id)arg1 forCallID:(long long)arg2;
- (void)shouldSendBlackFrames:(BOOL)arg1 callID:(long long)arg2;
- (BOOL)startConnectionWithCallID:(long long)arg1 inviteData:(id)arg2 isCaller:(BOOL)arg3 capabilities:(id)arg4 destination:(id)arg5 error:(id *)arg6;
- (BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 error:(id *)arg8;
- (BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 destination:(id)arg9 error:(id *)arg10;
- (BOOL)startConnectionWithCallID:(long long)arg1 oldCallID:(long long)arg2 usingInviteData:(id)arg3 isCaller:(BOOL)arg4 relayResponseDict:(id)arg5 didOriginateRelayRequest:(BOOL)arg6 capabilities:(id)arg7 idsSocket:(int)arg8 error:(id *)arg9;
- (BOOL)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 error:(id *)arg7;
- (BOOL)startConnectionWithCallID:(long long)arg1 usingInviteData:(id)arg2 isCaller:(BOOL)arg3 relayResponseDict:(id)arg4 didOriginateRelayRequest:(BOOL)arg5 capabilities:(id)arg6 idsSocket:(int)arg7 error:(id *)arg8;
- (void)startNetworkQualityUpdateTimer;
- (id)statsForCallID:(long long)arg1;
- (void)stopCallID:(long long)arg1;
- (void)stopListeningForNotifications;
- (void)stopNetworkQualityUpdateTimer;
- (void)updateCapabilities:(id)arg1 forCallID:(long long)arg2;
- (void)updateGKSConnectivitySettings;
- (BOOL)updateNetworkQualityGraph;
- (void)videoConference:(id)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 closeConnectionForCallID:(long long)arg2;
- (void)videoConference:(id)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didReceiveARPLData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveData:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 didRemoteScreenAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didRemoteVideoAttributesChange:(id)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 withUserInfo:(id)arg4 error:(id)arg5;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3 callMetadata:(id)arg4;
- (void)videoConference:(id)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(id)arg3;
- (void)videoConference:(id)arg1 isRemoteAudioBelowThreshold:(BOOL)arg2;
- (void)videoConference:(id)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 localIPChange:(id)arg2 withCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 reinitializeCallForCallID:(unsigned int)arg2;
- (void)videoConference:(id)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(id)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(id)arg3;
- (void)videoConference:(id)arg1 updateInputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 updateOutputFrequencyLevel:(id)arg2;
- (void)videoConference:(id)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(id)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseAudio:(BOOL)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 withCallID:(long long)arg2 didPauseVideo:(BOOL)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
- (long long)videoStreamTokenForCallID:(long long)arg1;
- (void)warmupForCall;

@end

