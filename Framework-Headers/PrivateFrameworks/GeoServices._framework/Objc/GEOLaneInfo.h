//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOLaneInfo : PBCodable <NSCopying>
{
    NSMutableArray *_arrows;
    BOOL _hov;
    BOOL _preferredForMultipleManeuvers;
    BOOL _supportsManeuver;
    struct {
        unsigned int hov:1;
        unsigned int preferredForMultipleManeuvers:1;
        unsigned int supportsManeuver:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *arrows; // @synthesize arrows=_arrows;
@property (nonatomic) BOOL hasHov;
@property (nonatomic) BOOL hasPreferredForMultipleManeuvers;
@property (nonatomic) BOOL hasSupportsManeuver;
@property (nonatomic) BOOL hov; // @synthesize hov=_hov;
@property (nonatomic) BOOL preferredForMultipleManeuvers; // @synthesize preferredForMultipleManeuvers=_preferredForMultipleManeuvers;
@property (nonatomic) BOOL supportsManeuver; // @synthesize supportsManeuver=_supportsManeuver;

+ (Class)arrowType;
- (void).cxx_destruct;
- (void)addArrow:(id)arg1;
- (id)arrowAtIndex:(unsigned long long)arg1;
- (unsigned long long)arrowsCount;
- (void)clearArrows;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

