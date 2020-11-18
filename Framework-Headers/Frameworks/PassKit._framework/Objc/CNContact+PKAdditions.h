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
+ (id)pkContactWithNameComponents:(id)arg1 district:(id)arg2 labeledValues:(id)arg3;
+ (id)pkContactWithNameComponents:(id)arg1 district:(id)arg2 postalAddresses:(id)arg3 emailAddresses:(id)arg4 phoneNumbers:(id)arg5;
+ (id)pkContactWithNameComponents:(id)arg1 labeledValues:(id)arg2;
+ (id)pkContactWithNameFromContact:(id)arg1 labeledValue:(id)arg2 property:(id)arg3;
+ (id)pkPassbookRequiredKeys;
- (void *)ABPerson;
- (id)nameComponents;
- (void)pkAddLabeledValues:(id)arg1 withProperty:(id)arg2;
- (id)pkDictionaryForProperty:(id)arg1;
- (id)pkFormattedContactAddress;
- (id)pkFullName;
- (id)pkSingleLineFormattedContactAddress;
- (id)sanitizedContact;
@end

