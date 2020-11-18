//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPContactInformation, CKDPIdentifier, CKDPProtectionInfo;

__attribute__((visibility("hidden")))
@interface CKDPParticipant : PBCodable <NSCopying>
{
    long long _acceptTimestamp;
    CKDPContactInformation *_contactInformation;
    CKDPIdentifier *_inviterId;
    CKDPIdentifier *_participantId;
    int _participantType;
    int _permission;
    CKDPProtectionInfo *_publicKey;
    int _state;
    CKDPIdentifier *_userId;
    BOOL _createdOutOfProcess;
    struct {
        unsigned int acceptTimestamp:1;
        unsigned int participantType:1;
        unsigned int permission:1;
        unsigned int state:1;
        unsigned int createdOutOfProcess:1;
    } _has;
}

@property (nonatomic) long long acceptTimestamp; // @synthesize acceptTimestamp=_acceptTimestamp;
@property (strong, nonatomic) CKDPContactInformation *contactInformation; // @synthesize contactInformation=_contactInformation;
@property (nonatomic) BOOL createdOutOfProcess; // @synthesize createdOutOfProcess=_createdOutOfProcess;
@property (nonatomic) BOOL hasAcceptTimestamp;
@property (readonly, nonatomic) BOOL hasContactInformation;
@property (nonatomic) BOOL hasCreatedOutOfProcess;
@property (readonly, nonatomic) BOOL hasInviterId;
@property (readonly, nonatomic) BOOL hasParticipantId;
@property (nonatomic) BOOL hasParticipantType;
@property (nonatomic) BOOL hasPermission;
@property (readonly, nonatomic) BOOL hasPublicKey;
@property (nonatomic) BOOL hasState;
@property (readonly, nonatomic) BOOL hasUserId;
@property (strong, nonatomic) CKDPIdentifier *inviterId; // @synthesize inviterId=_inviterId;
@property (strong, nonatomic) CKDPIdentifier *participantId; // @synthesize participantId=_participantId;
@property (nonatomic) int participantType; // @synthesize participantType=_participantType;
@property (nonatomic) int permission; // @synthesize permission=_permission;
@property (strong, nonatomic) CKDPProtectionInfo *publicKey; // @synthesize publicKey=_publicKey;
@property (nonatomic) int state; // @synthesize state=_state;
@property (strong, nonatomic) CKDPIdentifier *userId; // @synthesize userId=_userId;

- (void).cxx_destruct;
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

