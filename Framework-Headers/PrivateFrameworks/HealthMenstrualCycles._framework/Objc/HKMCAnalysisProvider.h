//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HKHealthStore, HKMCAnalysis, HKMCAnalysisQuery, HKObserverSet;
@protocol OS_dispatch_queue;

@interface HKMCAnalysisProvider : NSObject
{
    HKObserverSet *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    HKMCAnalysisQuery *_analysisQuery;
    HKMCAnalysis *_analysis;
    HKHealthStore *_healthStore;
    HKMCAnalysis *__test_analysis;
}

@property (strong, nonatomic) HKMCAnalysis *_test_analysis; // @synthesize _test_analysis=__test_analysis;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;

- (void).cxx_destruct;
- (void)_startAnalysisQuery;
- (void)_updateAnalysis:(id)arg1;
- (void)addObserver:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)initWithHealthStore:(id)arg1;
- (void)removeObserver:(id)arg1;

@end
