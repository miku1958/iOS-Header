//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientMetrics, GEOETAResult, GEOETAServiceResponseSummary, GEOPDDatasetABStatus, GEOPlaceSearchResponse, NSMutableArray, NSString;

@interface GEOETAResponse : PBCodable <NSCopying>
{
    unsigned long long _debugServerLatencyMs;
    struct GEOProblemDetail *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugData;
    NSMutableArray *_etaResultReferencePointDestinations;
    GEOETAResult *_etaResultReferencePointOrigin;
    NSMutableArray *_etaResults;
    GEOETAServiceResponseSummary *_etaServiceSummary;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    int _status;
    CDStruct_00a28cb6 _has;
}

@property (strong, nonatomic) GEOClientMetrics *clientMetrics;
@property (strong, nonatomic) GEOPDDatasetABStatus *datasetAbStatus; // @synthesize datasetAbStatus=_datasetAbStatus;
@property (strong, nonatomic) NSString *debugData; // @synthesize debugData=_debugData;
@property (nonatomic) unsigned long long debugServerLatencyMs;
@property (strong, nonatomic) NSMutableArray *etaResultReferencePointDestinations; // @synthesize etaResultReferencePointDestinations=_etaResultReferencePointDestinations;
@property (strong, nonatomic) GEOETAResult *etaResultReferencePointOrigin; // @synthesize etaResultReferencePointOrigin=_etaResultReferencePointOrigin;
@property (strong, nonatomic) NSMutableArray *etaResults; // @synthesize etaResults=_etaResults;
@property (strong, nonatomic) GEOETAServiceResponseSummary *etaServiceSummary;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugData;
@property (nonatomic) BOOL hasDebugServerLatencyMs;
@property (readonly, nonatomic) BOOL hasEtaResultReferencePointOrigin;
@property (readonly, nonatomic) BOOL hasEtaServiceSummary;
@property (readonly, nonatomic) BOOL hasOriginPlaceSearchResponse;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse; // @synthesize originPlaceSearchResponse=_originPlaceSearchResponse;
@property (readonly, nonatomic) struct GEOProblemDetail *problemDetails;
@property (readonly, nonatomic) unsigned long long problemDetailsCount;
@property (nonatomic) int status; // @synthesize status=_status;

+ (Class)etaResultReferencePointDestinationType;
+ (Class)etaResultType;
- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addEtaResult:(id)arg1;
- (void)addEtaResultReferencePointDestination:(id)arg1;
- (void)addProblemDetail:(struct GEOProblemDetail)arg1;
- (void)clearEtaResultReferencePointDestinations;
- (void)clearEtaResults;
- (void)clearProblemDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (id)etaResultReferencePointDestinationAtIndex:(unsigned long long)arg1;
- (unsigned long long)etaResultReferencePointDestinationsCount;
- (unsigned long long)etaResultsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (struct GEOProblemDetail)problemDetailAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setProblemDetails:(struct GEOProblemDetail *)arg1 count:(unsigned long long)arg2;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

