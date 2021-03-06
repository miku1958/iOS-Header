//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreDuetContext/_CDContextPersisting-Protocol.h>

@class NSCountedSet, _DKCoreDataStorage;
@protocol OS_dispatch_queue;

@interface _CDCoreDataContextPersisting : NSObject <_CDContextPersisting>
{
    NSObject<OS_dispatch_queue> *_queue;
    _DKCoreDataStorage *_storage;
    NSCountedSet *_keyPathRegistrationCount;
}

@property (readonly, nonatomic) NSCountedSet *keyPathRegistrationCount; // @synthesize keyPathRegistrationCount=_keyPathRegistrationCount;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) _DKCoreDataStorage *storage; // @synthesize storage=_storage;

+ (id)persistenceWithDirectory:(id)arg1;
+ (id)persistenceWithStorage:(id)arg1;
- (void).cxx_destruct;
- (void)_deleteKeyPaths:(id)arg1;
- (BOOL)_withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insert:(BOOL)arg3 update:(CDUnknownBlockType)arg4;
- (void)deleteAllData;
- (void)deleteDataCreatedBefore:(id)arg1;
- (void)deleteRegistration:(id)arg1;
- (BOOL)fromEntityWithName:(id)arg1 deleteObjectsMatching:(id)arg2;
- (BOOL)fromEntityWithName:(id)arg1 fetchAllObjectsMatchingPredicate:(id)arg2 handlingMOs:(CDUnknownBlockType)arg3;
- (id)getMOC;
- (id)initWithStorage:(id)arg1;
- (id)loadRegistrations;
- (id)loadValues;
- (void)saveRegistration:(id)arg1;
- (void)saveValue:(id)arg1 forKeyPath:(id)arg2;
- (id)uniquenessPredicateForKeyPath:(id)arg1;
- (id)uniqunessPredicateForRegistration:(id)arg1;
- (BOOL)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 insertOrUpdate:(CDUnknownBlockType)arg3;
- (BOOL)withMOFromEntityWithName:(id)arg1 andUniqunessPredicate:(id)arg2 update:(CDUnknownBlockType)arg3;

@end

