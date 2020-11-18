//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPUserSearchInput, NSData, NSMutableArray;

@interface GEORPDirectionsProblem : PBCodable <NSCopying>
{
    CDStruct_ff5c68d7 *_problematicRouteIndexs;
    unsigned long long _problematicRouteIndexsCount;
    unsigned long long _problematicRouteIndexsSpace;
    NSMutableArray *_clientSuggestedRoutes;
    NSData *_directionsResponseId;
    GEORPUserSearchInput *_endWaypoint;
    NSData *_overviewScreenshotImageData;
    unsigned int _problematicLineIndex;
    unsigned int _problematicStepIndex;
    GEORPUserSearchInput *_startWaypoint;
    struct {
        unsigned int problematicLineIndex:1;
        unsigned int problematicStepIndex:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *clientSuggestedRoutes; // @synthesize clientSuggestedRoutes=_clientSuggestedRoutes;
@property (strong, nonatomic) NSData *directionsResponseId; // @synthesize directionsResponseId=_directionsResponseId;
@property (strong, nonatomic) GEORPUserSearchInput *endWaypoint; // @synthesize endWaypoint=_endWaypoint;
@property (readonly, nonatomic) BOOL hasDirectionsResponseId;
@property (readonly, nonatomic) BOOL hasEndWaypoint;
@property (readonly, nonatomic) BOOL hasOverviewScreenshotImageData;
@property (nonatomic) BOOL hasProblematicLineIndex;
@property (nonatomic) BOOL hasProblematicStepIndex;
@property (readonly, nonatomic) BOOL hasStartWaypoint;
@property (strong, nonatomic) NSData *overviewScreenshotImageData; // @synthesize overviewScreenshotImageData=_overviewScreenshotImageData;
@property (nonatomic) unsigned int problematicLineIndex; // @synthesize problematicLineIndex=_problematicLineIndex;
@property (readonly, nonatomic) CDStruct_ff5c68d7 *problematicRouteIndexs;
@property (readonly, nonatomic) unsigned long long problematicRouteIndexsCount;
@property (nonatomic) unsigned int problematicStepIndex; // @synthesize problematicStepIndex=_problematicStepIndex;
@property (strong, nonatomic) GEORPUserSearchInput *startWaypoint; // @synthesize startWaypoint=_startWaypoint;

- (void)addClientSuggestedRoute:(id)arg1;
- (void)addProblematicRouteIndex:(CDStruct_ff5c68d7)arg1;
- (void)clearClientSuggestedRoutes;
- (void)clearProblematicRouteIndexs;
- (id)clientSuggestedRouteAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientSuggestedRoutesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (CDStruct_ff5c68d7)problematicRouteIndexAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setProblematicRouteIndexs:(CDStruct_ff5c68d7 *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
