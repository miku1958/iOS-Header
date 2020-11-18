//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEONameInfo, NSMutableArray;

@interface GEOSubstep : PBCodable <NSCopying>
{
    int _maneuverType;
    GEONameInfo *_name;
    NSMutableArray *_signposts;
    int _zilchIndex;
    struct {
        unsigned int maneuverType:1;
        unsigned int zilchIndex:1;
    } _has;
}

@property (nonatomic) BOOL hasManeuverType;
@property (readonly, nonatomic) BOOL hasName;
@property (nonatomic) BOOL hasZilchIndex;
@property (nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property (strong, nonatomic) GEONameInfo *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property (nonatomic) int zilchIndex; // @synthesize zilchIndex=_zilchIndex;

+ (Class)signpostType;
- (int)StringAsManeuverType:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearSignposts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)writeTo:(id)arg1;

@end
