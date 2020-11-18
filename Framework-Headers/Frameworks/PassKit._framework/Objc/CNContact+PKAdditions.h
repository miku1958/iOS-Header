//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNContact.h>

@class CRRecentContact;

@interface CNContact (PKAdditions)

@property (nonatomic) unsigned long long contactSource;
@property (strong, nonatomic) CRRecentContact *recentContact;

+ (id)contactWithABRecordRef:(void *)arg1;
+ (id)contactWithPkDictionary:(id)arg1;
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;
+ (id)pkContactWithNameComponents:(id)arg1 postalAddresses:(id)arg2 emailAddresses:(id)arg3 phoneNumbers:(id)arg4;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkPassbookRequiredKeys;
+ (id)pk_predicateForContactsMatchingEmailAddress:(id)arg1;
+ (id)pk_predicateForContactsMatchingPhoneNumber:(id)arg1;
- (void *)ABPerson;
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2;
- (id)_fullNameFromComponents:(id)arg1 style:(long long)arg2 preferPhoneticName:(BOOL)arg3;
- (id)contactWithCleanedUpDistrict;
- (BOOL)isSubsetOfMeCard;
- (id)localizedDisplayNameWithLabel:(id)arg1;
- (id)nameComponents;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkDeconstructContactUsingKey:(id)arg1;
- (id)pkDeconstructContactUsingKey:(id)arg1 substring:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
- (id)pkFormattedContactAddress;
- (id)pkFormattedContactAddressIncludingPhoneticName:(BOOL)arg1;
- (id)pkFullAndPhoneticName;
- (id)pkFullName;
- (id)pkFullNameForDisplay;
- (id)pkFullyQualifiedName;
- (id)pkPhoneticName;
- (id)pkSingleLineFormattedContactAddress;
- (id)sanitizedContact;
@end

