//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOUserPreferences : PBCodable <NSCopying>
{
    BOOL _avoidHighways;
    BOOL _avoidTolls;
    struct {
        unsigned int avoidHighways:1;
        unsigned int avoidTolls:1;
    } _has;
}

@property (nonatomic) BOOL avoidHighways; // @synthesize avoidHighways=_avoidHighways;
@property (nonatomic) BOOL avoidTolls; // @synthesize avoidTolls=_avoidTolls;
@property (nonatomic) BOOL hasAvoidHighways;
@property (nonatomic) BOOL hasAvoidTolls;

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

