//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSNumber, NSString, PDContainer;

@interface PDMeasurement : NSObject
{
    BOOL _largerBetter;
    BOOL _summary;
    BOOL _context;
    NSString *_metric;
    NSString *_unitString;
    NSDictionary *_variables;
    NSDictionary *_labels;
    unsigned long long _group;
    NSNumber *_value;
    NSNumber *_sampleCount;
    NSNumber *_mean;
    NSNumber *_standardDeviation;
    NSNumber *_minimum;
    NSNumber *_maximum;
    NSDictionary *_measurement;
    PDContainer *_container;
    NSString *_cachedMetricFilter;
}

@property (strong, nonatomic) NSString *cachedMetricFilter; // @synthesize cachedMetricFilter=_cachedMetricFilter;
@property (weak, nonatomic) PDContainer *container; // @synthesize container=_container;
@property (nonatomic, getter=isContext) BOOL context; // @synthesize context=_context;
@property (nonatomic) unsigned long long group; // @synthesize group=_group;
@property (readonly, nonatomic) unsigned long long histogramBucketCount;
@property (strong, nonatomic) NSDictionary *labels; // @synthesize labels=_labels;
@property (nonatomic) BOOL largerBetter; // @synthesize largerBetter=_largerBetter;
@property (strong, nonatomic) NSNumber *maximum; // @synthesize maximum=_maximum;
@property (strong, nonatomic) NSNumber *mean; // @synthesize mean=_mean;
@property (strong, nonatomic) NSDictionary *measurement; // @synthesize measurement=_measurement;
@property (strong, nonatomic) NSString *metric; // @synthesize metric=_metric;
@property (strong, nonatomic) NSNumber *minimum; // @synthesize minimum=_minimum;
@property (readonly, nonatomic) unsigned long long percentileCount;
@property (strong, nonatomic) NSNumber *sampleCount; // @synthesize sampleCount=_sampleCount;
@property (strong, nonatomic) NSNumber *standardDeviation; // @synthesize standardDeviation=_standardDeviation;
@property (nonatomic, getter=isSummary) BOOL summary; // @synthesize summary=_summary;
@property (strong, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property (strong, nonatomic) NSNumber *value; // @synthesize value=_value;
@property (strong, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;

- (void).cxx_destruct;
- (id)description;
- (BOOL)enumerateHistogramBucketsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (BOOL)enumeratePercentilesWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithContainer:(id)arg1 dictionary:(id)arg2 group:(unsigned long long)arg3 error:(id *)arg4;
- (BOOL)isComparableTo:(id)arg1;
- (BOOL)isComparableTo:(id)arg1 ignoringNullableVariables:(id)arg2;
- (BOOL)isComparableTo:(id)arg1 ignoringVariables:(id)arg2;
- (BOOL)isLike:(id)arg1;
- (BOOL)matchesMetricFilter:(id)arg1;
- (BOOL)matchesVariables:(id)arg1 ignoringMissing:(BOOL)arg2;
- (id)metricFilter;
- (id)metricFilterIgnoringNullableVariables:(id)arg1;
- (id)metricFilterIgnoringVariables:(id)arg1;

@end
