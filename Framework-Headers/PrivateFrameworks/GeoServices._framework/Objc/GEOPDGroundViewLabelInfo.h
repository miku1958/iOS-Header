//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDGroundViewLabelInfo : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _endHeading;
    NSString *_localityName;
    NSString *_locationName;
    NSString *_secondaryLocationName;
    double _startHeading;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_endHeading:1;
        unsigned int has_startHeading:1;
        unsigned int read_unknownFields:1;
        unsigned int read_localityName:1;
        unsigned int read_locationName:1;
        unsigned int read_secondaryLocationName:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_endHeading:1;
        unsigned int wrote_localityName:1;
        unsigned int wrote_locationName:1;
        unsigned int wrote_secondaryLocationName:1;
        unsigned int wrote_startHeading:1;
    } _flags;
}

@property (nonatomic) double endHeading;
@property (nonatomic) BOOL hasEndHeading;
@property (readonly, nonatomic) BOOL hasLocalityName;
@property (readonly, nonatomic) BOOL hasLocationName;
@property (readonly, nonatomic) BOOL hasSecondaryLocationName;
@property (nonatomic) BOOL hasStartHeading;
@property (strong, nonatomic) NSString *localityName;
@property (strong, nonatomic) NSString *locationName;
@property (strong, nonatomic) NSString *secondaryLocationName;
@property (nonatomic) double startHeading;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)_readLocalityName;
- (void)_readLocationName;
- (void)_readSecondaryLocationName;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
