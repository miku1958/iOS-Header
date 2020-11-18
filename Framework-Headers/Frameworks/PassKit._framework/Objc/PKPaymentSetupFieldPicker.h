//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField
{
    NSArray *_pickerItems;
}

@property (copy, nonatomic) PKPaymentSetupFieldPickerItem *currentValue; // @dynamic currentValue;
@property (copy, nonatomic) NSArray *pickerItems; // @synthesize pickerItems=_pickerItems;

- (void).cxx_destruct;
- (void)_commonUpdate;
- (id)_submissionStringForValue:(id)arg1;
- (id)displayString;
- (unsigned long long)fieldType;
- (BOOL)submissionStringMeetsAllRequirements;
- (void)updateWithConfiguration:(id)arg1;

@end

