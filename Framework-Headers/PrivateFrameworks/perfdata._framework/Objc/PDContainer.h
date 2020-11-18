//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface PDContainer : NSObject
{
    BOOL _largerBetter;
    NSString *_name;
    unsigned long long _version;
    NSDictionary *_configuration;
    NSMutableDictionary *_extensions;
    NSString *_testDescription;
    NSString *_notes;
    NSString *_primaryMetricFilter;
    NSString *_generator;
    NSDictionary *_variables;
    NSDictionary *_labels;
    NSMutableDictionary *_perfdata;
}

@property (strong, nonatomic) NSDictionary *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) NSMutableDictionary *extensions; // @synthesize extensions=_extensions;
@property (strong, nonatomic) NSString *generator; // @synthesize generator=_generator;
@property (strong, nonatomic) NSDictionary *labels; // @synthesize labels=_labels;
@property (nonatomic) BOOL largerBetter; // @synthesize largerBetter=_largerBetter;
@property (readonly, nonatomic) unsigned long long measurementCount;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property (strong, nonatomic) NSMutableDictionary *perfdata; // @synthesize perfdata=_perfdata;
@property (strong, nonatomic) NSString *primaryMetricFilter; // @synthesize primaryMetricFilter=_primaryMetricFilter;
@property (strong, nonatomic) NSString *testDescription; // @synthesize testDescription=_testDescription;
@property (strong, nonatomic) NSDictionary *variables; // @synthesize variables=_variables;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)containerWithFileURL:(id)arg1 error:(id *)arg2;
+ (id)containerWithJSONData:(id)arg1 error:(id *)arg2;
+ (id)containerWithJSONDictionary:(id)arg1 error:(id *)arg2;
+ (id)containerWithPath:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
- (id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2;
- (id)description;
- (BOOL)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id *)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (BOOL)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateMeasurementsWithError:(id *)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithFileURL:(id)arg1 error:(id *)arg2;
- (id)initWithJSONData:(id)arg1 error:(id *)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithPath:(id)arg1 error:(id *)arg2;
- (BOOL)isComparableTo:(id)arg1;
- (BOOL)isLike:(id)arg1;

@end
