//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@interface CKDPResponseOperationResultErrorServer : PBCodable <NSCopying>
{
    int _type;
    CDStruct_f953fb60 _has;
}

@property (nonatomic) BOOL hasType;
@property (nonatomic) int type; // @synthesize type=_type;

- (id)_prettyDictionaryRepresentation;
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

