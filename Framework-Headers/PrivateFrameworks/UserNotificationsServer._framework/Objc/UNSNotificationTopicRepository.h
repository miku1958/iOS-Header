//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UNSKeyedDataStoreRepository, UNSKeyedObservable;
@protocol OS_dispatch_queue;

@interface UNSNotificationTopicRepository : NSObject
{
    UNSKeyedDataStoreRepository *_repository;
    UNSKeyedObservable *_observable;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (long long)_maxObjectsPerKey;
- (void)_queue_notificationSourcesDidUninstall:(id)arg1;
- (void)_queue_setTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)_queue_topicsForBundleIdentifier:(id)arg1;
- (void)addObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (id)allBundleIdentifiers;
- (void)contentProtectionStateChangedForFirstUnlock:(BOOL)arg1;
- (id)initWithDataStoreRepository:(id)arg1 observable:(id)arg2;
- (id)initWithDirectory:(id)arg1 librarian:(id)arg2 repositoryProtectionStrategy:(id)arg3;
- (void)notificationSourcesDidUninstall:(id)arg1;
- (void)removeObserver:(id)arg1 forBundleIdentifier:(id)arg2;
- (void)setTopics:(id)arg1 forBundleIdentifier:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (id)topicsForBundleIdentifier:(id)arg1;

@end

