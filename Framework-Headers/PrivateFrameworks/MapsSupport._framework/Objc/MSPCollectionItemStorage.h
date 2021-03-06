//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MapsSupport/NSCopying-Protocol.h>

@class NSData, PBUnknownFields;

@interface MSPCollectionItemStorage : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSData *_contents;
    NSData *_contentsTimestamp;
    NSData *_position;
    NSData *_positionTimestamp;
    NSData *_storageIdentifier;
}

@property (strong, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property (strong, nonatomic) NSData *contentsTimestamp; // @synthesize contentsTimestamp=_contentsTimestamp;
@property (readonly, nonatomic) BOOL hasContents;
@property (readonly, nonatomic) BOOL hasContentsTimestamp;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasPositionTimestamp;
@property (readonly, nonatomic) BOOL hasStorageIdentifier;
@property (strong, nonatomic) NSData *position; // @synthesize position=_position;
@property (strong, nonatomic) NSData *positionTimestamp; // @synthesize positionTimestamp=_positionTimestamp;
@property (strong, nonatomic) NSData *storageIdentifier; // @synthesize storageIdentifier=_storageIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

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

