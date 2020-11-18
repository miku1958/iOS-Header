//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContactFetchRequest, CNContactsEnvironment, CNManagedConfiguration;

__attribute__((visibility("hidden")))
@interface CNiOSContactFetcher : NSObject
{
    void *_addressBook;
    CNContactFetchRequest *_fetchRequest;
    CDUnknownBlockType _personToContact;
    CNContactsEnvironment *_environment;
    CNManagedConfiguration *_managedConfiguration;
}

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id *)arg2 inAddressBook:(void *)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id *)arg6;
- (void).cxx_destruct;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)fetchContactsReturningMatchInfos:(id *)arg1 error:(id *)arg2;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void *)arg2 environment:(id)arg3 managedConfiguration:(id)arg4;

@end
