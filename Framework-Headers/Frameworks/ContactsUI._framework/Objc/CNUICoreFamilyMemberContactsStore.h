//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUICore/CNUICoreFamilyMemberContactsUpdating-Protocol.h>

@class FAFamilyMember;
@protocol CNScheduler, CNSchedulerProvider, CNUICoreContactStoreFacade, CNUICoreContactsSyncTrigger;

@interface CNUICoreFamilyMemberContactsStore : NSObject <CNUICoreFamilyMemberContactsUpdating>
{
    id<CNUICoreContactStoreFacade> _familyMemberScopedContactStore;
    FAFamilyMember *_familyMember;
    id<CNUICoreContactsSyncTrigger> _contactsSyncTrigger;
    id<CNSchedulerProvider> _schedulerProvider;
}

@property (readonly, nonatomic) id<CNScheduler> backgroundOrImmediateScheduler;
@property (readonly, nonatomic) id<CNUICoreContactsSyncTrigger> contactsSyncTrigger; // @synthesize contactsSyncTrigger=_contactsSyncTrigger;
@property (readonly, nonatomic) FAFamilyMember *familyMember; // @synthesize familyMember=_familyMember;
@property (readonly, nonatomic) id<CNUICoreContactStoreFacade> familyMemberScopedContactStore; // @synthesize familyMemberScopedContactStore=_familyMemberScopedContactStore;
@property (readonly, nonatomic) id<CNSchedulerProvider> schedulerProvider; // @synthesize schedulerProvider=_schedulerProvider;

- (void).cxx_destruct;
- (id)contactsFoundAndNotFoundInFamilyMemberContainerFuture:(id)arg1;
- (id)contactsInsertedIntoFamilyMemberContainerIfMissingFuture:(id)arg1 preserveEditsToProvidedContactsOverContactsFoundInFamilyMemberStore:(BOOL)arg2;
- (id)init;
- (id)initWithFamilyMember:(id)arg1 schedulerProvider:(id)arg2;
- (id)initWithFamilyMemberScopedContactStoreFacade:(id)arg1 familyMember:(id)arg2 contactsSyncTrigger:(id)arg3 schedulerProvider:(id)arg4;
- (void)triggerContactsSyncRequest;
- (id)updateContactListByAddingContacts:(id)arg1;
- (id)updateContactListByRemovingContacts:(id)arg1;
- (id)updateContactListByUpdatingContacts:(id)arg1;
- (id)updateContactWhitelistByAddingContacts:(id)arg1;
- (id)updateContactWhitelistByRemovingContacts:(id)arg1;

@end

