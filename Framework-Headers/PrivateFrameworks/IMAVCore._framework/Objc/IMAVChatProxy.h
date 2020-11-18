//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMHandle, NSArray, NSDate, NSDictionary, NSNumber, NSString;

@interface IMAVChatProxy : NSObject
{
    NSDictionary *_info;
}

@property (readonly, strong, nonatomic) NSString *GUID;
@property (readonly, strong, nonatomic) NSString *conferenceID;
@property (nonatomic) double connectionTimeoutTime;
@property (readonly, strong, nonatomic) NSNumber *dataDownloaded;
@property (readonly, strong, nonatomic) NSNumber *dataUploaded;
@property (readonly, strong, nonatomic) NSDate *dateConnected;
@property (readonly, strong, nonatomic) NSDate *dateEnded;
@property (readonly, nonatomic) int endedError;
@property (readonly, nonatomic) unsigned int endedReason;
@property (readonly, nonatomic) BOOL hasAudioInterruption;
@property (readonly, nonatomic) BOOL hasReceivedFirstFrame;
@property (readonly, strong, nonatomic) IMHandle *initiatorIMHandle;
@property (nonatomic) double invitationTimeoutTime;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isCaller;
@property (nonatomic, setter=setMute:) BOOL isMute;
@property (nonatomic) BOOL isSendingAudio;
@property (readonly, nonatomic) BOOL isStateFinal;
@property (readonly, nonatomic) BOOL isVideo;
@property (readonly, strong, nonatomic) IMHandle *otherIMHandle;
@property (nonatomic, getter=isRelayed) BOOL relayed;
@property (readonly, strong, nonatomic) NSArray *remoteParticipants;
@property (readonly, nonatomic) unsigned int sessionID;
@property (readonly, nonatomic) unsigned int state;

- (BOOL)_isCallUpgradeTo:(id)arg1;
- (BOOL)_isProxy;
- (void)acceptInvitation;
- (void)acceptInvitationWithHoldMusic;
- (void)acceptInvitationWithSource:(id)arg1;
- (id)account;
- (void)cancelInvitation;
- (void)dealloc;
- (void)declineInvitation;
- (id)description;
- (void)endChat;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)finalUpdate;
- (void)forwardInvocation:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)inviteAll;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (void)updateWithInfo:(id)arg1;

@end

