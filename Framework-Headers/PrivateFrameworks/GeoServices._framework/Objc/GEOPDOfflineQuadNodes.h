//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOPDOfflineQuadNodes : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_regions;
}

@property (strong, nonatomic) NSMutableArray *regions;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (BOOL)isValid:(id)arg1;
+ (Class)regionType;
- (void).cxx_destruct;
- (void)addRegion:(id)arg1;
- (void)clearRegions;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)regionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionsCount;
- (void)writeTo:(id)arg1;

@end
