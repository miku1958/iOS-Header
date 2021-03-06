//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAttribution, GEOPDSource, NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDComponent : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOPDAttribution *_attribution;
    GEOPDSource *_source;
    double _timestampFirstSeen;
    NSMutableArray *_values;
    NSMutableArray *_versionDomains;
    int _cacheControl;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    int _valuesAvailable;
    unsigned int _version;
    struct {
        unsigned int has_timestampFirstSeen:1;
        unsigned int has_cacheControl:1;
        unsigned int has_startIndex:1;
        unsigned int has_status:1;
        unsigned int has_ttl:1;
        unsigned int has_type:1;
        unsigned int has_valuesAvailable:1;
        unsigned int has_version:1;
    } _flags;
}

@property (strong, nonatomic) GEOPDAttribution *attribution;
@property (nonatomic) int cacheControl;
@property (readonly, nonatomic) BOOL hasAttribution;
@property (nonatomic) BOOL hasCacheControl;
@property (readonly, nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasStartIndex;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTimestampFirstSeen;
@property (nonatomic) BOOL hasTtl;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasValuesAvailable;
@property (nonatomic) BOOL hasVersion;
@property (strong, nonatomic) GEOPDSource *source;
@property (nonatomic) int startIndex;
@property (nonatomic) int status;
@property (nonatomic) double timestampFirstSeen;
@property (nonatomic) unsigned int ttl;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSMutableArray *values;
@property (nonatomic) int valuesAvailable;
@property (nonatomic) unsigned int version;
@property (strong, nonatomic) NSMutableArray *versionDomains;

+ (BOOL)isValid:(id)arg1;
+ (Class)valueType;
+ (Class)versionDomainType;
- (void).cxx_destruct;
- (int)StringAsCacheControl:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addValue:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (id)cacheControlAsString:(int)arg1;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)clearValues;
- (void)clearVersionDomains;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (BOOL)statusCodeIsValid;
- (id)typeAsString:(int)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end

