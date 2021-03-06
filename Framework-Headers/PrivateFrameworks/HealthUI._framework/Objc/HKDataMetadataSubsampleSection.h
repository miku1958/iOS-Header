//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

@class HKDisplayTypeController, HKHealthStore, HKSample, HKUnitPreferenceController, NSArray, NSMutableDictionary;
@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataSubsampleSection : HKDataMetadataSection
{
    HKSample *_sample;
    NSArray *_subSampleTypes;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id<HKDataMetadataSubsampleDelegate> _subsampleDelegate;
    NSMutableDictionary *_aggregationValue;
}

@property (strong, nonatomic) NSMutableDictionary *aggregationValue; // @synthesize aggregationValue=_aggregationValue;
@property (readonly, nonatomic) HKDisplayTypeController *displayTypeController; // @synthesize displayTypeController=_displayTypeController;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (readonly, nonatomic) HKSample *sample; // @synthesize sample=_sample;
@property (readonly, nonatomic) NSArray *subSampleTypes; // @synthesize subSampleTypes=_subSampleTypes;
@property (readonly, weak, nonatomic) id<HKDataMetadataSubsampleDelegate> subsampleDelegate; // @synthesize subsampleDelegate=_subsampleDelegate;
@property (readonly, nonatomic) HKUnitPreferenceController *unitController; // @synthesize unitController=_unitController;

- (void).cxx_destruct;
- (id)_formattedValueWithUnits:(id)arg1 sampleType:(id)arg2;
- (id)_mergeTypesForFixedValues:(id)arg1 subSampleTypes:(id)arg2;
- (id)_subSampleAggregatePredicate:(id)arg1;
- (void)_submitAverageAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitCountStandHourQueryForSampleType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitSingleValueQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (void)_submitSubSampleAggregateQueriesWithCompletion:(CDUnknownBlockType)arg1;
- (void)_submitSumAggregateQueryForQuantityType:(id)arg1 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg2;
- (id)_trimAndSortSampleTypes:(id)arg1;
- (void)_updateAggregateValue:(id)arg1 sampleType:(id)arg2 aggregateQueryFinishedBlock:(CDUnknownBlockType)arg3;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (id)initWithSample:(id)arg1 subSampleTypes:(id)arg2 healthStore:(id)arg3 displayTypeController:(id)arg4 unitController:(id)arg5 subsampleDelegate:(id)arg6;
- (unsigned long long)numberOfRowsInSection;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;

@end

