//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOPDGroundDataBuild : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _capabilitys;
    CDStruct_9f2792e4 _lodWithTextures;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _bucketId;
    unsigned int _buildId;
    unsigned int _dataFormatVersion;
    unsigned int _dataOutputVersion;
    float _heightAboveGroundM;
    unsigned int _index;
    unsigned int _metricsVersion;
    int _type;
    struct {
        unsigned int has_bucketId:1;
        unsigned int has_buildId:1;
        unsigned int has_dataFormatVersion:1;
        unsigned int has_dataOutputVersion:1;
        unsigned int has_heightAboveGroundM:1;
        unsigned int has_index:1;
        unsigned int has_metricsVersion:1;
        unsigned int has_type:1;
        unsigned int read_capabilitys:1;
        unsigned int read_lodWithTextures:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int bucketId;
@property (nonatomic) unsigned int buildId;
@property (readonly, nonatomic) int *capabilitys;
@property (readonly, nonatomic) unsigned long long capabilitysCount;
@property (nonatomic) unsigned int dataFormatVersion;
@property (nonatomic) unsigned int dataOutputVersion;
@property (nonatomic) BOOL hasBucketId;
@property (nonatomic) BOOL hasBuildId;
@property (nonatomic) BOOL hasDataFormatVersion;
@property (nonatomic) BOOL hasDataOutputVersion;
@property (nonatomic) BOOL hasHeightAboveGroundM;
@property (nonatomic) BOOL hasIndex;
@property (nonatomic) BOOL hasMetricsVersion;
@property (nonatomic) BOOL hasType;
@property (nonatomic) float heightAboveGroundM;
@property (nonatomic) unsigned int index;
@property (readonly, nonatomic) unsigned int *lodWithTextures;
@property (readonly, nonatomic) unsigned long long lodWithTexturesCount;
@property (nonatomic) unsigned int metricsVersion;
@property (nonatomic) int type;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsCapabilitys:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addCapability:(int)arg1;
- (void)addLodWithTextures:(unsigned int)arg1;
- (int)capabilityAtIndex:(unsigned long long)arg1;
- (id)capabilitysAsString:(int)arg1;
- (void)clearCapabilitys;
- (void)clearLodWithTextures;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (unsigned int)lodWithTexturesAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setCapabilitys:(int *)arg1 count:(unsigned long long)arg2;
- (void)setLodWithTextures:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

