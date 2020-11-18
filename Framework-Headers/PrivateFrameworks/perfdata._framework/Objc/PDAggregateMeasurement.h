//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, PDContainer, PDMeasurement;

__attribute__((visibility("hidden")))
@interface PDAggregateMeasurement : NSObject
{
    BOOL _validMin;
    BOOL _validMax;
    NSMutableDictionary *_labels;
    PDContainer *_container;
    NSString *_metric;
    NSString *_unitString;
    NSMutableDictionary *_variables;
    struct running_mean *_values_mean;
    struct pooled_mean *_stats_mean;
    double _min;
    double _max;
    unsigned long long _samples;
}

@property (strong, nonatomic) PDContainer *container; // @synthesize container=_container;
@property (strong, nonatomic) NSMutableDictionary *labels; // @synthesize labels=_labels;
@property (nonatomic) double max; // @synthesize max=_max;
@property (readonly, nonatomic) PDMeasurement *measurement;
@property (strong, nonatomic) NSString *metric; // @synthesize metric=_metric;
@property (nonatomic) double min; // @synthesize min=_min;
@property (nonatomic) unsigned long long samples; // @synthesize samples=_samples;
@property (nonatomic) struct pooled_mean *stats_mean; // @synthesize stats_mean=_stats_mean;
@property (strong, nonatomic) NSString *unitString; // @synthesize unitString=_unitString;
@property (nonatomic) BOOL validMax; // @synthesize validMax=_validMax;
@property (nonatomic) BOOL validMin; // @synthesize validMin=_validMin;
@property (nonatomic) struct running_mean *values_mean; // @synthesize values_mean=_values_mean;
@property (strong, nonatomic) NSMutableDictionary *variables; // @synthesize variables=_variables;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 metric:(id)arg2 unitString:(id)arg3;
- (void)updateWithMeasurement:(id)arg1;

@end
