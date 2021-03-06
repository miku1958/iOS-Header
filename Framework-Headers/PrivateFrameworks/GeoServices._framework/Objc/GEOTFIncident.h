//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString, PBDataReader;

__attribute__((visibility("hidden")))
@interface GEOTFIncident : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_5df41632 _geoids;
    NSString *_crossStreet;
    unsigned long long _durationMin;
    double _endOffset;
    NSString *_incidentId;
    NSMutableArray *_infos;
    double _latitude;
    double _longitude;
    NSData *_openlr;
    double _startOffset;
    long long _startTime;
    NSString *_street;
    long long _updateTime;
    NSData *_zilch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _alertCCode;
    int _color;
    float _delay;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoomLevel;
    unsigned int _minZoomLevel;
    int _significance;
    float _speed;
    int _trafficTrend;
    int _type;
    BOOL _blocked;
    BOOL _endTimeReliable;
    BOOL _hardBlocked;
    BOOL _hidden;
    BOOL _navigationAlert;
    struct {
        unsigned int has_durationMin:1;
        unsigned int has_endOffset:1;
        unsigned int has_latitude:1;
        unsigned int has_longitude:1;
        unsigned int has_startOffset:1;
        unsigned int has_startTime:1;
        unsigned int has_updateTime:1;
        unsigned int has_alertCCode:1;
        unsigned int has_color:1;
        unsigned int has_delay:1;
        unsigned int has_laneClosureCount:1;
        unsigned int has_laneClosureType:1;
        unsigned int has_maxZoomLevel:1;
        unsigned int has_minZoomLevel:1;
        unsigned int has_significance:1;
        unsigned int has_speed:1;
        unsigned int has_trafficTrend:1;
        unsigned int has_type:1;
        unsigned int has_blocked:1;
        unsigned int has_endTimeReliable:1;
        unsigned int has_hardBlocked:1;
        unsigned int has_hidden:1;
        unsigned int has_navigationAlert:1;
        unsigned int read_geoids:1;
        unsigned int read_crossStreet:1;
        unsigned int read_incidentId:1;
        unsigned int read_infos:1;
        unsigned int read_openlr:1;
        unsigned int read_street:1;
        unsigned int read_zilch:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int alertCCode;
@property (nonatomic) BOOL blocked;
@property (nonatomic) int color;
@property (strong, nonatomic) NSString *crossStreet;
@property (nonatomic) float delay;
@property (nonatomic) unsigned long long durationMin;
@property (nonatomic) double endOffset;
@property (nonatomic) BOOL endTimeReliable;
@property (readonly, nonatomic) long long *geoids;
@property (readonly, nonatomic) unsigned long long geoidsCount;
@property (nonatomic) BOOL hardBlocked;
@property (nonatomic) BOOL hasAlertCCode;
@property (nonatomic) BOOL hasBlocked;
@property (nonatomic) BOOL hasColor;
@property (readonly, nonatomic) BOOL hasCrossStreet;
@property (nonatomic) BOOL hasDelay;
@property (nonatomic) BOOL hasDurationMin;
@property (nonatomic) BOOL hasEndOffset;
@property (nonatomic) BOOL hasEndTimeReliable;
@property (nonatomic) BOOL hasHardBlocked;
@property (nonatomic) BOOL hasHidden;
@property (readonly, nonatomic) BOOL hasIncidentId;
@property (nonatomic) BOOL hasLaneClosureCount;
@property (nonatomic) BOOL hasLaneClosureType;
@property (nonatomic) BOOL hasLatitude;
@property (nonatomic) BOOL hasLongitude;
@property (nonatomic) BOOL hasMaxZoomLevel;
@property (nonatomic) BOOL hasMinZoomLevel;
@property (nonatomic) BOOL hasNavigationAlert;
@property (readonly, nonatomic) BOOL hasOpenlr;
@property (nonatomic) BOOL hasSignificance;
@property (nonatomic) BOOL hasSpeed;
@property (nonatomic) BOOL hasStartOffset;
@property (nonatomic) BOOL hasStartTime;
@property (readonly, nonatomic) BOOL hasStreet;
@property (nonatomic) BOOL hasTrafficTrend;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL hasUpdateTime;
@property (readonly, nonatomic) BOOL hasZilch;
@property (nonatomic) BOOL hidden;
@property (strong, nonatomic) NSString *incidentId;
@property (strong, nonatomic) NSMutableArray *infos;
@property (nonatomic) unsigned int laneClosureCount;
@property (nonatomic) int laneClosureType;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned int maxZoomLevel;
@property (nonatomic) unsigned int minZoomLevel;
@property (nonatomic) BOOL navigationAlert;
@property (strong, nonatomic) NSData *openlr;
@property (nonatomic) int significance;
@property (nonatomic) float speed;
@property (nonatomic) double startOffset;
@property (nonatomic) long long startTime;
@property (strong, nonatomic) NSString *street;
@property (nonatomic) int trafficTrend;
@property (nonatomic) int type;
@property (nonatomic) long long updateTime;
@property (strong, nonatomic) NSData *zilch;

+ (Class)infoType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsColor:(id)arg1;
- (int)StringAsLaneClosureType:(id)arg1;
- (int)StringAsSignificance:(id)arg1;
- (int)StringAsTrafficTrend:(id)arg1;
- (int)StringAsType:(id)arg1;
- (void)addGeoid:(long long)arg1;
- (void)addInfo:(id)arg1;
- (void)clearGeoids;
- (void)clearInfos;
- (id)colorAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)geoidAtIndex:(unsigned long long)arg1;
- (unsigned long long)hash;
- (id)infoAtIndex:(unsigned long long)arg1;
- (unsigned long long)infosCount;
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
- (void)setGeoids:(long long *)arg1 count:(unsigned long long)arg2;
- (id)significanceAsString:(int)arg1;
- (id)trafficTrendAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

