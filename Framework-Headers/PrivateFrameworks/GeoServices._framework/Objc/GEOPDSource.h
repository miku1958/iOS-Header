//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOPDSource : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    int _resultProviderId;
    NSString *_sourceId;
    NSString *_version;
    struct {
        unsigned int resultProviderId:1;
    } _has;
}

@property (nonatomic) BOOL hasResultProviderId;
@property (readonly, nonatomic) BOOL hasSourceId;
@property (readonly, nonatomic) BOOL hasVersion;
@property (nonatomic) int resultProviderId; // @synthesize resultProviderId=_resultProviderId;
@property (strong, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *version; // @synthesize version=_version;

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

