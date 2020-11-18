//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBUnknownFields;

@interface GEOAbAssignInfo : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _createdAtTimestamp;
    unsigned long long _relativeTimestamp;
    NSString *_abAssignId;
    struct {
        unsigned int createdAtTimestamp:1;
        unsigned int relativeTimestamp:1;
    } _has;
}

@property (strong, nonatomic) NSString *abAssignId; // @synthesize abAssignId=_abAssignId;
@property (nonatomic) unsigned long long createdAtTimestamp;
@property (readonly, nonatomic) BOOL hasAbAssignId;
@property (nonatomic) BOOL hasCreatedAtTimestamp;
@property (nonatomic) BOOL hasRelativeTimestamp;
@property (nonatomic) unsigned long long relativeTimestamp; // @synthesize relativeTimestamp=_relativeTimestamp;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithAbAssignId:(id)arg1 createdAtDate:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)refreshRelativeTimeStamp;
- (void)refreshRelativeTimeStampWithEventTime:(double)arg1;
- (void)writeTo:(id)arg1;

@end
