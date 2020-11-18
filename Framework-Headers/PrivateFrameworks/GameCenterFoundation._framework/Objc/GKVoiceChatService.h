//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol GKVoiceChatClient;

@interface GKVoiceChatService : NSObject
{
    id _voiceChatService;
}

@property id<GKVoiceChatClient> client;
@property (readonly) float inputMeterLevel;
@property (nonatomic, getter=isInputMeteringEnabled) BOOL inputMeteringEnabled;
@property (nonatomic, getter=isMicrophoneMuted) BOOL microphoneMuted;
@property (readonly) float outputMeterLevel;
@property (nonatomic, getter=isOutputMeteringEnabled) BOOL outputMeteringEnabled;
@property (nonatomic) float remoteParticipantVolume;

+ (id)defaultVoiceChatService;
+ (void)initialize;
+ (BOOL)isVoIPAllowed;
- (BOOL)acceptCallID:(long long)arg1 error:(id *)arg2;
- (void)dealloc;
- (void)denyCallID:(long long)arg1;
- (void)receivedData:(id)arg1 fromParticipantID:(id)arg2;
- (void)receivedRealTimeData:(id)arg1 fromParticipantID:(id)arg2;
- (BOOL)startVoiceChatWithParticipantID:(id)arg1 error:(id *)arg2;
- (void)stopVoiceChatWithParticipantID:(id)arg1;

@end

