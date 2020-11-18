//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class CLPMeta, NSMutableArray;

@interface CLPPoiCollectionRequest : PBRequest <NSCopying>
{
    NSMutableArray *_harvests;
    CLPMeta *_meta;
}

@property (strong, nonatomic) NSMutableArray *harvests; // @synthesize harvests=_harvests;
@property (strong, nonatomic) CLPMeta *meta; // @synthesize meta=_meta;

+ (Class)harvestsType;
- (void).cxx_destruct;
- (void)addHarvests:(id)arg1;
- (void)clearHarvests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)harvestsAtIndex:(unsigned long long)arg1;
- (unsigned long long)harvestsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)writeTo:(id)arg1;

@end
