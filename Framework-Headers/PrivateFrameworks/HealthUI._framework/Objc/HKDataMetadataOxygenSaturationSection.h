//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKDataMetadataSection.h>

#import <HealthUI/HKDataMetadataViewControllerDelegate-Protocol.h>

@class HKDataMetadataSimpleTableViewCell, HKDisplayTypeController, HKHealthStore, HKQuantitySample, HKSample, HKUnitPreferenceController, NSString;
@protocol HKDataMetadataSubsampleDelegate;

@interface HKDataMetadataOxygenSaturationSection : HKDataMetadataSection <HKDataMetadataViewControllerDelegate>
{
    HKSample *_sample;
    HKHealthStore *_healthStore;
    HKDisplayTypeController *_displayTypeController;
    HKUnitPreferenceController *_unitController;
    id<HKDataMetadataSubsampleDelegate> _subsampleDelegate;
    HKDataMetadataSimpleTableViewCell *_cell;
    HKQuantitySample *_heartRateSample;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthStore *healthStore;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cellForIndex:(unsigned long long)arg1 tableView:(id)arg2;
- (id)displayNameForSampleType:(id)arg1 displayTypeController:(id)arg2;
- (id)displayTypeController;
- (id)formattedHeartRateFromSample:(id)arg1;
- (id)heartRateFromSample:(id)arg1;
- (id)initWithSample:(id)arg1 healthStore:(id)arg2 displayTypeController:(id)arg3 unitController:(id)arg4 subsampleDelegate:(id)arg5;
- (unsigned long long)numberOfRowsInSection;
- (void)queryForData;
- (id)sectionTitle;
- (void)selectCellForIndex:(unsigned long long)arg1 navigationController:(id)arg2 animated:(BOOL)arg3;
- (id)unitController;

@end
