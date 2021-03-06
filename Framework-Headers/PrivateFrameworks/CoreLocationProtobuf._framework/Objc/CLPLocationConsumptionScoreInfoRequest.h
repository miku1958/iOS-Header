//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSMutableArray;

@interface CLPLocationConsumptionScoreInfoRequest : PBRequest <NSCopying>
{
    NSMutableArray *_locationConsumptionScoreInfos;
}

@property (strong, nonatomic) NSMutableArray *locationConsumptionScoreInfos; // @synthesize locationConsumptionScoreInfos=_locationConsumptionScoreInfos;

+ (Class)locationConsumptionScoreInfoType;
- (void).cxx_destruct;
- (void)addLocationConsumptionScoreInfo:(id)arg1;
- (void)clearLocationConsumptionScoreInfos;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)locationConsumptionScoreInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationConsumptionScoreInfosCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

