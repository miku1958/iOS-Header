//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDGeographicCoordinate, GEOPDGroundDataBuild, GEOPDOrientedPosition, GEOPDOrientedTilePosition, GEOPDRigMetrics, GEOTileCoordinate, NSMutableArray, PBDataReader;

@interface GEOPDPhotoPosition : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _cameraMetadataIndexs;
    GEOPDGroundDataBuild *_build;
    NSMutableArray *_cameraMetadatas;
    unsigned long long _imageryTimestamp;
    unsigned long long _imdataId;
    GEOTileCoordinate *_parentTile;
    GEOPDGeographicCoordinate *_positionGeo;
    GEOPDOrientedPosition *_position;
    GEOPDRigMetrics *_rigMetrics;
    GEOPDOrientedTilePosition *_tilePosition;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _buildTableIndex;
    int _revision;
    struct {
        unsigned int has_imageryTimestamp:1;
        unsigned int has_imdataId:1;
        unsigned int has_buildTableIndex:1;
        unsigned int has_revision:1;
        unsigned int read_cameraMetadataIndexs:1;
        unsigned int read_build:1;
        unsigned int read_cameraMetadatas:1;
        unsigned int read_parentTile:1;
        unsigned int read_positionGeo:1;
        unsigned int read_position:1;
        unsigned int read_rigMetrics:1;
        unsigned int read_tilePosition:1;
        unsigned int wrote_cameraMetadataIndexs:1;
        unsigned int wrote_build:1;
        unsigned int wrote_cameraMetadatas:1;
        unsigned int wrote_imageryTimestamp:1;
        unsigned int wrote_imdataId:1;
        unsigned int wrote_parentTile:1;
        unsigned int wrote_positionGeo:1;
        unsigned int wrote_position:1;
        unsigned int wrote_rigMetrics:1;
        unsigned int wrote_tilePosition:1;
        unsigned int wrote_buildTableIndex:1;
        unsigned int wrote_revision:1;
    } _flags;
}

@property (strong, nonatomic) GEOPDGroundDataBuild *build;
@property (nonatomic) unsigned int buildTableIndex;
@property (readonly, nonatomic) unsigned int *cameraMetadataIndexs;
@property (readonly, nonatomic) unsigned long long cameraMetadataIndexsCount;
@property (strong, nonatomic) NSMutableArray *cameraMetadatas;
@property (readonly, nonatomic) BOOL hasBuild;
@property (nonatomic) BOOL hasBuildTableIndex;
@property (nonatomic) BOOL hasImageryTimestamp;
@property (nonatomic) BOOL hasImdataId;
@property (readonly, nonatomic) BOOL hasParentTile;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasPositionGeo;
@property (nonatomic) BOOL hasRevision;
@property (readonly, nonatomic) BOOL hasRigMetrics;
@property (readonly, nonatomic) BOOL hasTilePosition;
@property (nonatomic) unsigned long long imageryTimestamp;
@property (nonatomic) unsigned long long imdataId;
@property (strong, nonatomic) GEOTileCoordinate *parentTile;
@property (strong, nonatomic) GEOPDOrientedPosition *position;
@property (strong, nonatomic) GEOPDGeographicCoordinate *positionGeo;
@property (nonatomic) int revision;
@property (strong, nonatomic) GEOPDRigMetrics *rigMetrics;
@property (strong, nonatomic) GEOPDOrientedTilePosition *tilePosition;

+ (Class)cameraMetadataType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (void)_addNoFlagsCameraMetadata:(id)arg1;
- (void)_addNoFlagsCameraMetadataIndex:(unsigned int)arg1;
- (void)_readBuild;
- (void)_readCameraMetadataIndexs;
- (void)_readCameraMetadatas;
- (void)_readParentTile;
- (void)_readPosition;
- (void)_readPositionGeo;
- (void)_readRigMetrics;
- (void)_readTilePosition;
- (void)addCameraMetadata:(id)arg1;
- (void)addCameraMetadataIndex:(unsigned int)arg1;
- (id)cameraMetadataAtIndex:(unsigned long long)arg1;
- (unsigned int)cameraMetadataIndexAtIndex:(unsigned long long)arg1;
- (unsigned long long)cameraMetadatasCount;
- (void)clearCameraMetadataIndexs;
- (void)clearCameraMetadatas;
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
- (void)setCameraMetadataIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
