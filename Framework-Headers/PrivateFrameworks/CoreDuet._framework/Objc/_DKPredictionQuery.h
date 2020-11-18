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
@property (nonatomic) int minimumDaysOfHistory; // @synthesize minimumDaysOfHistory=_minimumDaysOfHistory;
@property (nonatomic) unsigned long long partitionType; // @synthesize partitionType=_partitionType;
@property (copy) CDUnknownBlockType predictionHandler; // @synthesize predictionHandler=_predictionHandler;
@property (nonatomic) int slotDuration; // @synthesize slotDuration=_slotDuration;
@property (strong, nonatomic) _DKKnowledgeStorage *storage; // @synthesize storage=_storage;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (nonatomic) BOOL useHistoricalHistogram; // @synthesize useHistoricalHistogram=_useHistoricalHistogram;

+ (id)predictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (id)predictionQueryForStreams:(id)arg1 withPredicate:(id)arg2 withPredictionType:(unsigned long long)arg3;
+ (BOOL)supportsSecureCoding;
+ (id)topNPredictionQueryForStream:(id)arg1 withPredicate:(id)arg2 withTopN:(long long)arg3 withMinLikelihood:(double)arg4;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executeUsingCoreDataStorage:(id)arg1 error:(id *)arg2;
- (id)handleResults:(id)arg1 error:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
