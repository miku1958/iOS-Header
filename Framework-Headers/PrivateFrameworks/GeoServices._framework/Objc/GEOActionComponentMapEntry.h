//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOActionComponentMapEntry : PBCodable <NSCopying>
{
    CDStruct_95bda58d _placeDataComponents;
    int _actionComponent;
    struct {
        unsigned int actionComponent:1;
    } _has;
}

@property (nonatomic) int actionComponent; // @synthesize actionComponent=_actionComponent;
@property (nonatomic) BOOL hasActionComponent;
@property (readonly, nonatomic) int *placeDataComponents;
@property (readonly, nonatomic) unsigned long long placeDataComponentsCount;

- (int)StringAsActionComponent:(id)arg1;
- (id)actionComponentAsString:(int)arg1;
- (void)addPlaceDataComponents:(int)arg1;
- (void)clearPlaceDataComponents;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)placeDataComponentsAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPlaceDataComponents:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

