//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPlaceSearchResponse, NSMutableArray;

@interface GEOETAResponse : PBCodable <NSCopying>
{
    CDStruct_c55e649d *_problemDetails;
    unsigned long long _problemDetailsCount;
    unsigned long long _problemDetailsSpace;
    NSMutableArray *_etaResults;
    GEOPlaceSearchResponse *_originPlaceSearchResponse;
    int _status;
    CDStruct_47fe53f2 _has;
}

@property (strong, nonatomic) NSMutableArray *etaResults; // @synthesize etaResults=_etaResults;
@property (readonly, nonatomic) BOOL hasOriginPlaceSearchResponse;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) GEOPlaceSearchResponse *originPlaceSearchResponse; // @synthesize originPlaceSearchResponse=_originPlaceSearchResponse;
@property (readonly, nonatomic) CDStruct_c55e649d *problemDetails;
@property (readonly, nonatomic) unsigned long long problemDetailsCount;
@property (nonatomic) int status; // @synthesize status=_status;

- (void)addEtaResult:(id)arg1;
- (void)addProblemDetail:(CDStruct_c55e649d)arg1;
- (void)clearEtaResults;
- (void)clearProblemDetails;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)etaResultAtIndex:(unsigned long long)arg1;
- (unsigned long long)etaResultsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (CDStruct_c55e649d)problemDetailAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setProblemDetails:(CDStruct_c55e649d *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

