//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, _CDSharedMemoryKeyValueStore;
@protocol OS_dispatch_queue;

@interface _CDSharedMemoryContextPersisting : NSObject <_CDContextPersisting>
{
    _CDSharedMemoryKeyValueStore *_store;
    NSObject<OS_dispatch_queue> *_queue;
    NSCountedSet *_keyPathRegistrationCount;
    unsigned long long _localDeviceID;
}

@property (strong, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property (nonatomic) unsigned long long localDeviceID; // @synthesize localDeviceID=_localDeviceID;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) _CDSharedMemoryKeyValueStore *store; // @synthesize store=_store;

+ (id)persistenceWithSharedMemoryKeyValueStore:(id)arg1;
+ (id)sharedMemoryKeyFromKeyPath:(id)arg1;
+ (id)sharedMemoryKeyFromRegistration:(id)arg1;
- (void).cxx_destruct;
- (id)allKeysForContextStore;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteKeyPaths:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (id)initWithSharedMemoryKeyValueStore:(id)arg1;
- (id)loadRegistrations;
- (id)loadValues;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;

@end

