//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMFUnfairLock, HMICameraVideoAnalyzer, HMICameraVideoAnalyzerResult, NSArray, NSString;

@interface HMICameraVideoAnalyzerHistory : HMFObject <HMFLogging>
{
    long long _minRepetitions;
    long long _maxPredictions;
    long long _predictions;
    long long _repetitions;
    long long _totalPredictions;
    long long _totalRepetitions;
    long long _totalRequests;
    HMICameraVideoAnalyzerResult *_lastRequestResult;
    NSArray *_lastRequestSignificantEvents;
    HMICameraVideoAnalyzer *_analyzer;
    HMFUnfairLock *_lock;
}

@property (readonly, weak) HMICameraVideoAnalyzer *analyzer; // @synthesize analyzer=_analyzer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) HMICameraVideoAnalyzerResult *lastRequestResult; // @synthesize lastRequestResult=_lastRequestResult;
@property (strong) NSArray *lastRequestSignificantEvents; // @synthesize lastRequestSignificantEvents=_lastRequestSignificantEvents;
@property (readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property (readonly) long long maxPredictions; // @synthesize maxPredictions=_maxPredictions;
@property (readonly) long long minRepetitions; // @synthesize minRepetitions=_minRepetitions;
@property long long predictions; // @synthesize predictions=_predictions;
@property long long repetitions; // @synthesize repetitions=_repetitions;
@property (readonly) Class superclass;
@property long long totalPredictions; // @synthesize totalPredictions=_totalPredictions;
@property long long totalRepetitions; // @synthesize totalRepetitions=_totalRepetitions;
@property long long totalRequests; // @synthesize totalRequests=_totalRequests;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)addRequest:(id)arg1 result:(id)arg2 significantEvents:(id)arg3;
- (id)initWithMinRepetitions:(long long)arg1 maxPredictions:(long long)arg2 analyzer:(id)arg3;
- (id)predictedResultForRequest:(id)arg1;
- (id)predictedSignificantEventsForRequest:(id)arg1;
- (void)reset;
- (BOOL)shouldPredictRequest:(id)arg1;

@end
