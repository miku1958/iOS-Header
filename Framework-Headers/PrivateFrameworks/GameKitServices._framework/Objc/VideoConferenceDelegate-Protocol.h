//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSData, NSDictionary, NSError, VideoAttributes, VideoConference;

@protocol VideoConferenceDelegate
- (void)videoConference:(VideoConference *)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 error:(NSError *)arg4;

@optional
- (void)videoConference:(VideoConference *)arg1 cancelRelayRequest:(unsigned int)arg2 requestDict:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg1 closeConnectionForCallID:(unsigned int)arg2;
- (void)videoConference:(VideoConference *)arg1 didChangeLocalVariablesForCallID:(unsigned int)arg2;
- (void)videoConference:(VideoConference *)arg1 didReceiveARPLData:(NSData *)arg2 fromCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 didReceiveData:(NSData *)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 didReceiveFirstRemoteFrameForCallID:(unsigned int)arg2;
- (void)videoConference:(VideoConference *)arg1 didRemoteScreenAttributesChange:(VideoAttributes *)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 didRemoteVideoAttributesChange:(VideoAttributes *)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 didStartSession:(BOOL)arg2 withCallID:(unsigned int)arg3 withUserInfo:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)videoConference:(VideoConference *)arg1 didStopWithCallID:(unsigned int)arg2 error:(NSError *)arg3;
- (void)videoConference:(VideoConference *)arg1 didStopWithCallID:(unsigned int)arg2 error:(NSError *)arg3 callMetadata:(NSDictionary *)arg4;
- (void)videoConference:(VideoConference *)arg1 inititiateRelayRequest:(unsigned int)arg2 requestDict:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg1 isRemoteAudioBelowThreshold:(BOOL)arg2;
- (void)videoConference:(VideoConference *)arg1 localAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg1 localIPChange:(NSData *)arg2 withCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 receivedNoRemotePacketsForTime:(double)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteAudioEnabled:(BOOL)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteAudioPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteCallingModeChanged:(unsigned int)arg2 forCallID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteMediaStalled:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 remoteVideoPaused:(BOOL)arg2 callID:(unsigned int)arg3;
- (void)videoConference:(VideoConference *)arg1 sendRelayUpdate:(unsigned int)arg2 updateDict:(NSDictionary *)arg3;
- (void)videoConference:(VideoConference *)arg1 updateInputFrequencyLevel:(NSData *)arg2;
- (void)videoConference:(VideoConference *)arg1 updateInputMeterLevel:(float)arg2;
- (void)videoConference:(VideoConference *)arg1 updateOutputFrequencyLevel:(NSData *)arg2;
- (void)videoConference:(VideoConference *)arg1 updateOutputMeterLevel:(float)arg2;
- (void)videoConference:(VideoConference *)arg1 videoQualityNotificationForCallID:(unsigned int)arg2 isDegraded:(BOOL)arg3 isRemote:(BOOL)arg4;
- (void)videoConference:(VideoConference *)arg1 withCallID:(unsigned int)arg2 didPauseAudio:(BOOL)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg1 withCallID:(unsigned int)arg2 didPauseVideo:(BOOL)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg1 withCallID:(unsigned int)arg2 isSendingAudio:(BOOL)arg3 error:(NSError *)arg4;
- (void)videoConference:(VideoConference *)arg1 withCallID:(unsigned int)arg2 networkHint:(BOOL)arg3;
@end
