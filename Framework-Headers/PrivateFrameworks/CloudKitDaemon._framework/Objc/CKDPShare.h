//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class CKDPProtectionInfo, CKDPShareIdentifier, NSData, NSMutableArray, NSString;

@interface CKDPShare : PBCodable <NSCopying>
{
    NSString *_etag;
    NSMutableArray *_invitedKeyToRemoves;
    CKDPProtectionInfo *_invitedPcs;
    NSMutableArray *_participants;
    NSMutableArray *_potentialMatchs;
    int _publicAccess;
    CKDPProtectionInfo *_selfAddedPcs;
    CKDPShareIdentifier *_shareId;
    NSData *_shortTokenHash;
    NSString *_shortTokenRoutingKey;
    BOOL _publisherModel;
    struct {
        unsigned int publicAccess:1;
        unsigned int publisherModel:1;
    } _has;
}

@property (strong, nonatomic) NSString *etag; // @synthesize etag=_etag;
@property (readonly, nonatomic) BOOL hasEtag;
@property (readonly, nonatomic) BOOL hasInvitedPcs;
@property (nonatomic) BOOL hasPublicAccess;
@property (nonatomic) BOOL hasPublisherModel;
@property (readonly, nonatomic) BOOL hasSelfAddedPcs;
@property (readonly, nonatomic) BOOL hasShareId;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (readonly, nonatomic) BOOL hasShortTokenRoutingKey;
@property (strong, nonatomic) NSMutableArray *invitedKeyToRemoves; // @synthesize invitedKeyToRemoves=_invitedKeyToRemoves;
@property (strong, nonatomic) CKDPProtectionInfo *invitedPcs; // @synthesize invitedPcs=_invitedPcs;
@property (strong, nonatomic) NSMutableArray *participants; // @synthesize participants=_participants;
@property (strong, nonatomic) NSMutableArray *potentialMatchs; // @synthesize potentialMatchs=_potentialMatchs;
@property (nonatomic) int publicAccess; // @synthesize publicAccess=_publicAccess;
@property (nonatomic) BOOL publisherModel; // @synthesize publisherModel=_publisherModel;
@property (strong, nonatomic) CKDPProtectionInfo *selfAddedPcs; // @synthesize selfAddedPcs=_selfAddedPcs;
@property (strong, nonatomic) CKDPShareIdentifier *shareId; // @synthesize shareId=_shareId;
@property (strong, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property (strong, nonatomic) NSString *shortTokenRoutingKey; // @synthesize shortTokenRoutingKey=_shortTokenRoutingKey;

+ (Class)invitedKeyToRemoveType;
+ (Class)participantType;
+ (Class)potentialMatchType;
- (void).cxx_destruct;
- (int)StringAsPublicAccess:(id)arg1;
- (id)_publicAccessCKLogValue;
- (void)addInvitedKeyToRemove:(id)arg1;
- (void)addParticipant:(id)arg1;
- (void)addPotentialMatch:(id)arg1;
- (void)clearInvitedKeyToRemoves;
- (void)clearParticipants;
- (void)clearPotentialMatchs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)invitedKeyToRemoveAtIndex:(unsigned long long)arg1;
- (unsigned long long)invitedKeyToRemovesCount;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)participantAtIndex:(unsigned long long)arg1;
- (unsigned long long)participantsCount;
- (id)potentialMatchAtIndex:(unsigned long long)arg1;
- (unsigned long long)potentialMatchsCount;
- (id)publicAccessAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

