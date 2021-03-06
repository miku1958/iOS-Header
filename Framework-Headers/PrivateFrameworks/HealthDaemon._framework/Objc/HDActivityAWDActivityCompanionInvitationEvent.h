//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@interface HDActivityAWDActivityCompanionInvitationEvent : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _action;
    int _failureReason;
    int _stage;
    BOOL _retryExpected;
    BOOL _success;
    struct {
        unsigned int timestamp:1;
        unsigned int action:1;
        unsigned int failureReason:1;
        unsigned int stage:1;
        unsigned int retryExpected:1;
        unsigned int success:1;
    } _has;
}

@property (nonatomic) int action; // @synthesize action=_action;
@property (nonatomic) int failureReason; // @synthesize failureReason=_failureReason;
@property (nonatomic) BOOL hasAction;
@property (nonatomic) BOOL hasFailureReason;
@property (nonatomic) BOOL hasRetryExpected;
@property (nonatomic) BOOL hasStage;
@property (nonatomic) BOOL hasSuccess;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL retryExpected; // @synthesize retryExpected=_retryExpected;
@property (nonatomic) int stage; // @synthesize stage=_stage;
@property (nonatomic) BOOL success; // @synthesize success=_success;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (int)StringAsAction:(id)arg1;
- (int)StringAsFailureReason:(id)arg1;
- (int)StringAsStage:(id)arg1;
- (id)actionAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)failureReasonAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stageAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

