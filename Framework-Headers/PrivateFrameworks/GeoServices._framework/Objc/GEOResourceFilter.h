//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader, PBUnknownFields;

@interface GEOResourceFilter : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _scales;
    CDStruct_95bda58d _scenarios;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_scales:1;
        unsigned int read_scenarios:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_scales:1;
        unsigned int wrote_scenarios:1;
    } _flags;
}

@property (readonly, nonatomic) int *scales;
@property (readonly, nonatomic) unsigned long long scalesCount;
@property (readonly, nonatomic) int *scenarios;
@property (readonly, nonatomic) unsigned long long scenariosCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsScales:(id)arg1;
- (int)StringAsScenarios:(id)arg1;
- (void)_addNoFlagsScale:(int)arg1;
- (void)_addNoFlagsScenario:(int)arg1;
- (void)_readScales;
- (void)_readScenarios;
- (void)addScale:(int)arg1;
- (void)addScenario:(int)arg1;
- (void)clearScales;
- (void)clearScenarios;
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
- (int)scaleAtIndex:(unsigned long long)arg1;
- (id)scalesAsString:(int)arg1;
- (int)scenarioAtIndex:(unsigned long long)arg1;
- (id)scenariosAsString:(int)arg1;
- (void)setScales:(int *)arg1 count:(unsigned long long)arg2;
- (void)setScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
