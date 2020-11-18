//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProactiveExperts/PEXServant.h>

@class HKHealthStore, NSDictionary, NSObject;
@protocol OS_dispatch_semaphore;

@interface PEXHealthServant : PEXServant
{
    HKHealthStore *_store;
    NSObject<OS_dispatch_semaphore> *_initializationComplete;
    NSDictionary *_preferredUnitMap;
}

- (void).cxx_destruct;
- (id)_accumulatedValueForCategorySamples:(id)arg1 subfield:(id)arg2 formatter:(id)arg3 matchValue:(long long)arg4;
- (id)_accumulatedValueForSamples:(id)arg1 subfield:(id)arg2 formatter:(id)arg3;
- (id)_accumulatedValueForWorkoutSamples:(id)arg1 subfield:(id)arg2 formatter:(id)arg3;
- (BOOL)_allowDecimalForType:(id)arg1;
- (id)_formattedLabelForType:(id)arg1 formatter:(id)arg2;
- (id)_formattedQuantity:(id)arg1 formatter:(id)arg2 allowDecimals:(BOOL)arg3 scaleUnits:(BOOL)arg4;
- (void)_getPreferredUnits;
- (void)_handleSampleResults:(id)arg1 subfield:(id)arg2 formatter:(id)arg3 output:(id)arg4 error:(id)arg5;
- (void)_handleSummationResults:(id)arg1 subfield:(id)arg2 formatter:(id)arg3 output:(id)arg4 error:(id)arg5;
- (id)_predicateForSampleType:(id)arg1;
- (id)_quantityInPreferredUnit:(id)arg1 type:(id)arg2;
- (id)_queryForSubfield:(id)arg1 formatter:(id)arg2 group:(id)arg3 output:(id)arg4;
- (void)_registerForNotifications;
- (id)_sampleQueryForSubfield:(id)arg1 formatter:(id)arg2 group:(id)arg3 output:(id)arg4;
- (id)_sampleTypeForSubfield:(id)arg1;
- (BOOL)_scaleUnitsForType:(id)arg1;
- (void)_setupHealthKit;
- (BOOL)_shouldAccumulateSamplesForSubfield:(id)arg1;
- (id)_summationQueryForSubfield:(id)arg1 formatter:(id)arg2 group:(id)arg3 output:(id)arg4;
- (id)_supportedQuantityTypes;
- (id)_supportedTypes;
- (id)_valueForSample:(id)arg1 subfield:(id)arg2 formatter:(id)arg3;
- (void)_warmUpFormatters;
- (id)init;
- (unsigned char)loadNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 detectedSince:(id)arg3;
- (unsigned char)loadRecentNamesWithNamedEntityHandler:(CDUnknownBlockType)arg1 contactNameItemHandler:(CDUnknownBlockType)arg2 source:(unsigned char)arg3 objects:(id)arg4;
- (id)nameItemsWithLimit:(unsigned long long)arg1;
- (id)quickTypeItemsForCriteria:(id)arg1 limit:(unsigned long long)arg2;
- (void)setStore:(id)arg1;
- (id)store;

@end
