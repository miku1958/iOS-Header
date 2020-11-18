//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface HDCodableSourceAuthorization : PBCodable <NSCopying>
{
    NSMutableArray *_authorizations;
    NSData *_sourceUUID;
}

@property (strong, nonatomic) NSMutableArray *authorizations; // @synthesize authorizations=_authorizations;
@property (readonly, nonatomic) BOOL hasSourceUUID;
@property (strong, nonatomic) NSData *sourceUUID; // @synthesize sourceUUID=_sourceUUID;

+ (Class)authorizationsType;
- (void).cxx_destruct;
- (void)addAuthorizations:(id)arg1;
- (id)authorizationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)authorizationsCount;
- (void)clearAuthorizations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodedSourceUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

