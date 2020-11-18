//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDCollectionCalculator.h>

@class HDLastIntervalInfo, NSArray, NSDictionary, NSMutableArray;

@interface HDCumulativeCollectionCalculator : HDCollectionCalculator
{
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double>>> _currentInterval;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double>>> _lastIntervalSources;
    HDLastIntervalInfo *_lastIntervalInfo;
    double _mergedSum;
    struct map<long long, double, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, double>>> _bySource;
    BOOL _lastBucket;
    unsigned long long _dataCount;
    NSArray *_orderedSourceIds;
    unsigned long long _mergeStrategy;
    NSMutableArray *_futureIntervals;
    NSMutableArray *_futureBuckets;
    NSMutableArray *_futureCounts;
    long long _currentAligned;
}

@property (nonatomic) long long currentAligned; // @synthesize currentAligned=_currentAligned;
@property (nonatomic) unsigned long long dataCount; // @synthesize dataCount=_dataCount;
@property (strong, nonatomic) NSMutableArray *futureBuckets; // @synthesize futureBuckets=_futureBuckets;
@property (strong, nonatomic) NSMutableArray *futureCounts; // @synthesize futureCounts=_futureCounts;
@property (strong, nonatomic) NSMutableArray *futureIntervals; // @synthesize futureIntervals=_futureIntervals;
@property (nonatomic) BOOL lastBucket; // @synthesize lastBucket=_lastBucket;
@property (readonly, nonatomic) HDLastIntervalInfo *lastIntervalInfo;
@property (nonatomic) unsigned long long mergeStrategy; // @synthesize mergeStrategy=_mergeStrategy;
@property (strong, nonatomic) NSArray *orderedSourceIds; // @synthesize orderedSourceIds=_orderedSourceIds;
@property (readonly, nonatomic) NSDictionary *sumsBySource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (double)_advanceUntilInterval:(long long)arg1;
- (unsigned long long)_bucketCount;
- (double)_endDateForBucket:(unsigned long long)arg1;
- (double)_putInFutureBucketsValue:(double)arg1 timeAfterEnd:(double)arg2 valuePerSecond:(double)arg3 sampleEndTime:(double)arg4 sourceId:(unsigned long long)arg5;
- (void)_splitValue:(double)arg1 perSecond:(double)arg2 sourceId:(long long)arg3 sampleInfo:(CDStruct_dd92d3d0)arg4 sampleEndTime:(double)arg5;
- (double)_startDateForBucket:(unsigned long long)arg1;
- (double)addCurrentBucket;
- (void)addValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4;
- (BOOL)advanceBucket;
- (id)description;
- (BOOL)hasData;
- (id)initWithBucketBoundaries:(id)arg1 orderedSourceIds:(id)arg2 mergeStrategy:(unsigned long long)arg3;
- (void)resumeWithValue:(double)arg1 sumsBySource:(id)arg2 lastIntervalInfo:(id)arg3 dataCount:(unsigned long long)arg4;
- (id)sourceIDsForCurrentBucket;

@end
