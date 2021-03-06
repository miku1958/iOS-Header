//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, GEORestrictionInfo, NSString, PBDataReader, PBUnknownFields;

@interface GEORouteIncident : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_crossStreet;
    long long _endTime;
    NSString *_incidentId;
    NSString *_info;
    GEOLatLng *_position;
    GEORestrictionInfo *_restrictionInfo;
    long long _startTime;
    NSString *_street;
    long long _updateTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    int _significance;
    int _type;
    unsigned int _userReportsCount;
    BOOL _endTimeReliable;
    BOOL _shouldDisplayOnMap;
    struct {
        unsigned int has_endTime:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_significance:1;
        unsigned int has_type:1;
        unsigned int has_userReportsCount:1;
        unsigned int has_endTimeReliable:1;
        unsigned int has_shouldDisplayOnMap:1;
        unsigned int read_unknownFields:1;
        unsigned int read_crossStreet:1;
        unsigned int read_incidentId:1;
        unsigned int read_info:1;
        unsigned int read_position:1;
        unsigned int read_restrictionInfo:1;
        unsigned int read_street:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *crossStreet;
@property (nonatomic) long long endTime;
@property (nonatomic) BOOL endTimeReliable;
@property (readonly, nonatomic) BOOL hasCrossStreet;
@property (nonatomic) BOOL hasEndTime;
@property (nonatomic) BOOL hasEndTimeReliable;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (readonly, nonatomic) BOOL hasInfo;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) BOOL hasLaneClosureType;
@property (readonly, nonatomic) BOOL hasPosition;
@property (readonly, nonatomic) BOOL hasRestrictionInfo;
@property (nonatomic) BOOL hasShouldDisplayOnMap;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasStreet;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic) BOOL hasUserReportsCount;
@property (strong, nonatomic) NSString *incidentId;
@property (strong, nonatomic) NSString *info;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (strong, nonatomic) GEOLatLng *position;
@property (strong, nonatomic) GEORestrictionInfo *restrictionInfo;
@property (nonatomic) BOOL shouldDisplayOnMap;
@property (nonatomic) int significance;
@property (nonatomic) long long startTime;
@property (strong, nonatomic) NSString *street;
@property (nonatomic) int type;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) long long updateTime;
@property (nonatomic) unsigned int userReportsCount;

+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsLaneClosureType:(id)arg1;
- (int)StringAsSignificance:(id)arg1;
- (int)StringAsType:(id)arg1;
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
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)laneClosureTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)significanceAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

