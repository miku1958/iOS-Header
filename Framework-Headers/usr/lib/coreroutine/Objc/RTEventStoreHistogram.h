//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEventStore.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTEventStore-Protocol.h>

@class NSMutableArray, NSString, RTEntropyFilter, RTEventDateBasedDecayHistogram, RTPrimingFilter;

@interface RTEventStoreHistogram : RTEventStore <RTEventStore, NSSecureCoding>
{
    double _confidence;
    NSMutableArray *_events;
    RTEventDateBasedDecayHistogram *_processedEventModel;
    RTEntropyFilter *_entropyFilter;
    RTPrimingFilter *_primingFilter;
    double _globalLaunchThreshold;
}

@property (nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) RTEntropyFilter *entropyFilter; // @synthesize entropyFilter=_entropyFilter;
@property (strong, nonatomic) NSMutableArray *events; // @synthesize events=_events;
@property (nonatomic) double globalLaunchThreshold; // @synthesize globalLaunchThreshold=_globalLaunchThreshold;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) RTPrimingFilter *primingFilter; // @synthesize primingFilter=_primingFilter;
@property (strong, nonatomic) RTEventDateBasedDecayHistogram *processedEventModel; // @synthesize processedEventModel=_processedEventModel;
@property (readonly) Class superclass;

+ (double)calculateModelConfidenceWithCorrectPredictions:(double)arg1 incorrectPredictions:(double)arg2 iterations:(unsigned long long)arg3 minimumConfidence:(double)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addAppLaunchEvent:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (double)calculateModelConfidenceWithBundleId:(id)arg1;
- (void)clearAllEvents;
- (unsigned long long)countOfEvents;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchPredictionForEvent:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)fetchRecommendedAppsHistogramMetric:(CDUnknownBlockType)arg1;
- (double)getConfidence;
- (id)init;
- (id)initWithApplicableEventClasses:(id)arg1;
- (id)initWithApplicableEventClasses:(id)arg1 withDecayRate:(double)arg2 withDate:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)invalidate;
- (void)logRecommendedAppsHistogramMetric:(CDUnknownBlockType)arg1;
- (void)processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)removeEvent:(id)arg1;
- (void)removeEvents:(id)arg1;
- (void)setupThreshold;

@end
