//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

#import <FitnessUI/UIPickerViewDataSource-Protocol.h>
#import <FitnessUI/UIPickerViewDelegate-Protocol.h>

@class NSString;

@interface FIUIHealthSettingsWeightPickerController : FIUIHealthSettingsPickerController <UIPickerViewDelegate, UIPickerViewDataSource>
{
    long long numberOfComponents;
    long long numberOfRows;
    CDUnknownBlockType _weightUpdateHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic) CDUnknownBlockType weightUpdateHandler; // @synthesize weightUpdateHandler=_weightUpdateHandler;

- (void).cxx_destruct;
- (void)_setDefaultValuesOnWeightPickerIfRequiredWithWeight:(id)arg1;
- (void)_updateWithWeightQuantity:(id)arg1;
- (id)_weightDisplayStringForRow:(long long)arg1;
- (double)_weightInLocaleUnitForRow:(long long)arg1;
- (id)_weightQuantityForRow:(long long)arg1;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setWeightQuantity:(id)arg1;

@end

