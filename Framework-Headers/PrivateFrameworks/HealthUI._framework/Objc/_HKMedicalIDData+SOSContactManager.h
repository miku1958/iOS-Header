//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/_HKMedicalIDData.h>

@interface _HKMedicalIDData (SOSContactManager)
+ (id)contactKeysToLoadForMedicalID;
- (BOOL)_autopopulateEmergencyContactsForSecondaryProfile;
- (id)_contactKeysToFetch;
- (BOOL)_updateExistingEmergencyContacts;
- (BOOL)_updateIdentifierByPhoneNumberForEmergencyContact:(id)arg1 contactStore:(id)arg2;
- (BOOL)consolidateSOSAndEmergencyContacts;
- (void)loadDataFromCNContact:(id)arg1;
- (BOOL)updateEmergencyContacts;
- (BOOL)updateEmergencyContactsAutopopulateForSecondaryProfileIfEmpty:(BOOL)arg1;
@end
