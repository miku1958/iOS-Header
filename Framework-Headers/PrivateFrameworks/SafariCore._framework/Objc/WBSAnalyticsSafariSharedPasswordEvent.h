//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariSharedPasswordEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _initiatedSharePasswordOutcome;
    int _passwordSharingMechanism;
    int _receivedSharedPasswordOutcome;
    struct {
        unsigned int timestamp:1;
        unsigned int initiatedSharePasswordOutcome:1;
        unsigned int passwordSharingMechanism:1;
        unsigned int receivedSharedPasswordOutcome:1;
    } _has;
}

@property (nonatomic) BOOL hasInitiatedSharePasswordOutcome;
@property (nonatomic) BOOL hasPasswordSharingMechanism;
@property (nonatomic) BOOL hasReceivedSharedPasswordOutcome;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int initiatedSharePasswordOutcome; // @synthesize initiatedSharePasswordOutcome=_initiatedSharePasswordOutcome;
@property (nonatomic) int passwordSharingMechanism; // @synthesize passwordSharingMechanism=_passwordSharingMechanism;
@property (nonatomic) int receivedSharedPasswordOutcome; // @synthesize receivedSharedPasswordOutcome=_receivedSharedPasswordOutcome;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsInitiatedSharePasswordOutcome:(id)arg1;
- (int)StringAsPasswordSharingMechanism:(id)arg1;
- (int)StringAsReceivedSharedPasswordOutcome:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initiatedSharePasswordOutcomeAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passwordSharingMechanismAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)receivedSharedPasswordOutcomeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

