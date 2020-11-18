//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CNiOSAddressBook, CNiOSAddressBookDataMapper;

@interface CNContactStore : NSObject
{
}

@property (readonly, nonatomic) CNiOSAddressBook *addressBook;
@property (readonly, nonatomic) BOOL hasMultipleGroupsOrAccounts;
@property (readonly, nonatomic) CNiOSAddressBookDataMapper *iOSMapper;

+ (long long)authorizationStatusForEntityType:(long long)arg1;
+ (id)contactIdentifierFromInternalIdentifier:(id)arg1;
+ (BOOL)eraseAllDataAtLocationWithName:(id)arg1 error:(id *)arg2;
+ (BOOL)eraseAllDataAtURL:(id)arg1 error:(id *)arg2;
+ (void)initialize;
+ (id)internalIdentifierFromContactIdentifier:(id)arg1;
+ (id)standardLabelsForPropertyWithKey:(id)arg1;
+ (Class)storeClassWithIdentifier:(id)arg1;
+ (id)storeIdentifier;
+ (id)storeIdentifierFromContactIdentifier:(id)arg1;
+ (id)storeInfoClasses;
+ (id)storeWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
+ (id)storeWithOptions:(unsigned long long)arg1;
- (id)_contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)_executeFetchRequestsWithInfos:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (id)_fetchRequestInfosForEmailOrPhoneForContact:(id)arg1;
- (id)_ios_meContactIdentifierWithError:(id *)arg1;
- (id)_ios_meContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id *)arg3;
- (id)contactFromPerson:(void *)arg1;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2;
- (id)contactFromPerson:(void *)arg1 keysToFetch:(id)arg2 mutable:(BOOL)arg3;
- (id)contactFromPerson:(void *)arg1 mutable:(BOOL)arg2;
- (id)contactFromPersonID:(int)arg1;
- (id)contactFromPersonID:(int)arg1 keysToFetch:(id)arg2;
- (id)contactIdentifierFromPersonID:(int)arg1;
- (id)contactIdentifiersForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsMatchingPropertiesOfContact:(id)arg1 unifyResults:(BOOL)arg2 keysToFetch:(id)arg3 error:(id *)arg4;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (BOOL)enumerateContactsAndMatchInfoWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (BOOL)enumerateContactsWithFetchRequest:(id)arg1 error:(id *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)executeFetchRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (id)groupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)identifierWithError:(id *)arg1;
- (id)init;
- (id)initWithAddressBook:(void *)arg1;
- (id)initWithDataLocationName:(id)arg1;
- (id)initWithEnvironment:(id)arg1;
- (id)initWithEnvironment:(id)arg1 options:(unsigned long long)arg2;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)originForSuggestion:(id)arg1 error:(id *)arg2;
- (void *)personFromContact:(id)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)registerClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (id)requestAccessForEntityType:(long long)arg1;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (BOOL)setDefaultContainer:(id)arg1 forAccount:(id)arg2 error:(id *)arg3;
- (BOOL)setMeContact:(id)arg1 error:(id *)arg2;
- (BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)supportsSaveRequest:(id)arg1;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)unifiedContactWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedContactsMatchingPredicate:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedMeContactMatchingEmailAddress:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedMeContactMatchingEmailAddresses:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)unifiedMeContactWithKeysToFetch:(id)arg1 error:(id *)arg2;
- (BOOL)unregisterClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end

