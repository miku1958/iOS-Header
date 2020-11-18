//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOPlaceResult;

@interface GEOCluster : PBCodable <NSCopying>
{
    CDStruct_95bda58d _indexs;
    GEOPlaceResult *_container;
}

@property (strong, nonatomic) GEOPlaceResult *container; // @synthesize container=_container;
@property (readonly, nonatomic) BOOL hasContainer;
@property (readonly, nonatomic) int *indexs;
@property (readonly, nonatomic) unsigned long long indexsCount;

- (void)addIndex:(int)arg1;
- (void)clearIndexs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (int)indexAtIndex:(unsigned long long)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setIndexs:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
