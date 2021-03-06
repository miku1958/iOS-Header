//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDDepartureSequence : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _nextStopIds;
    struct GEOPDTimeRange *_operatingHours;
    unsigned long long _operatingHoursCount;
    unsigned long long _operatingHoursSpace;
    NSMutableArray *_departureFrequencys;
    NSMutableArray *_departures;
    NSString *_directionNameString;
    NSString *_headsignString;
    unsigned long long _lineId;
    unsigned long long _stopId;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int has_lineId:1;
        unsigned int has_stopId:1;
        unsigned int read_unknownFields:1;
        unsigned int read_nextStopIds:1;
        unsigned int read_operatingHours:1;
        unsigned int read_departureFrequencys:1;
        unsigned int read_departures:1;
        unsigned int read_directionNameString:1;
        unsigned int read_headsignString:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *departureFrequencys;
@property (strong, nonatomic) NSMutableArray *departures;
@property (strong, nonatomic) NSString *directionNameString;
@property (readonly, nonatomic) BOOL hasDirectionNameString;
@property (readonly, nonatomic) BOOL hasHeadsignString;
@property (nonatomic) BOOL hasLineId;
@property (nonatomic) BOOL hasStopId;
@property (strong, nonatomic) NSString *headsignString;
@property (nonatomic) unsigned long long lineId;
@property (readonly, nonatomic) unsigned long long *nextStopIds;
@property (readonly, nonatomic) unsigned long long nextStopIdsCount;
@property (readonly, nonatomic) struct GEOPDTimeRange *operatingHours;
@property (readonly, nonatomic) unsigned long long operatingHoursCount;
@property (nonatomic) unsigned long long stopId;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)departureFrequencyType;
+ (Class)departureType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addDeparture:(id)arg1;
- (void)addDepartureFrequency:(id)arg1;
- (void)addNextStopId:(unsigned long long)arg1;
- (void)addOperatingHours:(struct GEOPDTimeRange)arg1;
- (void)clearDepartureFrequencys;
- (void)clearDepartures;
- (void)clearNextStopIds;
- (void)clearOperatingHours;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)departureAtIndex:(unsigned long long)arg1;
- (id)departureFrequencyAtIndex:(unsigned long long)arg1;
- (unsigned long long)departureFrequencysCount;
- (unsigned long long)departuresCount;
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
- (unsigned long long)nextStopIdAtIndex:(unsigned long long)arg1;
- (struct GEOPDTimeRange)operatingHoursAtIndex:(unsigned long long)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setNextStopIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setOperatingHours:(struct GEOPDTimeRange *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

