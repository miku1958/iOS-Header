//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORouteTrafficDetail, GEOShortTrafficSummary, NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEOETAResultByType : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    double _expectedTimeOfDeparture;
    GEORouteTrafficDetail *_routeTrafficDetail;
    GEOShortTrafficSummary *_shortTrafficSummary;
    NSMutableArray *_summaryForPredictedDestinations;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _distance;
    unsigned int _historicTravelTime;
    int _licensePlateRestrictionImpact;
    unsigned int _staticTravelTime;
    int _status;
    int _transportType;
    unsigned int _travelTimeBestEstimate;
    unsigned int _travelTimeAggressiveEstimate;
    unsigned int _travelTimeConservativeEstimate;
    struct {
        unsigned int has_expectedTimeOfDeparture:1;
        unsigned int has_distance:1;
        unsigned int has_historicTravelTime:1;
        unsigned int has_licensePlateRestrictionImpact:1;
        unsigned int has_staticTravelTime:1;
        unsigned int has_status:1;
        unsigned int has_transportType:1;
        unsigned int has_travelTimeBestEstimate:1;
        unsigned int has_travelTimeAggressiveEstimate:1;
        unsigned int has_travelTimeConservativeEstimate:1;
        unsigned int read_unknownFields:1;
        unsigned int read_routeTrafficDetail:1;
        unsigned int read_shortTrafficSummary:1;
        unsigned int read_summaryForPredictedDestinations:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (nonatomic) unsigned int distance;
@property (nonatomic) double expectedTimeOfDeparture;
@property (nonatomic) BOOL hasDistance;
@property (nonatomic) BOOL hasExpectedTimeOfDeparture;
@property (nonatomic) BOOL hasHistoricTravelTime;
@property (nonatomic) BOOL hasLicensePlateRestrictionImpact;
@property (readonly, nonatomic) BOOL hasRouteTrafficDetail;
@property (readonly, nonatomic) BOOL hasShortTrafficSummary;
@property (nonatomic) BOOL hasStaticTravelTime;
@property (nonatomic) BOOL hasStatus;
@property (nonatomic) BOOL hasTransportType;
@property (nonatomic) BOOL hasTravelTimeAggressiveEstimate;
@property (nonatomic) BOOL hasTravelTimeBestEstimate;
@property (nonatomic) BOOL hasTravelTimeConservativeEstimate;
@property (nonatomic) unsigned int historicTravelTime;
@property (nonatomic) int licensePlateRestrictionImpact;
@property (strong, nonatomic) GEORouteTrafficDetail *routeTrafficDetail;
@property (strong, nonatomic) GEOShortTrafficSummary *shortTrafficSummary;
@property (nonatomic) unsigned int staticTravelTime;
@property (nonatomic) int status;
@property (strong, nonatomic) NSMutableArray *summaryForPredictedDestinations;
@property (nonatomic) int transportType;
@property (nonatomic) unsigned int travelTimeAggressiveEstimate;
@property (nonatomic) unsigned int travelTimeBestEstimate;
@property (nonatomic) unsigned int travelTimeConservativeEstimate;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)summaryForPredictedDestinationType;
- (void).cxx_destruct;
- (int)StringAsLicensePlateRestrictionImpact:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (int)StringAsTransportType:(id)arg1;
- (void)addSummaryForPredictedDestination:(id)arg1;
- (void)clearSummaryForPredictedDestinations;
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
- (id)licensePlateRestrictionImpactAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (id)summaryForPredictedDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)summaryForPredictedDestinationsCount;
- (id)transportTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

