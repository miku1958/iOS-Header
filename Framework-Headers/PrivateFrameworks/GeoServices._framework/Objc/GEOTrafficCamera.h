//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEOMiniCard, NSString, PBDataReader, PBUnknownFields;

@interface GEOTrafficCamera : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_identifier;
    GEOMiniCard *_infoCard;
    GEOLatLng *_position;
    NSString *_speedLimitText;
    double _speedThreshold;
    GEOMiniCard *_speedingCard;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _cameraPriority;
    unsigned int _highlightDistance;
    int _type;
    struct {
        unsigned int has_speedThreshold:1;
        unsigned int has_cameraPriority:1;
        unsigned int has_highlightDistance:1;
        unsigned int has_type:1;
        unsigned int read_unknownFields:1;
        unsigned int read_identifier:1;
        unsigned int read_infoCard:1;
        unsigned int read_position:1;
        unsigned int read_speedLimitText:1;
        unsigned int read_speedingCard:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int cameraPriority;
@property (nonatomic) BOOL hasCameraPriority;
@property (nonatomic) BOOL hasHighlightDistance;
@property (readonly, nonatomic) BOOL hasIdentifier;
@property (readonly, nonatomic) BOOL hasInfoCard;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasSpeedLimitText;
@property (nonatomic) BOOL hasSpeedThreshold;
@property (readonly, nonatomic) BOOL hasSpeedingCard;
@property (nonatomic) BOOL hasType;
@property (nonatomic) unsigned int highlightDistance;
@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) GEOMiniCard *infoCard;
@property (strong, nonatomic) GEOLatLng *position;
@property (strong, nonatomic) NSString *speedLimitText;
@property (nonatomic) double speedThreshold;
@property (strong, nonatomic) GEOMiniCard *speedingCard;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

