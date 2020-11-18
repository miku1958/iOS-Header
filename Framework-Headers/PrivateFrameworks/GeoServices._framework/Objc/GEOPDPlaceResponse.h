//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOClientMetrics, GEOPDDatasetABStatus, GEOPDPlaceGlobalResult, NSMutableArray, NSString, PBUnknownFields;

@interface GEOPDPlaceResponse : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    unsigned long long _debugLatencyMs;
    GEOClientMetrics *_clientMetrics;
    GEOPDDatasetABStatus *_datasetAbStatus;
    NSString *_debugApiKey;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOPDPlaceGlobalResult *_globalResult;
    NSMutableArray *_placeResults;
    int _requestType;
    NSMutableArray *_spokenLanguages;
    int _status;
    struct {
        unsigned int debugLatencyMs:1;
        unsigned int requestType:1;
        unsigned int status:1;
    } _has;
}

@property (strong, nonatomic) GEOClientMetrics *clientMetrics;
@property (strong, nonatomic) GEOPDDatasetABStatus *datasetAbStatus; // @synthesize datasetAbStatus=_datasetAbStatus;
@property (strong, nonatomic) NSString *debugApiKey; // @synthesize debugApiKey=_debugApiKey;
@property (nonatomic) unsigned long long debugLatencyMs;
@property (strong, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property (strong, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property (strong, nonatomic) GEOPDPlaceGlobalResult *globalResult; // @synthesize globalResult=_globalResult;
@property (readonly, nonatomic) BOOL hasClientMetrics;
@property (readonly, nonatomic) BOOL hasDatasetAbStatus;
@property (readonly, nonatomic) BOOL hasDebugApiKey;
@property (nonatomic) BOOL hasDebugLatencyMs;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (readonly, nonatomic) BOOL hasGlobalResult;
@property (nonatomic) BOOL hasRequestType;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) NSMutableArray *placeResults; // @synthesize placeResults=_placeResults;
@property (nonatomic) int requestType; // @synthesize requestType=_requestType;
@property (strong, nonatomic) NSMutableArray *spokenLanguages; // @synthesize spokenLanguages=_spokenLanguages;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)displayLanguageType;
+ (Class)placeResultType;
+ (Class)spokenLanguageType;
- (void).cxx_destruct;
- (int)StringAsRequestType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)_disambiguationLabels;
- (void)addDisplayLanguage:(id)arg1;
- (void)addPlaceResult:(id)arg1;
- (void)addSpokenLanguage:(id)arg1;
- (void)clearDisplayLanguages;
- (void)clearPlaceResults;
- (void)clearSpokenLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (unsigned long long)hash;
- (id)initWithPlace:(id)arg1 forRequestType:(int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)placeResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeResultsCount;
- (BOOL)readFrom:(id)arg1;
- (id)requestTypeAsString:(int)arg1;
- (id)spokenLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)spokenLanguagesCount;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

