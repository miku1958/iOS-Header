//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSCopying-Protocol.h>

@class NSMutableArray;

@interface _CPNetworkTimingData : PBCodable <NSCopying>
{
    NSMutableArray *_nestedTimingDatas;
    NSMutableArray *_topLevelTimingDatas;
}

@property (strong, nonatomic) NSMutableArray *nestedTimingDatas; // @synthesize nestedTimingDatas=_nestedTimingDatas;
@property (strong, nonatomic) NSMutableArray *topLevelTimingDatas; // @synthesize topLevelTimingDatas=_topLevelTimingDatas;

+ (Class)nestedTimingDataType;
+ (Class)topLevelTimingDataType;
- (void).cxx_destruct;
- (void)addNestedTimingData:(id)arg1;
- (void)addTopLevelTimingData:(id)arg1;
- (void)clearNestedTimingDatas;
- (void)clearTopLevelTimingDatas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nestedTimingDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)nestedTimingDatasCount;
- (BOOL)readFrom:(id)arg1;
- (id)topLevelTimingDataAtIndex:(unsigned long long)arg1;
- (unsigned long long)topLevelTimingDatasCount;
- (void)writeTo:(id)arg1;

@end

