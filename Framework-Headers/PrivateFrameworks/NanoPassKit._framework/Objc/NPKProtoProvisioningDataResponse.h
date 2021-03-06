//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData;

@interface NPKProtoProvisioningDataResponse : PBCodable <NSCopying>
{
    NSData *_provisioningDataBytes;
    BOOL _pending;
    CDStruct_eab6c78c _has;
}

@property (nonatomic) BOOL hasPending;
@property (readonly, nonatomic) BOOL hasProvisioningDataBytes;
@property (nonatomic) BOOL pending; // @synthesize pending=_pending;
@property (strong, nonatomic) NSData *provisioningDataBytes; // @synthesize provisioningDataBytes=_provisioningDataBytes;

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

