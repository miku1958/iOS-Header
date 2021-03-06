//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOMapRegionE7, NSMutableArray, NSString, PBDataReader;

@interface GEOLPRRestrictionRegion : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    NSMutableArray *_convertRules;
    NSMutableArray *_definedPlateTypes;
    NSString *_identifier;
    GEOMapRegionE7 *_mapRegion;
    NSString *_name;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_convertRules:1;
        unsigned int read_definedPlateTypes:1;
        unsigned int read_identifier:1;
        unsigned int read_mapRegion:1;
        unsigned int read_name:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *convertRules;
@property (strong, nonatomic) NSMutableArray *definedPlateTypes;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (readonly, nonatomic) BOOL hasName;
@property (strong, nonatomic) NSString *identifier;
@property (strong, nonatomic) GEOMapRegionE7 *mapRegion;
@property (strong, nonatomic) NSString *name;

+ (Class)convertRuleType;
+ (Class)definedPlateTypesType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)addConvertRule:(id)arg1;
- (void)addDefinedPlateTypes:(id)arg1;
- (void)clearConvertRules;
- (void)clearDefinedPlateTypes;
- (id)convertRuleAtIndex:(unsigned long long)arg1;
- (unsigned long long)convertRulesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)definedPlateTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)definedPlateTypesCount;
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
- (void)writeTo:(id)arg1;

@end

