//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData;

@interface HDCodableObjectAssociations : PBCodable <NSCopying>
{
    NSData *_associationUuid;
    NSData *_objectUuids;
}

@property (strong, nonatomic) NSData *associationUuid; // @synthesize associationUuid=_associationUuid;
@property (readonly, nonatomic) BOOL hasAssociationUuid;
@property (readonly, nonatomic) BOOL hasObjectUuids;
@property (strong, nonatomic) NSData *objectUuids; // @synthesize objectUuids=_objectUuids;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodedAssociationUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithAssociationUUID:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

