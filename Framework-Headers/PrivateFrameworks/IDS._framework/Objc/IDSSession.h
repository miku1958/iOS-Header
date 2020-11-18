//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _IDSSession;

@interface IDSSession : NSObject
{
    _IDSSession *_internal;
}

@property (readonly, nonatomic) NSString *destination;
@property (nonatomic) long long invitationTimeOut;
@property (nonatomic) BOOL isAudioEnabled;
@property (nonatomic) BOOL isMuted;
@property (readonly, nonatomic) unsigned int sessionEndedReason;
@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) int socket;

- (void).cxx_destruct;
- (unsigned long long)MTUForAddressFamily:(unsigned long long)arg1;
- (id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4;
- (id)_internal;
- (id)_streamPreferences;
- (void)acceptInvitation;
- (void)acceptInvitationWithData:(id)arg1;
- (void)cancelInvitation;
- (void)cancelInvitationWithData:(id)arg1;
- (void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned int)arg1;
- (void)dealloc;
- (void)declineInvitation;
- (void)declineInvitationWithData:(id)arg1;
- (id)description;
- (void)endSession;
- (void)endSessionWithData:(id)arg1;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3;
- (id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3;
- (unsigned long long)initialLinkType;
- (void)sendAllocationRequest:(id)arg1;
- (BOOL)sendData:(id)arg1 error:(id *)arg2;
- (void)sendInvitation;
- (void)sendInvitationWithData:(id)arg1;
- (void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2;
- (void)sendInvitationWithOptions:(id)arg1;
- (void)sendSessionMessage:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setPreferences:(id)arg1;
- (void)setStreamPreferences:(id)arg1;
- (BOOL)shouldUseSocketForTransport;
- (unsigned int)state;

@end

