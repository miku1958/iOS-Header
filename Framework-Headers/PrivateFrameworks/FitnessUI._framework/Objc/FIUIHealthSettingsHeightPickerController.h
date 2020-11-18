//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@class NSLengthFormatter;

@interface FIUIHealthSettingsHeightPickerController : FIUIHealthSettingsPickerController
{
    NSLengthFormatter *_heightFormatter;
    CDUnknownBlockType _heightUpdateHandler;
}

@property (copy, nonatomic) CDUnknownBlockType heightUpdateHandler; // @synthesize heightUpdateHandler=_heightUpdateHandler;

- (void).cxx_destruct;
- (void)_heightPickerUpdated;
- (id)_pickerDisplayStringForHeightForRow:(long long)arg1 forComponent:(long long)arg2;
- (void)forceUpdate;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (void)setHeightQuantity:(id)arg1;

@end
