//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsDataSource-Protocol.h>

@class CNFuture, FAFamilyMember, NSNumber, NSString;
@protocol CNCancelable, CNSchedulerProvider, CNUICoreFamilyMemberContactsModelFetching, CNUICoreFamilyMemberContactsObserver, CNUICoreFamilyMemberContactsUpdating;

@interface CNUICoreFamilyMemberContactsController : NSObject <CNUICoreFamilyMemberContactsDataSource>
{
    NSNumber *_countOfFamilyMemberContacts;
    id<CNUICoreFamilyMemberContactsObserver> _observer;
    FAFamilyMember *_familyMember;
    id<CNUICoreFamilyMemberContactsModelFetching> _modelFetcher;
    id<CNUICoreFamilyMemberContactsUpdating> _familyMemberContactsUpdator;
    id<CNSchedulerProvider> _schedulerProvider;
    CNFuture *_countOfFamilyMemberContactsFuture;
    CNFuture *_updateContactListByAddingContactsFuture;
    CNFuture *_updateContactListByRemovingContactsFuture;
    id<CNCancelable> _contactStoreDidChangeToken;
}

@property (strong, nonatomic) id<CNCancelable> contactStoreDidChangeToken; // @synthesize contactStoreDidChangeToken=_contactStoreDidChangeToken;
@property (strong, nonatomic) NSNumber *countOfFamilyMemberContacts; // @synthesize countOfFamilyMemberContacts=_countOfFamilyMemberContacts;
@property (strong, nonatomic) CNFuture *countOfFamilyMemberContactsFuture; // @synthesize countOfFamilyMemberContactsFuture=_countOfFamilyMemberContactsFuture;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsUpdating> familyMemberContactsUpdator; // @synthesize familyMemberContactsUpdator=_familyMemberContactsUpdator;
@property (readonly, nonatomic) long long fetchStatus;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNUICoreFamilyMemberContactsModelFetching> modelFetcher; // @synthesize modelFetcher=_modelFetcher;
@property (weak, nonatomic) id<CNUICoreFamilyMemberContactsObserver> observer; // @synthesize observer=_observer;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;
@property (readonly) Class superclass;
@property (strong, nonatomic) CNFuture *updateContactListByAddingContactsFuture; // @synthesize updateContactListByAddingContactsFuture=_updateContactListByAddingContactsFuture;
@property (strong, nonatomic) CNFuture *updateContactListByRemovingContactsFuture; // @synthesize updateContactListByRemovingContactsFuture=_updateContactListByRemovingContactsFuture;

+ (id)contactByRemovingSensitiveDataFromContact:(id)arg1;
+ (id)propertyKeysContainingSenstiveData;
- (void).cxx_destruct;
- (void)cancelCountOfFamilyMemberContactsFetch;
- (id)countOfFamilyMemberContactsFutureFromFetcher;
- (void)dealloc;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 modelFetcher:(id)arg2 familyMemberContactsUpdator:(id)arg3 schedulerProvider:(id)arg4;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (void)setupChangeNotificationResponse;
- (void)triggerCountOfFamilyMemberContactsFetch;
- (void)updateListByAddingContacts:(id)arg1;
- (void)updateListByRemovingContacts:(id)arg1;

@end
