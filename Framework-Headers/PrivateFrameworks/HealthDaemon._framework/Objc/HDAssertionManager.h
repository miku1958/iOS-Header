//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface HDAssertionManager : NSObject
{
    struct os_unfair_lock_s _lock;
    NSObject<OS_dispatch_queue> *_notificationQueue;
    NSMutableDictionary *_assertionRecordsByIdentifier;
    NSMutableDictionary *_observerSetsByAssertionIdentifier;
    BOOL _invalidated;
    NSObject<OS_dispatch_queue> *_assertionExpirationQueue;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *assertionExpirationQueue; // @synthesize assertionExpirationQueue=_assertionExpirationQueue;

- (void).cxx_destruct;
- (void)_lock_enumerateActiveAssertionsWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_postNotification:(id)arg1 forAssertion:(id)arg2;
- (void)_releaseAssertion:(id)arg1;
- (id)activeAssertionsForIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forAssertionIdentifier:(id)arg2 queue:(id)arg3;
- (void)dealloc;
- (BOOL)hasActiveAssertionForIdentifier:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)ownerIdentifiersForAssertionIdentifier:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)removeObserver:(id)arg1 forAssertionIdentifier:(id)arg2;
- (BOOL)takeAssertion:(id)arg1;

@end

