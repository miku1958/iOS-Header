//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPickerView.h>

@class PKAddressTextField, PKPickerContactFieldConfiguration;

@interface PKAddressPickerField : UIPickerView
{
    PKAddressTextField *_addressTextField;
    PKPickerContactFieldConfiguration *_pickerFieldConfiguration;
}

@property (readonly, nonatomic) PKAddressTextField *addressTextField; // @synthesize addressTextField=_addressTextField;
@property (readonly, nonatomic) PKPickerContactFieldConfiguration *pickerFieldConfiguration; // @synthesize pickerFieldConfiguration=_pickerFieldConfiguration;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 addressTextField:(id)arg2;

@end

