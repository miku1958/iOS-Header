//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBUnknownFields;

@interface MSPCollectionItemReplicaStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_clientIdentifier;
    NSMutableArray *_records;
}

@property (strong, nonatomic) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (readonly, nonatomic) BOOL hasClientIdentifier;
@property (strong, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)recordsType;
- (void).cxx_destruct;
- (void)addRecords:(id)arg1;
- (void)clearRecords;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)recordsAtIndex:(unsigned long long)arg1;
- (unsigned long long)recordsCount;
- (void)writeTo:(id)arg1;

@end

