//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPDVenueLabel, PBUnknownFields;

@interface GEOPDVenueBuilding : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    CDStruct_62a50c50 _directoryGroupingIds;
    CDStruct_62a50c50 _levelIds;
    unsigned long long _buildingId;
    unsigned long long _muid;
    GEOPDVenueLabel *_label;
    struct {
        unsigned int buildingId:1;
        unsigned int muid:1;
    } _has;
}

@property (nonatomic) unsigned long long buildingId; // @synthesize buildingId=_buildingId;
@property (readonly, nonatomic) unsigned long long *directoryGroupingIds;
@property (readonly, nonatomic) unsigned long long directoryGroupingIdsCount;
@property (nonatomic) BOOL hasBuildingId;
@property (readonly, nonatomic) BOOL hasLabel;
@property (nonatomic) BOOL hasMuid;
@property (strong, nonatomic) GEOPDVenueLabel *label; // @synthesize label=_label;
@property (readonly, nonatomic) unsigned long long *levelIds;
@property (readonly, nonatomic) unsigned long long levelIdsCount;
@property (nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

- (void).cxx_destruct;
- (void)addDirectoryGroupingId:(unsigned long long)arg1;
- (void)addLevelId:(unsigned long long)arg1;
- (void)clearDirectoryGroupingIds;
- (void)clearLevelIds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)directoryGroupingIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)levelIdAtIndex:(unsigned long long)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setDirectoryGroupingIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)setLevelIds:(unsigned long long *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
