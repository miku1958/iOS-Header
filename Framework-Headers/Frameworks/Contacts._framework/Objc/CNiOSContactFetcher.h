//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNContactsEnvironment;

__attribute__((visibility("hidden")))
@interface CNiOSContactFetcher : NSObject
{
    void *_addressBook;
    CNContactFetchRequest *_fetchRequest;
    CDUnknownBlockType _personToContact;
    CNContactsEnvironment *_environment;
}

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 error:(id *)arg5;
+ (CDUnknownBlockType)linkedPeopleComparator;
- (void).cxx_destruct;
- (id)_abMatchMetadataToCNContactMatchInfoArray:(id)arg1;
- (void)_batchLoadPropertiesForPeople:(id)arg1 keysToFetch:(id)arg2;
- (id)_peopleToContactsArray:(id)arg1 abMatchInfo:(id)arg2 keysToFetch:(id)arg3;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchContactsReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 environment:(id)arg3;
- (id)unifyPeople:(id)arg1 keysToFetch:(id)arg2 abMatchInfos:(id)arg3 outCNMatchInfos:(id *)arg4;

@end

