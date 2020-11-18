//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuet/_DKEventQuery.h>

@class NSDate, _DKKnowledgeStorage;

@interface _DKPredictionQuery : _DKEventQuery
{
    BOOL _useHistoricalHistogram;
    BOOL _isTopNPrediction;
    int _slotDuration;
    int _minimumDaysOfHistory;
    int _totalSlotsInDay;
    unsigned long long _type;
    unsigned long long _partitionType;
    NSDate *_asOfDate;
    _DKKnowledgeStorage *_storage;
    CDUnknownBlockType _predictionHandler;
    long long _topN;
    double _minLikelihood;
}

@property (strong, nonatomic) NSDate *asOfDate; // @synthesize asOfDate=_asOfDate;
@property (nonatomic) BOOL isTopNPrediction; // @synthesize isTopNPrediction=_isTopNPrediction;
@property (nonatomic) double minLikelihood; // @synthesize minLikelihood=_minLikelihood;
@property (nonatomic) int minimumDaysOfHistory; // @synthesize minimumDaysOfHistory=_minimumDaysOfHistory;
@property (nonatomic) unsigned long long partitionType; // @synthesize partitionType=_partitionType;
@property (copy) CDUnknownBlockType predictionHandler; // @synthesize predictionHandler=_predictionHandler;
@property (nonatomic) int slotDuration; // @synthesize slotDuration=_slotDuration;
@property (strong, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property (nonatomic) long long topN; // @synthesize topN=_topN;
@property (nonatomic) int totalSlotsInDay; // @synthesize totalSlotsInDay=_totalSlotsInDay;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (nonatomic) BOOL useHistoricalHistogram; // @synthesize useHistoricalHistogram=_useHistoricalHistogram;

+ (BOOL)calendar:(id)arg1 isWeekendWithIntervalToWeekdayWeekendTransition:(double *)arg2 containingOrAfterDate:(id)arg3;
+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;
- (void).cxx_destruct;
- (void)addEventsToObservations:(id)arg1 startingHistogram:(id)arg2 endingHistogram:(id)arg3 withPredictionDate:(id)arg4;
- (BOOL)both:(id)arg1 and:(id)arg2 areSameDayOfWeekWith:(id)arg3;
- (BOOL)both:(id)arg1 and:(id)arg2 areWeekendOrWeekdayWithCalendar:(id)arg3;
- (int)computeSlotForDate:(id)arg1 relativeToDate:(id)arg2;
- (int)computeSlotFromMidnightForDate:(id)arg1;
- (id)constructTimelineWithObservations:(id)arg1 withFirstEventDate:(id)arg2 withHistogramInterval:(id)arg3 withPredictionStartDate:(id)arg4 durationSinceFirstEvent:(double)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (void)handleEventPredictionWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 predictionStartDate:(id)arg3 durationSinceFirstEvent:(double)arg4 calendar:(id)arg5 observations:(id)arg6 useWeights:(BOOL)arg7;
- (void)handleImpulsePredictionWithEventStartDate:(id)arg1 predictionStartDate:(id)arg2 durationSinceFirstEvent:(double)arg3 calendar:(id)arg4 observations:(id)arg5 lastDate:(id *)arg6 lastSlot:(int *)arg7;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)likelihoodForTopN:(long long)arg1 withMinLikelihood:(double)arg2 withData:(id)arg3;
- (id)predictionOfType:(unsigned long long)arg1 withData:(id)arg2;
- (void)setValueForIndex:(int)arg1 forObservations:(id)arg2 withDenominator:(double)arg3;
- (BOOL)shouldIncludeEventWithStartDate:(id)arg1 eventSlot:(int)arg2 withPredictionStartDate:(id)arg3 withPartitionType:(unsigned long long)arg4 andCalendar:(id)arg5;

@end
