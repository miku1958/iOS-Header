//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/TUProxyCall.h>

@class IMAVChat;

@interface TUVideoProxyCall : TUProxyCall
{
    IMAVChat *_chat;
}

@property (readonly, nonatomic) TUProxyCall *callHistoryProxyCall;
@property (strong, nonatomic) IMAVChat *chat; // @synthesize chat=_chat;

- (void).cxx_destruct;
- (id)_callHistoryIdentifierFromChat;
- (void)_setLocalAspectRatios;
- (void)answerWithSourceIdentifier:(id)arg1 wantsHoldMusic:(BOOL)arg2;
- (long long)cameraType;
- (BOOL)hasReceivedFirstFrame;
- (id)initWithChat:(id)arg1;
- (BOOL)isMediaStalled;
- (BOOL)isSendingVideo;
- (BOOL)isVideoDegraded;
- (BOOL)isVideoPaused;
- (struct CGSize)localAspectRatioForOrientation:(long long)arg1;
- (struct CGSize)remoteAspectRatio;
- (long long)remoteCameraOrientation;
- (id)remoteParticipant;
- (void *)remoteVideoBackLayer;
- (struct CGRect)remoteVideoContentRect;
- (void *)remoteVideoLayer;
- (int)service;
- (void)setIsSendingVideo:(BOOL)arg1;
- (void)setRemoteVideoBackLayer:(void *)arg1;
- (void)setRemoteVideoLayer:(void *)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
- (void)setRemoteVideoPresentationState:(int)arg1;
- (void)updateWithCall:(id)arg1;

@end

