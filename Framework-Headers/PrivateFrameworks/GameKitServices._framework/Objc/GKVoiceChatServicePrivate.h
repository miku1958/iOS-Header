//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameKitServices/VideoConferenceDelegate-Protocol.h>
#import <GameKitServices/VideoConferenceRealTimeChannel-Protocol.h>

@class GKVoiceChatDictionary, GKVoiceChatService, NSLock, NSRecursiveLock, VideoConference;
@protocol GKVoiceChatClient;

@interface GKVoiceChatServicePrivate : NSObject <VideoConferenceDelegate, VideoConferenceRealTimeChannel>
{
    id<GKVoiceChatClient> client;
    BOOL outputMeteringEnabled;
    BOOL inputMeteringEnabled;
    BOOL microphoneMuted;
    unsigned int curCallID;
    int state;
    GKVoiceChatDictionary *incomingCallDict;
    GKVoiceChatDictionary *outgoingCallDict;
    struct tagCONNRESULT currentConnResult;
    NSRecursiveLock *stateLock;
    NSLock *clientLock;
    GKVoiceChatService *wrapperService;
    BOOL forceNoICE;
    VideoConference *conf;
    BOOL clientHasRTChannel;
    int chatMode;
    BOOL focus;
}

@property int chatMode; // @synthesize chatMode;
@property (nonatomic) id client; // @synthesize client;
@property (getter=isFocus) BOOL focus; // @synthesize focus;
@property (readonly, nonatomic) float inputMeterLevel;
@property (getter=isInputMeteringEnabled) BOOL inputMeteringEnabled; // @synthesize inputMeteringEnabled;
@property (readonly) double localBitrate;
@property (readonly) double localFramerate;
@property (nonatomic) void *localVideoLayer;
@property (getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly, nonatomic) float outputMeterLevel;
@property (getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled; // @synthesize outputMeteringEnabled;
@property (readonly) double remoteBitrate;
@property (readonly) double remoteFramerate;
@property float remoteParticipantVolume;
@property (nonatomic) void *remoteVideoLayer;
@property int state; // @synthesize state;
@property GKVoiceChatService *wrapperService; // @synthesize wrapperService;

+ (id)defaultVoiceChatService;
- (BOOL)acceptCallID:(unsigned int)arg1 error:(id *)arg2;
- (void)cleanup;
- (id)createInvite:(id *)arg1 toParticipant:(id)arg2 callID:(unsigned int *)arg3;
- (id)createReplyUsingDictionary:(id)arg1 replyCode:(unsigned long long)arg2 error:(id *)arg3;
- (void)dealloc;
- (void)denyCallID:(unsigned int)arg1;
- (void)forceNoICE:(BOOL)arg1;
- (void)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 hResult:(int)arg4;
- (void)getNSError:(id *)arg1 code:(long long)arg2 description:(id)arg3 reason:(id)arg4;
- (void)informClientOfInviteFromParticipant:(id)arg1;
- (void)informClientVoiceChatDidNotStart:(id)arg1;
- (void)informClientVoiceChatDidNotStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStart:(id)arg1;
- (void)informClientVoiceChatDidStartMainSelector:(id)arg1;
- (void)informClientVoiceChatDidStop:(id)arg1;
- (id)init;
- (BOOL)inviteIsValid:(id)arg1;
- (id)localDisplayNameForCallID:(unsigned int)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (id)remoteDisplayNameForCallID:(unsigned int)arg1;
- (void)resetState;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(BOOL)arg2;
- (int)startICEConnectionCheck:(id)arg1 isCaller:(BOOL)arg2 withCallID:(unsigned int)arg3;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (void)stopVoiceChatProc:(id)arg1;
- (void)stopVoiceChatWithParticipantID:(id)arg1;
- (void)vcArg:(id)arg1 sendRealTimeData:(id)arg2 toParticipantID:(id)arg3;
- (void)videoConference:(id)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(id)arg4;
- (void)videoConference:(id)arg1 didStopWithCallID:(unsigned int)arg2 error:(id)arg3;

@end

