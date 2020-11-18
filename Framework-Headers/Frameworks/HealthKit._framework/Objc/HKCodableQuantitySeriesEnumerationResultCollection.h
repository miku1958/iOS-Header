//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthKit/NSCopying-Protocol.h>

@class NSMutableArray;

@interface HKCodableQuantitySeriesEnumerationResultCollection : PBCodable <NSCopying>
{
    double _latestSampleStartTime;
    NSMutableArray *_results;
    struct {
        unsigned int latestSampleStartTime:1;
    } _has;
}

@property (nonatomic) BOOL hasLatestSampleStartTime;
@property (nonatomic) double latestSampleStartTime; // @synthesize latestSampleStartTime=_latestSampleStartTime;
@property (strong, nonatomic) NSMutableArray *results; // @synthesize results=_results;

+ (Class)resultsType;
- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)writeTo:(id)arg1;

@end
