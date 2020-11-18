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
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 district:(id)arg3 labeledValues:(id)arg4;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 district:(id)arg3 postalAddresses:(id)arg4 emailAddresses:(id)arg5 phoneNumbers:(id)arg6;
+ (id)pkContactWithFirstName:(id)arg1 lastName:(id)arg2 labeledValues:(id)arg3;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkPassbookRequiredKeys;
- (void *)ABPerson;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
- (id)pkFormattedContactAddress;
- (id)pkFullName;
- (id)pkSingleLineFormattedContactAddress;
@end

