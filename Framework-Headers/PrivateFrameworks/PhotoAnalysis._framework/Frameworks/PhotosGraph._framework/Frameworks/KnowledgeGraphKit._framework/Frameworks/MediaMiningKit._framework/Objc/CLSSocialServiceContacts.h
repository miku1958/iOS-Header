//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/CLSSocialService.h>

@class CNContact, CNContactStore, NSMutableArray, NSMutableDictionary, NSMutableSet;
@protocol CLSSocialServiceContactsDelegate;

@interface CLSSocialServiceContacts : CLSSocialService
{
    CNContactStore *_contactStore;
    CNContact *_meContact;
    NSMutableArray *_allContacts;
    NSMutableArray *_allPersons;
    NSMutableDictionary *_personsForCNIdentifiers;
    NSMutableDictionary *_personsForPHIdentifiers;
    id<CLSSocialServiceContactsDelegate> _delegate;
    NSMutableDictionary *_personByFullName;
    NSMutableSet *_nonFoundFullNames;
    NSMutableDictionary *_personByHandle;
    NSMutableSet *_nonFoundHandles;
}

@property (weak, nonatomic) id<CLSSocialServiceContactsDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableSet *nonFoundFullNames; // @synthesize nonFoundFullNames=_nonFoundFullNames;
@property (strong, nonatomic) NSMutableSet *nonFoundHandles; // @synthesize nonFoundHandles=_nonFoundHandles;
@property (strong, nonatomic) NSMutableDictionary *personByFullName; // @synthesize personByFullName=_personByFullName;
@property (strong, nonatomic) NSMutableDictionary *personByHandle; // @synthesize personByHandle=_personByHandle;

+ (id)defaultKeysToFetch;
- (void).cxx_destruct;
- (id)__newPersonWithContact:(id)arg1;
- (void)_addAddressesToPerson:(id)arg1 withContact:(id)arg2;
- (id)_allPersonRecords;
- (id)_allPersons;
- (void)_enumerateContactsFetchingKeys:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_firstNameForPersonRecord:(id)arg1;
- (id)_fullNameForPersonRecord:(id)arg1;
- (id)_fullNameWithContact:(id)arg1;
- (id)_lastNameForPersonRecord:(id)arg1;
- (id)_maidenNameForPersonRecord:(id)arg1;
- (id)_mePersons;
- (id)_meRecords;
- (id)_nicknameForPersonRecord:(id)arg1;
- (id)_personResultsForFullName:(id)arg1;
- (id)_personResultsForPHPersonIdentifier:(id)arg1 isLackingFaces:(out BOOL *)arg2 inPhotoLibrary:(id)arg3;
- (id)_personWithContact:(id)arg1 createPersonIfNeeded:(BOOL)arg2;
- (id)_personWithContactIdentifier:(id)arg1;
- (id)_personsMatchingPredicate:(id)arg1;
- (unsigned long long)_relationshipForContact:(id)arg1;
- (void)enumeratePersonsAndBirthdayDateUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsAndHomeAddressUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePersonsForIdentifiers:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithProxyAtURL:(id)arg1 andIntent:(unsigned long long)arg2;
- (void)invalidateCacheForPersonWithIdentifiers:(id)arg1;
- (id)mePerson;
- (id)personForIdentifier:(id)arg1;
- (id)personForPersonHandle:(id)arg1;
- (id)personResultsForName:(id)arg1 inPhotoLibrary:(id)arg2;

@end

