//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNiOSAddressBook, NSString;

__attribute__((visibility("hidden")))
@interface CNiOSAddressBookDataMapper : NSObject <CNDataMapper>
{
    CNiOSAddressBook *_addressBook;
}

@property (readonly, nonatomic) CNiOSAddressBook *addressBook; // @synthesize addressBook=_addressBook;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)initialize;
- (id)_containersMatchingPredicate:(id)arg1 remote:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_fechAllRecordsInSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_fetchAccountsInSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_fetchContactsInSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_fetchContainersInSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_fetchGroupsInSaveContext:(id)arg1 error:(id *)arg2;
- (void)_postProcessContactsFromSaveContext:(id)arg1;
- (void)_postProcessContainersFromSaveContext:(id)arg1;
- (void)_postProcessGroupsFromSaveContext:(id)arg1;
- (BOOL)_processAccountsFromSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_processContactChangeRequestsFromSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_processContactMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_processContactsFromSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_processContainersFromSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_processGroupsFromSaveContext:(id)arg1 error:(id *)arg2;
- (BOOL)_processSubgroupMembershipsFromSaveContext:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)batchEnumeratorForFetchRequest:(id)arg1;
- (BOOL)canExecuteSaveRequest:(id)arg1 error:(id *)arg2;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (BOOL)clearChangeHistoryForClient:(id)arg1 toSequenceNumber:(long long)arg2 error:(id *)arg3;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (id)contactsForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 error:(id *)arg3;
- (id)contactsWithIdentifiers:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)defaultContainerIdentifier;
- (id)defaultContainerIdentifierForAddressBook:(void *)arg1;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)groupsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (id)identifierWithError:(id *)arg1;
- (id)init;
- (id)initWithAddressBook:(id)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)meContactIdentifierWithError:(id *)arg1;
- (id)membersOfGroupWithIdentifier:(id)arg1 keysToFetch:(id)arg2 error:(id *)arg3;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)registerClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (BOOL)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (BOOL)setMeContact:(id)arg1 error:(id *)arg2;
- (BOOL)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (BOOL)unregisterClientForChangeHistory:(id)arg1 error:(id *)arg2;
- (id)usedLabelsForPropertyWithKey:(id)arg1 error:(id *)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;

@end
