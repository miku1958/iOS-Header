//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNUICoreContactTypeAssessor, NSArray;

@interface CNUICoreFamilyMemberContactsModelBuilder : NSObject
{
    BOOL _includeWhitelistedContactsOnly;
    BOOL _sortItemsByName;
    BOOL _markItemsAsPersisted;
    BOOL _markItemsAsProposed;
    NSArray *_contacts;
    CNUICoreContactTypeAssessor *_contactTypeAssessor;
    long long _contactFormatterStyle;
}

@property (nonatomic) long long contactFormatterStyle; // @synthesize contactFormatterStyle=_contactFormatterStyle;
@property (strong, nonatomic) CNUICoreContactTypeAssessor *contactTypeAssessor; // @synthesize contactTypeAssessor=_contactTypeAssessor;
@property (strong, nonatomic) NSArray *contacts; // @synthesize contacts=_contacts;
@property (nonatomic) BOOL includeWhitelistedContactsOnly; // @synthesize includeWhitelistedContactsOnly=_includeWhitelistedContactsOnly;
@property (nonatomic) BOOL markItemsAsPersisted; // @synthesize markItemsAsPersisted=_markItemsAsPersisted;
@property (nonatomic) BOOL markItemsAsProposed; // @synthesize markItemsAsProposed=_markItemsAsProposed;
@property (nonatomic) BOOL sortItemsByName; // @synthesize sortItemsByName=_sortItemsByName;

+ (id)familyMemberContactItemFromContact:(id)arg1 contactFormatterStyle:(long long)arg2 contactTypeAssessor:(id)arg3 itemHasBeenPersisted:(BOOL)arg4 itemIsProposed:(BOOL)arg5;
+ (id)firstDisplayableEmailAddressForContact:(id)arg1;
+ (id)firstDisplayablePhoneNumberForContact:(id)arg1;
+ (id)formattedNameOfContact:(id)arg1 contactFormatterStyle:(long long)arg2;
+ (id)itemsBySortingItems:(id)arg1;
+ (id)placeholderNameForNamelessContact:(id)arg1;
+ (BOOL)shouldIncludeContact:(id)arg1 givenIncludeWhitelistedContactsOnlySetting:(BOOL)arg2;
+ (id)uniqueFamilyMemberContactItems:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)init;
- (id)sortedFamilyMemberContactItems:(id)arg1;

@end

