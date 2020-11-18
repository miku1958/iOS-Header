//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/GEOCompanionManeuverStep-Protocol.h>
#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOCompanionFerryStep : PBCodable <GEOCompanionManeuverStep, NSCopying>
{
    struct GEOJunctionElement *_junctionElements;
    unsigned long long _junctionElementsCount;
    unsigned long long _junctionElementsSpace;
    int _junctionType;
    NSMutableArray *_maneuverNames;
    int _maneuverType;
    NSMutableArray *_signposts;
    CDStruct_efbf2325 _has;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasJunctionType;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) BOOL hasManeuverType;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property (readonly, nonatomic) struct GEOJunctionElement *junctionElements;
@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (readonly, nonatomic) unsigned long long junctionElementsCount;
@property (nonatomic) int junctionType;
@property (nonatomic) int junctionType; // @synthesize junctionType=_junctionType;
@property (strong, nonatomic) NSMutableArray *maneuverNames;
@property (strong, nonatomic) NSMutableArray *maneuverNames; // @synthesize maneuverNames=_maneuverNames;
@property (nonatomic) int maneuverType;
@property (nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property (strong, nonatomic) NSMutableArray *signposts;
@property (strong, nonatomic) NSMutableArray *signposts; // @synthesize signposts=_signposts;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int transportType;

+ (Class)maneuverNameType;
+ (Class)signpostType;
- (int)StringAsJunctionType:(id)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (void)addJunctionElement:(struct GEOJunctionElement)arg1;
- (void)addManeuverName:(id)arg1;
- (void)addSignpost:(id)arg1;
- (void)clearJunctionElements;
- (void)clearManeuverNames;
- (void)clearSignposts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)arg1;
- (struct GEOJunctionElement)junctionElementAtIndex:(unsigned long long)arg1;
- (id)junctionTypeAsString:(int)arg1;
- (id)maneuverNameAtIndex:(unsigned long long)arg1;
- (unsigned long long)maneuverNamesCount;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setJunctionElements:(struct GEOJunctionElement *)arg1 count:(unsigned long long)arg2;
- (id)signpostAtIndex:(unsigned long long)arg1;
- (unsigned long long)signpostsCount;
- (void)writeTo:(id)arg1;

@end

