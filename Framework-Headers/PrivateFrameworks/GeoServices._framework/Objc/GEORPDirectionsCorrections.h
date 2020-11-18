//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPCorrectedCoordinate, NSData, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPDirectionsCorrections : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEORPCorrectedCoordinate *_arrivalCoordinate;
    NSData *_directionsResponseId;
    NSMutableArray *_instructionCorrections;
    NSString *_overviewScreenshotImageId;
    NSMutableArray *_problematicRouteIndexs;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _noGoodRoutesShown;
    struct {
        unsigned int has_noGoodRoutesShown:1;
        unsigned int read_unknownFields:1;
        unsigned int read_arrivalCoordinate:1;
        unsigned int read_directionsResponseId:1;
        unsigned int read_instructionCorrections:1;
        unsigned int read_overviewScreenshotImageId:1;
        unsigned int read_problematicRouteIndexs:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEORPCorrectedCoordinate *arrivalCoordinate;
@property (strong, nonatomic) NSData *directionsResponseId;
@property (readonly, nonatomic) BOOL hasArrivalCoordinate;
@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (nonatomic) BOOL hasNoGoodRoutesShown;
@property (readonly, nonatomic) BOOL hasOverviewScreenshotImageId;
@property (strong, nonatomic) NSMutableArray *instructionCorrections;
@property (nonatomic) BOOL noGoodRoutesShown;
@property (strong, nonatomic) NSString *overviewScreenshotImageId;
@property (strong, nonatomic) NSMutableArray *problematicRouteIndexs;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)instructionCorrectionType;
+ (BOOL)isValid:(id)arg1;
+ (Class)problematicRouteIndexType;
- (void).cxx_destruct;
- (void)addInstructionCorrection:(id)arg1;
- (void)addProblematicRouteIndex:(id)arg1;
- (void)clearInstructionCorrections;
- (void)clearProblematicRouteIndexs;
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
- (id)instructionCorrectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionCorrectionsCount;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)problematicRouteIndexsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
