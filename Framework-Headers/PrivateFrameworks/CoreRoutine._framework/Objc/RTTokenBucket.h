//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTTokenBucket : NSObject
{
    double _fillRate;
    double _capacity;
    double _operationCost;
    double _tokenBucket;
    double _lastArrivalTime;
    double _totalInterArrivalTime;
    double _wastedTokens;
    double _totalTokensGenerated;
    double _totalTokensConsumed;
    unsigned long long _totalOperations;
    unsigned long long _operationsAllowed;
    double _interArrivalTime;
    double _lastBucketFill;
}

@property (nonatomic) double interArrivalTime; // @synthesize interArrivalTime=_interArrivalTime;
@property (nonatomic) double lastBucketFill; // @synthesize lastBucketFill=_lastBucketFill;

- (BOOL)_consumeTokens:(unsigned long long)arg1;
- (void)_replenishTokens;
- (unsigned long long)countOfOperationsAllowed;
- (unsigned long long)countOfOperationsAllowedWithCost:(double)arg1;
- (id)dumpStatistics;
- (id)init;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2;
- (id)initWithFillRate:(double)arg1 capacity:(double)arg2 initialAllocation:(double)arg3;
- (BOOL)operationAllowed;
- (BOOL)operationAllowedWithCost:(double)arg1;
- (void)reset;
- (double)timeIntervalUntilOperationAllowed;
- (double)timeIntervalUntilOperationAllowedWithCost:(double)arg1;

@end

