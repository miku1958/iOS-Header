//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOInstructionSet;

@interface GEOTransitClusterInfo : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _routeDetailsPrimaryArtworkIndexs;
    CDStruct_9f2792e4 _steppingArtworkIndexs;
    GEOInstructionSet *_instructions;
    unsigned int _routeDetailsSecondaryArtworkIndex;
    struct {
        unsigned int routeDetailsSecondaryArtworkIndex:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasInstructions;
@property (nonatomic) BOOL hasRouteDetailsSecondaryArtworkIndex;
@property (strong, nonatomic) GEOInstructionSet *instructions; // @synthesize instructions=_instructions;
@property (readonly, nonatomic) unsigned int *routeDetailsPrimaryArtworkIndexs;
@property (readonly, nonatomic) unsigned long long routeDetailsPrimaryArtworkIndexsCount;
@property (nonatomic) unsigned int routeDetailsSecondaryArtworkIndex; // @synthesize routeDetailsSecondaryArtworkIndex=_routeDetailsSecondaryArtworkIndex;
@property (readonly, nonatomic) unsigned int *steppingArtworkIndexs;
@property (readonly, nonatomic) unsigned long long steppingArtworkIndexsCount;

- (void)addRouteDetailsPrimaryArtworkIndex:(unsigned int)arg1;
- (void)addSteppingArtworkIndex:(unsigned int)arg1;
- (void)clearRouteDetailsPrimaryArtworkIndexs;
- (void)clearSteppingArtworkIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)routeDetailsPrimaryArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)setRouteDetailsPrimaryArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)setSteppingArtworkIndexs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)steppingArtworkIndexAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
