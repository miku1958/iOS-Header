//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDStatisticsSourceOrderProvider-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class HKQuantityType, NSArray, NSDateInterval, NSString, _HKDateIntervalCollection;
@protocol HDStatisticsCollectionCalculatorDataSource, HDStatisticsCollectionCalculatorSourceOrderProvider;

@interface HDStatisticsCollectionCalculator : NSObject <HDStatisticsSourceOrderProvider, NSSecureCoding>
{
    struct unique_ptr<_HDStatisticsCollectionCalculatorImplementation, std::__1::default_delete<_HDStatisticsCollectionCalculatorImplementation>> _implementation;
    CDUnknownBlockType _statisticsHandler;
    long long _computationMethod;
    NSArray *_maskedIntervals;
    id<HDStatisticsCollectionCalculatorSourceOrderProvider> _sourceOrderProvider;
}

@property (readonly, nonatomic) long long computationMethod; // @synthesize computationMethod=_computationMethod;
@property (weak, nonatomic) id<HDStatisticsCollectionCalculatorDataSource> dataSource;
@property (copy, nonatomic) NSDateInterval *dateInterval;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) _HKDateIntervalCollection *intervalCollection;
@property (readonly, copy, nonatomic) NSArray *maskedIntervals; // @synthesize maskedIntervals=_maskedIntervals;
@property (nonatomic) double mergeGranularity;
@property (readonly, nonatomic) unsigned long long mergeStrategy;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, copy, nonatomic) HKQuantityType *quantityType;
@property (weak, nonatomic) id<HDStatisticsCollectionCalculatorSourceOrderProvider> sourceOrderProvider; // @synthesize sourceOrderProvider=_sourceOrderProvider;
@property (copy, nonatomic) CDUnknownBlockType statisticsHandler; // @synthesize statisticsHandler=_statisticsHandler;
@property (readonly) Class superclass;

+ (id)calculatorForArchivedRepresentation:(id)arg1 error:(id *)arg2;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4;
+ (id)calculatorForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;
+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)addSampleValue:(double)arg1 startTime:(double)arg2 endTime:(double)arg3 sourceID:(long long)arg4 error:(id *)arg5;
- (id)archivedRepresentationWithError:(id *)arg1;
- (id)bundleIdentifierForSourceID:(long long)arg1;
- (void)configureMergeAnchor:(id)arg1;
- (id)currentStatistics;
- (void)encodeWithCoder:(id)arg1;
- (id)initForQuantityType:(id)arg1 intervalCollection:(id)arg2 options:(unsigned long long)arg3 mergeStrategy:(unsigned long long)arg4 computationMethod:(long long)arg5;
- (id)initWithCoder:(id)arg1;
- (BOOL)invalidateInterval:(id)arg1 error:(id *)arg2;
- (void)orderSourceIDs:(vector_d87a6415 *)arg1;
- (BOOL)performAddSampleTransaction:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)queryForInitialStatisticsWithError:(id *)arg1;
- (void)reset;
- (BOOL)setMaskedIntervals:(id)arg1 error:(id *)arg2;
- (id)sourceForSourceID:(long long)arg1;

@end

