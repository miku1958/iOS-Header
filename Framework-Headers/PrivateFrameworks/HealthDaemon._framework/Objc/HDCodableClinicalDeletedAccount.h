//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableClinicalDeletedAccount : PBCodable <NSCopying>
{
    double _deletionDate;
    NSData *_syncIdentifier;
    struct {
        unsigned int deletionDate:1;
    } _has;
}

@property (nonatomic) double deletionDate; // @synthesize deletionDate=_deletionDate;
@property (nonatomic) BOOL hasDeletionDate;
@property (readonly, nonatomic) BOOL hasSyncIdentifier;
@property (strong, nonatomic) NSData *syncIdentifier; // @synthesize syncIdentifier=_syncIdentifier;

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
