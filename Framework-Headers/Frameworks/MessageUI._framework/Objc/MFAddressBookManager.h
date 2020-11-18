//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MFAddressBookManager : NSObject
{
    void *_addressBook;
    struct os_unfair_lock_s _lock;
    struct __CFDictionary *_clients;
}

+ (BOOL)isAuthorizedToUseAddressBook;
+ (id)sharedManager;
- (id)_clientWeakReferences;
- (void)_handleAddressBookChangeNotification;
- (void)_handleAddressBookPrefsChangeNotification;
- (void)addClient:(id)arg1;
- (void *)addressBook;
- (void)dealloc;
- (id)init;
- (void)removeClient:(id)arg1;

@end

