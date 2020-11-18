//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDETAFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _transportTypes;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    BOOL _includeHistoricTravelTime;
    BOOL _includeRouteTrafficDetail;
    struct {
        unsigned int has_includeHistoricTravelTime:1;
        unsigned int has_includeRouteTrafficDetail:1;
        unsigned int read_unknownFields:1;
        unsigned int read_transportTypes:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_transitOptions:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_transportTypes:1;
        unsigned int wrote_automobileOptions:1;
        unsigned int wrote_transitOptions:1;
        unsigned int wrote_walkingOptions:1;
        unsigned int wrote_includeHistoricTravelTime:1;
        unsigned int wrote_includeRouteTrafficDetail:1;
    } _flags;
}

@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (nonatomic) BOOL hasIncludeRouteTrafficDetail;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (nonatomic) BOOL includeHistoricTravelTime;
@property (nonatomic) BOOL includeRouteTrafficDetail;
@property (strong, nonatomic) GEOTransitOptions *transitOptions;
@property (readonly, nonatomic) int *transportTypes;
@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOWalkingOptions *walkingOptions;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsTransportTypes:(id)arg1;
- (void)_addNoFlagsTransportType:(int)arg1;
- (void)_readAutomobileOptions;
- (void)_readTransitOptions;
- (void)_readTransportTypes;
- (void)_readWalkingOptions;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (id)transportTypesAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
