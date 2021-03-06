//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKConnection : NSObject
{
    CDStruct_68f9d01f *_event;
    unsigned int _pid;
}

@property id eventDelegate;
@property (nonatomic) struct opaqueRTCReporting *reportingAgent;

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)externalAddressForCDXSelfConnectionData:(id)arg1;
+ (id)externalAddressForSelfConnectionData:(id)arg1;
+ (BOOL)isRelayEnabled;
- (void)cancelConnectParticipant:(id)arg1;
- (void)connect;
- (void)connectParticipantsWithConnectionData:(id)arg1 withSessionInfo:(id)arg2;
- (BOOL)convertParticipantID:(id)arg1 toPeerID:(id *)arg2;
- (BOOL)convertPeerID:(id)arg1 toParticipantID:(id *)arg2;
- (unsigned int)gckPID;
- (struct OpaqueGCKSession *)gckSession;
- (id)getLocalConnectionDataForLocalGaming;
- (void)getLocalConnectionDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithParticipantID:(id)arg1;
- (void)initiateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;
- (id)networkStatistics;
- (id)networkStatisticsDictionaryForGCKStats:(void *)arg1;
- (void)preRelease;
- (void)setParticipantID:(id)arg1 forPeerID:(id)arg2;
- (void)updateRelayWithParticipant:(id)arg1 withConnectionData:(id)arg2 withRelayInfo:(id)arg3 didInitiate:(BOOL)arg4;

@end

