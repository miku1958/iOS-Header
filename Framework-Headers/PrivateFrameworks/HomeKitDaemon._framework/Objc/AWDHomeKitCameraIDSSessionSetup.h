//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying>
{
    unsigned int _idsSessionInvitationReceived;
    unsigned int _idsSessionInvitationSent;
    unsigned int _idsSessionStartedOnReceiver;
    unsigned int _idsSessionStartedOnResident;
    struct {
        unsigned int idsSessionInvitationReceived:1;
        unsigned int idsSessionInvitationSent:1;
        unsigned int idsSessionStartedOnReceiver:1;
        unsigned int idsSessionStartedOnResident:1;
    } _has;
}

@property (nonatomic) BOOL hasIdsSessionInvitationReceived;
@property (nonatomic) BOOL hasIdsSessionInvitationSent;
@property (nonatomic) BOOL hasIdsSessionStartedOnReceiver;
@property (nonatomic) BOOL hasIdsSessionStartedOnResident;
@property (nonatomic) unsigned int idsSessionInvitationReceived; // @synthesize idsSessionInvitationReceived=_idsSessionInvitationReceived;
@property (nonatomic) unsigned int idsSessionInvitationSent; // @synthesize idsSessionInvitationSent=_idsSessionInvitationSent;
@property (nonatomic) unsigned int idsSessionStartedOnReceiver; // @synthesize idsSessionStartedOnReceiver=_idsSessionStartedOnReceiver;
@property (nonatomic) unsigned int idsSessionStartedOnResident; // @synthesize idsSessionStartedOnResident=_idsSessionStartedOnResident;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
