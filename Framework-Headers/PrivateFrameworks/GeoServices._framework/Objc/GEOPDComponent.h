//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying>
{
    double _timestampFirstSeen;
    GEOPDAttribution *_attribution;
    int _cacheControl;
    GEOPDSource *_source;
    int _startIndex;
    int _status;
    unsigned int _ttl;
    int _type;
    NSMutableArray *_values;
    int _valuesAvailable;
    unsigned int _version;
    NSMutableArray *_versionDomains;
    struct {
        unsigned int timestampFirstSeen:1;
        unsigned int cacheControl:1;
        unsigned int startIndex:1;
        unsigned int status:1;
        unsigned int ttl:1;
        unsigned int type:1;
        unsigned int valuesAvailable:1;
        unsigned int version:1;
    } _has;
}

@property (strong, nonatomic) GEOPDAttribution *attribution; // @synthesize attribution=_attribution;
@property (nonatomic) int cacheControl; // @synthesize cacheControl=_cacheControl;
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
@property (strong, nonatomic) GEOPDSource *source; // @synthesize source=_source;
@property (nonatomic) int startIndex; // @synthesize startIndex=_startIndex;
@property (nonatomic) int status; // @synthesize status=_status;
@property (nonatomic) double timestampFirstSeen;
@property (nonatomic) unsigned int ttl; // @synthesize ttl=_ttl;
@property (nonatomic) int type; // @synthesize type=_type;
@property (strong, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property (nonatomic) int valuesAvailable; // @synthesize valuesAvailable=_valuesAvailable;
@property (nonatomic) unsigned int version; // @synthesize version=_version;
@property (strong, nonatomic) NSMutableArray *versionDomains; // @synthesize versionDomains=_versionDomains;

- (void)addValue:(id)arg1;
- (void)addVersionDomain:(id)arg1;
- (void)clearValues;
- (void)clearVersionDomains;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)valueAtIndex:(unsigned long long)arg1;
- (unsigned long long)valuesCount;
- (id)versionDomainAtIndex:(unsigned long long)arg1;
- (unsigned long long)versionDomainsCount;
- (void)writeTo:(id)arg1;

@end
