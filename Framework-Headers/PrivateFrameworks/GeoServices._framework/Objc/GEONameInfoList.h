//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEONameInfoList : PBCodable <NSCopying>
{
    NSMutableArray *_nameInfos;
}

@property (strong, nonatomic) NSMutableArray *nameInfos; // @synthesize nameInfos=_nameInfos;

- (void)addNameInfo:(id)arg1;
- (void)clearNameInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nameInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)nameInfosCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

