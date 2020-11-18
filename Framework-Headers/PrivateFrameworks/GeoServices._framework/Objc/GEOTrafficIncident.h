//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOLatLng, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTrafficIncident : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_9f2792e4 _alertCCodes;
    CDStruct_95bda58d _types;
    NSString *_area;
    NSString *_crossStreetName;
    unsigned long long _durationSeconds;
    NSMutableArray *_incidentDescriptions;
    NSString *_incidentId;
    NSMutableArray *_laneMessages;
    GEOLatLng *_location;
    NSString *_name;
    NSMutableArray *_paths;
    NSString *_primaryStreetName;
    unsigned long long _startTime;
    unsigned long long _updateTime;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _advisoryType;
    int _color;
    unsigned int _delaySeconds;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoom;
    unsigned int _minZoom;
    float _speedKph;
    int _vendor;
    BOOL _curated;
    BOOL _hidden;
    BOOL _ignored;
    BOOL _navigationAlert;
    struct {
        unsigned int has_durationSeconds:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_advisoryType:1;
        unsigned int has_color:1;
        unsigned int has_delaySeconds:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_maxZoom:1;
        unsigned int has_minZoom:1;
        unsigned int has_speedKph:1;
        unsigned int has_vendor:1;
        unsigned int has_curated:1;
        unsigned int has_hidden:1;
        unsigned int has_ignored:1;
        unsigned int has_navigationAlert:1;
        unsigned int read_alertCCodes:1;
        unsigned int read_types:1;
        unsigned int read_area:1;
        unsigned int read_crossStreetName:1;
        unsigned int read_incidentDescriptions:1;
        unsigned int read_incidentId:1;
        unsigned int read_laneMessages:1;
        unsigned int read_location:1;
        unsigned int read_name:1;
        unsigned int read_paths:1;
        unsigned int read_primaryStreetName:1;
        unsigned int wrote_alertCCodes:1;
        unsigned int wrote_types:1;
        unsigned int wrote_area:1;
        unsigned int wrote_crossStreetName:1;
        unsigned int wrote_durationSeconds:1;
        unsigned int wrote_incidentDescriptions:1;
        unsigned int wrote_incidentId:1;
        unsigned int wrote_laneMessages:1;
        unsigned int wrote_location:1;
        unsigned int wrote_name:1;
        unsigned int wrote_paths:1;
        unsigned int wrote_primaryStreetName:1;
        unsigned int wrote_startTime:1;
        unsigned int wrote_updateTime:1;
        unsigned int wrote_advisoryType:1;
        unsigned int wrote_color:1;
        unsigned int wrote_delaySeconds:1;
        unsigned int wrote_laneClosureCount:1;
        unsigned int wrote_laneClosureType:1;
        unsigned int wrote_maxZoom:1;
        unsigned int wrote_minZoom:1;
        unsigned int wrote_speedKph:1;
        unsigned int wrote_vendor:1;
        unsigned int wrote_curated:1;
        unsigned int wrote_hidden:1;
        unsigned int wrote_ignored:1;
        unsigned int wrote_navigationAlert:1;
    } _flags;
}

@property (nonatomic) int advisoryType;
@property (readonly, nonatomic) unsigned int *alertCCodes;
@property (readonly, nonatomic) unsigned long long alertCCodesCount;
@property (strong, nonatomic) NSString *area;
@property (nonatomic) int color;
@property (strong, nonatomic) NSString *crossStreetName;
@property (nonatomic) BOOL curated;
@property (nonatomic) unsigned int delaySeconds;
@property (nonatomic) unsigned long long durationSeconds;
@property (nonatomic) BOOL hasAdvisoryType;
@property (readonly, nonatomic) BOOL hasArea;
@property (nonatomic) BOOL hasColor;
@property (readonly, nonatomic) BOOL hasCrossStreetName;
@property (nonatomic) BOOL hasCurated;
@property (nonatomic) BOOL hasDelaySeconds;
@property (nonatomic) BOOL hasDurationSeconds;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL hasIgnored;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) BOOL hasLaneClosureType;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasMaxZoom;
@property (nonatomic) BOOL hasMinZoom;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasNavigationAlert;
@property (readonly, nonatomic) BOOL hasPrimaryStreetName;
@property (nonatomic) BOOL hasSpeedKph;
@property (nonatomic) BOOL hasStartTime;
@property (nonatomic) BOOL hasUpdateTime;
@property (nonatomic) BOOL hasVendor;
@property (nonatomic) BOOL hidden;
@property (nonatomic) BOOL ignored;
@property (strong, nonatomic) NSMutableArray *incidentDescriptions;
@property (strong, nonatomic) NSString *incidentId;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (strong, nonatomic) NSMutableArray *laneMessages;
@property (strong, nonatomic) GEOLatLng *location;
@property (nonatomic) unsigned int maxZoom;
@property (nonatomic) unsigned int minZoom;
@property (strong, nonatomic) NSString *name;
@property (nonatomic) BOOL navigationAlert;
@property (strong, nonatomic) NSMutableArray *paths;
@property (strong, nonatomic) NSString *primaryStreetName;
@property (nonatomic) float speedKph;
@property (nonatomic) unsigned long long startTime;
@property (readonly, nonatomic) int *types;
@property (readonly, nonatomic) unsigned long long typesCount;
@property (nonatomic) unsigned long long updateTime;
@property (nonatomic) int vendor;

+ (Class)incidentDescriptionType;
+ (BOOL)isValid:(id)arg1;
+ (Class)laneMessagesType;
+ (Class)pathType;
- (void).cxx_destruct;
- (int)StringAsAdvisoryType:(id)arg1;
- (int)StringAsColor:(id)arg1;
- (int)StringAsLaneClosureType:(id)arg1;
- (int)StringAsTypes:(id)arg1;
- (int)StringAsVendor:(id)arg1;
- (void)_addNoFlagsAlertCCode:(unsigned int)arg1;
- (void)_addNoFlagsIncidentDescription:(id)arg1;
- (void)_addNoFlagsLaneMessages:(id)arg1;
- (void)_addNoFlagsPath:(id)arg1;
- (void)_addNoFlagsType:(int)arg1;
- (void)_readAlertCCodes;
- (void)_readArea;
- (void)_readCrossStreetName;
- (void)_readIncidentDescriptions;
- (void)_readIncidentId;
- (void)_readLaneMessages;
- (void)_readLocation;
- (void)_readName;
- (void)_readPaths;
- (void)_readPrimaryStreetName;
- (void)_readTypes;
- (void)addAlertCCode:(unsigned int)arg1;
- (void)addIncidentDescription:(id)arg1;
- (void)addLaneMessages:(id)arg1;
- (void)addPath:(id)arg1;
- (void)addType:(int)arg1;
- (id)advisoryTypeAsString:(int)arg1;
- (unsigned int)alertCCodeAtIndex:(unsigned long long)arg1;
- (void)clearAlertCCodes;
- (void)clearIncidentDescriptions;
- (void)clearLaneMessages;
- (void)clearPaths;
- (void)clearTypes;
- (id)colorAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)incidentDescriptionAtIndex:(unsigned long long)arg1;
- (unsigned long long)incidentDescriptionsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)laneClosureTypeAsString:(int)arg1;
- (id)laneMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneMessagesCount;
- (void)mergeFrom:(id)arg1;
- (id)pathAtIndex:(unsigned long long)arg1;
- (unsigned long long)pathsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setAlertCCodes:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)typeAtIndex:(unsigned long long)arg1;
- (id)typesAsString:(int)arg1;
- (id)vendorAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
