//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOTransitOptions, GEOWalkingOptions;

@interface GEOPDETAFilter : PBCodable <NSCopying>
{
    CDStruct_95bda58d _transportTypes;
    GEOAutomobileOptions *_automobileOptions;
    GEOTransitOptions *_transitOptions;
    GEOWalkingOptions *_walkingOptions;
    BOOL _includeHistoricTravelTime;
    struct {
        unsigned int includeHistoricTravelTime:1;
    } _has;
}

@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions; // @synthesize automobileOptions=_automobileOptions;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (nonatomic) BOOL hasIncludeHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (nonatomic) BOOL includeHistoricTravelTime; // @synthesize includeHistoricTravelTime=_includeHistoricTravelTime;
@property (strong, nonatomic) GEOTransitOptions *transitOptions; // @synthesize transitOptions=_transitOptions;
@property (readonly, nonatomic) int *transportTypes;
@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (strong, nonatomic) GEOWalkingOptions *walkingOptions; // @synthesize walkingOptions=_walkingOptions;

- (int)StringAsTransportTypes:(id)arg1;
- (void)addTransportType:(int)arg1;
- (void)clearTransportTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (id)transportTypesAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

