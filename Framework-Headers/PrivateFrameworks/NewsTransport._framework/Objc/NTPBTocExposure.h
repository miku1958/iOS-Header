//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData;

@interface NTPBTocExposure : PBCodable <NSCopying>
{
    int _precedingLocation;
    NSData *_tocExposureId;
    struct {
        unsigned int precedingLocation:1;
    } _has;
}

@property (nonatomic) BOOL hasPrecedingLocation;
@property (readonly, nonatomic) BOOL hasTocExposureId;
@property (nonatomic) int precedingLocation; // @synthesize precedingLocation=_precedingLocation;
@property (strong, nonatomic) NSData *tocExposureId; // @synthesize tocExposureId=_tocExposureId;

- (void).cxx_destruct;
- (int)StringAsPrecedingLocation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)precedingLocationAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
