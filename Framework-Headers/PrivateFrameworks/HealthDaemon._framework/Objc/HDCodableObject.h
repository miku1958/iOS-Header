//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class HDCodableMetadataDictionary, NSData, NSString;

@interface HDCodableObject : PBCodable <NSCopying>
{
    double _creationDate;
    HDCodableMetadataDictionary *_metadataDictionary;
    NSString *_sourceBundleIdentifier;
    NSData *_uuid;
    CDStruct_dc48a425 _has;
}

@property (nonatomic) double creationDate; // @synthesize creationDate=_creationDate;
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (readonly, nonatomic) BOOL hasSourceBundleIdentifier;
@property (readonly, nonatomic) BOOL hasUuid;
@property (strong, nonatomic) HDCodableMetadataDictionary *metadataDictionary; // @synthesize metadataDictionary=_metadataDictionary;
@property (strong, nonatomic) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property (strong, nonatomic) NSData *uuid; // @synthesize uuid=_uuid;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)decodedCreationDate;
- (id)decodedMetadata;
- (id)decodedUUID;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

