//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@interface AWDCoreRoutinePersistenceMirroringDelegate : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _creationFailureReason;
    BOOL _mirroringDelegatePresent;
    struct {
        unsigned int timestamp:1;
        unsigned int creationFailureReason:1;
        unsigned int mirroringDelegatePresent:1;
    } _has;
}

@property (nonatomic) int creationFailureReason; // @synthesize creationFailureReason=_creationFailureReason;
@property (nonatomic) BOOL hasCreationFailureReason;
@property (nonatomic) BOOL hasMirroringDelegatePresent;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL mirroringDelegatePresent; // @synthesize mirroringDelegatePresent=_mirroringDelegatePresent;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

