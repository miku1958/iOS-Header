//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KeychainSyncCountryInfo, NSArray, NSString, PSEditableTableCell, PSListController, PSPhoneNumberSpecifier, PSSpecifier;
@protocol KeychainSyncPhoneSettingsFragmentDelegate;

@interface KeychainSyncPhoneSettingsFragment : NSObject
{
    NSArray *_specifiers;
    PSPhoneNumberSpecifier *_phoneNumberSpecifier;
    PSSpecifier *_countrySpecifier;
    PSListController *_listController;
    NSString *_phoneNumber;
    KeychainSyncCountryInfo *_countryInfo;
    id<KeychainSyncPhoneSettingsFragmentDelegate> _delegate;
    NSString *_title;
}

@property (strong, nonatomic) KeychainSyncCountryInfo *countryInfo; // @synthesize countryInfo=_countryInfo;
@property (weak, nonatomic) id<KeychainSyncPhoneSettingsFragmentDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *phoneNumber; // @synthesize phoneNumber=_phoneNumber;
@property (readonly, nonatomic) PSEditableTableCell *phoneNumberCell;
@property (readonly, nonatomic) NSArray *specifiers;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dialingCountryInfoForSpecifier:(id)arg1;
- (id)initWithListController:(id)arg1;
- (id)phoneNumberForSpecifier:(id)arg1;
- (void)reloadSpecifiers;
- (void)resignFirstResponder;
- (void)setDialingCountryInfo:(id)arg1 forSpecifier:(id)arg2;
- (void)setPhoneNumber:(id)arg1 forSpecifier:(id)arg2;
- (void)textFieldChanged:(id)arg1;
- (id)unformattedPhoneNumber;

@end
