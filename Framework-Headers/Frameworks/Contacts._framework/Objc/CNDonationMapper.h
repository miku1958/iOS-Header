//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class CNContactsEnvironment, CNDonationStore, NSString;

__attribute__((visibility("hidden")))
@interface CNDonationMapper : NSObject <CNDataMapper>
{
    CNContactsEnvironment *_environment;
    CNDonationStore *_donationStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CNDonationStore *donationStore; // @synthesize donationStore=_donationStore;
@property (readonly, nonatomic) CNContactsEnvironment *environment; // @synthesize environment=_environment;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)mapperIdentifier;
- (void).cxx_destruct;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (BOOL)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (BOOL)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)initWithContactsEnvironment:(id)arg1;
- (id)initWithDonationStore:(id)arg1 environment:(id)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;

@end

