//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOPDRoadAccessInfo : PBCodable <NSCopying>
{
    NSMutableArray *_roadAccessPoints;
}

@property (strong, nonatomic) NSMutableArray *roadAccessPoints; // @synthesize roadAccessPoints=_roadAccessPoints;

+ (id)roadAccessInfoForPlaceData:(id)arg1;
+ (Class)roadAccessPointType;
- (void)addRoadAccessPoint:(id)arg1;
- (void)clearRoadAccessPoints;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)roadAccessPointAtIndex:(unsigned long long)arg1;
- (unsigned long long)roadAccessPointsCount;
- (void)writeTo:(id)arg1;

@end

