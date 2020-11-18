//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface CNiOSAddressBook : NSObject
{
    BOOL _addressBookIsShared;
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSMutableSet *_addressBookPool;
    CDUnknownBlockType _addressBookProvider;
    NSObject<OS_dispatch_source> *_memoryMonitoringSource;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (readonly, nonatomic) BOOL addressBookIsShared; // @synthesize addressBookIsShared=_addressBookIsShared;
@property (readonly, nonatomic) NSMutableSet *addressBookPool; // @synthesize addressBookPool=_addressBookPool;
@property (readonly, copy, nonatomic) CDUnknownBlockType addressBookProvider; // @synthesize addressBookProvider=_addressBookProvider;
@property (readonly, nonatomic) NSObject<OS_dispatch_source> *memoryMonitoringSource; // @synthesize memoryMonitoringSource=_memoryMonitoringSource;

+ (void)initialize;
+ (void *)newAddressBookWithURL:(id)arg1;
+ (void *)newInMemoryAddressBook;
- (void).cxx_destruct;
- (void)flushPool;
- (id)init;
- (id)initWithAddressBookProvider:(CDUnknownBlockType)arg1;
- (id)initWithContactsEnvironment:(id)arg1;
- (void)performAsynchronousWorkWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (void)performSynchronousWorkWithInvalidatedAddressBook:(CDUnknownBlockType)arg1;
- (void *)popAddressBook;
- (void *)preparedAddressBook:(void *)arg1;
- (void)pushAddressBook:(void *)arg1;

@end

