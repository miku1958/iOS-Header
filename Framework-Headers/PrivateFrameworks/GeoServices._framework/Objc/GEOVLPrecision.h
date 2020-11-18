//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@interface GEOVLPrecision : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _precisions;
}

@property (readonly, nonatomic) unsigned int *precisions;
@property (readonly, nonatomic) unsigned long long precisionsCount;

+ (BOOL)isValid:(id)arg1;
- (void)addPrecisions:(unsigned int)arg1;
- (void)clearPrecisions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (unsigned int)precisionsAtIndex:(unsigned long long)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setPrecisions:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
