//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKTableViewController.h>

#import <HealthToolbox/UIPickerViewDataSource-Protocol.h>
#import <HealthToolbox/UIPickerViewDelegate-Protocol.h>

@class HKHealthStore, HKHeartRhythmAvailability, HKHostingAreaLayoutView, NPSManager, NSArray, NSString, UIPickerView;

__attribute__((visibility("hidden")))
@interface WDElectrocardiogramInternalSettingsViewController : HKTableViewController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    BOOL _deletingSamples;
    NSArray *_allDemoResults;
    HKHostingAreaLayoutView *_pickerInputView;
    UIPickerView *_resultPicker;
    NPSManager *_syncManager;
    NSArray *_demoResultKeys;
    HKHealthStore *_healthStore;
    HKHeartRhythmAvailability *_heartRhythmAvailability;
}

@property (readonly, nonatomic) NSArray *allDemoResults; // @synthesize allDemoResults=_allDemoResults;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeletingSamples) BOOL deletingSamples; // @synthesize deletingSamples=_deletingSamples;
@property (strong, nonatomic) NSArray *demoResultKeys; // @synthesize demoResultKeys=_demoResultKeys;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HKHealthStore *healthStore; // @synthesize healthStore=_healthStore;
@property (readonly, nonatomic) HKHeartRhythmAvailability *heartRhythmAvailability; // @synthesize heartRhythmAvailability=_heartRhythmAvailability;
@property (readonly, nonatomic) HKHostingAreaLayoutView *pickerInputView; // @synthesize pickerInputView=_pickerInputView;
@property (readonly, nonatomic) UIPickerView *resultPicker; // @synthesize resultPicker=_resultPicker;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NPSManager *syncManager; // @synthesize syncManager=_syncManager;

- (void).cxx_destruct;
- (id)_buttonCellForTableView:(id)arg1;
- (void)clearCellIndexNumberLabels;
- (id)initWithHealthStore:(id)arg1;
- (void)keyboardDidDismiss:(id)arg1;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (void)updateCellIndexNumberLabels;
- (void)viewDidLoad;

@end
