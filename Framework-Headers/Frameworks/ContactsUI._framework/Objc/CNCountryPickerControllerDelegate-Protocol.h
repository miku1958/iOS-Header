//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/UINavigationControllerDelegate-Protocol.h>

@class CNCountryPickerController, NSString;

@protocol CNCountryPickerControllerDelegate <UINavigationControllerDelegate>
- (void)countryPicker:(CNCountryPickerController *)arg1 didPickCountryCode:(NSString *)arg2;
- (void)countryPickerDidCancel:(CNCountryPickerController *)arg1;
@end

