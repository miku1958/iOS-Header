//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSData, NSMutableArray;

@interface GEOTrafficRerouteFeedbackCollection : PBCodable <NSCopying>
{
    NSData *_directionResponseID;
    unsigned int _oldRouteHistoricTravelTime;
    NSData *_oldRouteID;
    NSMutableArray *_oldRouteIncidents;
    unsigned int _oldRouteTravelTime;
    unsigned int _reroutedRouteHistoricTravelTime;
    NSData *_reroutedRouteID;
    unsigned int _reroutedRouteTravelTime;
    BOOL _oldRouteBlocked;
    struct {
        unsigned int oldRouteHistoricTravelTime:1;
        unsigned int oldRouteTravelTime:1;
        unsigned int reroutedRouteHistoricTravelTime:1;
        unsigned int reroutedRouteTravelTime:1;
        unsigned int oldRouteBlocked:1;
    } _has;
}

@property (strong, nonatomic) NSData *directionResponseID; // @synthesize directionResponseID=_directionResponseID;
@property (readonly, nonatomic) BOOL hasDirectionResponseID;
@property (nonatomic) BOOL hasOldRouteBlocked;
@property (nonatomic) BOOL hasOldRouteHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasOldRouteID;
@property (nonatomic) BOOL hasOldRouteTravelTime;
@property (nonatomic) BOOL hasReroutedRouteHistoricTravelTime;
@property (readonly, nonatomic) BOOL hasReroutedRouteID;
@property (nonatomic) BOOL hasReroutedRouteTravelTime;
@property (nonatomic) BOOL oldRouteBlocked; // @synthesize oldRouteBlocked=_oldRouteBlocked;
@property (nonatomic) unsigned int oldRouteHistoricTravelTime; // @synthesize oldRouteHistoricTravelTime=_oldRouteHistoricTravelTime;
@property (strong, nonatomic) NSData *oldRouteID; // @synthesize oldRouteID=_oldRouteID;
@property (strong, nonatomic) NSMutableArray *oldRouteIncidents; // @synthesize oldRouteIncidents=_oldRouteIncidents;
@property (nonatomic) unsigned int oldRouteTravelTime; // @synthesize oldRouteTravelTime=_oldRouteTravelTime;
@property (nonatomic) unsigned int reroutedRouteHistoricTravelTime; // @synthesize reroutedRouteHistoricTravelTime=_reroutedRouteHistoricTravelTime;
@property (strong, nonatomic) NSData *reroutedRouteID; // @synthesize reroutedRouteID=_reroutedRouteID;
@property (nonatomic) unsigned int reroutedRouteTravelTime; // @synthesize reroutedRouteTravelTime=_reroutedRouteTravelTime;

+ (Class)oldRouteIncidentsType;
- (void).cxx_destruct;
- (void)addOldRouteIncidents:(id)arg1;
- (void)clearOldRouteIncidents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oldRouteIncidentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)oldRouteIncidentsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

