//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface GEOTFIncident : PBCodable <NSCopying>
{
    CDStruct_5df41632 _geoids;
    unsigned long long _durationMin;
    double _endOffset;
    double _latitude;
    double _longitude;
    double _startOffset;
    long long _startTime;
    long long _updateTime;
    unsigned int _alertCCode;
    int _color;
    NSString *_crossStreet;
    float _delay;
    NSString *_incidentId;
    NSMutableArray *_infos;
    unsigned int _laneClosureCount;
    int _laneClosureType;
    unsigned int _maxZoomLevel;
    unsigned int _minZoomLevel;
    NSData *_openlr;
    int _significance;
    float _speed;
    NSString *_street;
    int _trafficTrend;
    int _type;
    NSData *_zilch;
    BOOL _blocked;
    BOOL _endTimeReliable;
    BOOL _hardBlocked;
    BOOL _hidden;
    BOOL _navigationAlert;
    struct {
        unsigned int durationMin:1;
        unsigned int endOffset:1;
        unsigned int latitude:1;
        unsigned int longitude:1;
        unsigned int startOffset:1;
        unsigned int startTime:1;
        unsigned int updateTime:1;
        unsigned int alertCCode:1;
        unsigned int color:1;
        unsigned int delay:1;
        unsigned int laneClosureCount:1;
        unsigned int laneClosureType:1;
        unsigned int maxZoomLevel:1;
        unsigned int minZoomLevel:1;
        unsigned int significance:1;
        unsigned int speed:1;
        unsigned int trafficTrend:1;
        unsigned int type:1;
        unsigned int blocked:1;
        unsigned int endTimeReliable:1;
        unsigned int hardBlocked:1;
        unsigned int hidden:1;
        unsigned int navigationAlert:1;
    } _has;
}

@property (nonatomic) unsigned int alertCCode; // @synthesize alertCCode=_alertCCode;
@property (nonatomic) BOOL blocked; // @synthesize blocked=_blocked;
@property (nonatomic) int color; // @synthesize color=_color;
@property (strong, nonatomic) NSString *crossStreet; // @synthesize crossStreet=_crossStreet;
@property (nonatomic) float delay; // @synthesize delay=_delay;
@property (nonatomic) unsigned long long durationMin; // @synthesize durationMin=_durationMin;
@property (nonatomic) double endOffset; // @synthesize endOffset=_endOffset;
@property (nonatomic) BOOL endTimeReliable; // @synthesize endTimeReliable=_endTimeReliable;
@property (readonly, nonatomic) long long *geoids;
@property (readonly, nonatomic) unsigned long long geoidsCount;
@property (nonatomic) BOOL hardBlocked; // @synthesize hardBlocked=_hardBlocked;
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
@property (nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (strong, nonatomic) NSString *incidentId; // @synthesize incidentId=_incidentId;
@property (strong, nonatomic) NSMutableArray *infos; // @synthesize infos=_infos;
@property (nonatomic) unsigned int laneClosureCount; // @synthesize laneClosureCount=_laneClosureCount;
@property (nonatomic) int laneClosureType; // @synthesize laneClosureType=_laneClosureType;
@property (nonatomic) double latitude; // @synthesize latitude=_latitude;
@property (nonatomic) double longitude; // @synthesize longitude=_longitude;
@property (nonatomic) unsigned int maxZoomLevel; // @synthesize maxZoomLevel=_maxZoomLevel;
@property (nonatomic) unsigned int minZoomLevel; // @synthesize minZoomLevel=_minZoomLevel;
@property (nonatomic) BOOL navigationAlert; // @synthesize navigationAlert=_navigationAlert;
@property (strong, nonatomic) NSData *openlr; // @synthesize openlr=_openlr;
@property (nonatomic) int significance; // @synthesize significance=_significance;
@property (nonatomic) float speed; // @synthesize speed=_speed;
@property (nonatomic) double startOffset; // @synthesize startOffset=_startOffset;
@property (nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) NSString *street; // @synthesize street=_street;
@property (nonatomic) int trafficTrend; // @synthesize trafficTrend=_trafficTrend;
@property (nonatomic) int type; // @synthesize type=_type;
@property (nonatomic) long long updateTime; // @synthesize updateTime=_updateTime;
@property (strong, nonatomic) NSData *zilch; // @synthesize zilch=_zilch;

+ (Class)infoType;
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
- (BOOL)isEqual:(id)arg1;
- (id)laneClosureTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setGeoids:(long long *)arg1 count:(unsigned long long)arg2;
- (id)significanceAsString:(int)arg1;
- (id)trafficTrendAsString:(int)arg1;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

