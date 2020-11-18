//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HDDiscreteCollectionCalculator : NSObject
{
    CDStruct_23c51cd0 _currentStats;
    struct map<long long, _HDDiscreteStats, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, _HDDiscreteStats>>> _bySource;
    BOOL _detailBySource;
}

@property (nonatomic) BOOL detailBySource; // @synthesize detailBySource=_detailBySource;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCurrentValue:(double)arg1 sourceId:(long long)arg2;
- (void)advanceBucket;
- (long long)dataCount;
- (id)description;
- (void)getCurrentBucketStats:(CDStruct_23c51cd0 *)arg1;
- (BOOL)hasData;
- (id)init;
- (id)statsBySource;

@end

