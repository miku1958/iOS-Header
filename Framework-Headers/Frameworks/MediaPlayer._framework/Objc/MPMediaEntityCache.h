//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol MPMediaLibraryDataProviderPrivate, OS_dispatch_queue;

@interface MPMediaEntityCache : NSObject
{
    id<MPMediaLibraryDataProviderPrivate> _mediaLibraryDataProvider;
    BOOL _mediaLibraryDataProviderRespondsToSupportsEntityChangeTrackingMethod;
    struct _opaque_pthread_rwlock_t {
        long long __sig;
        char __opaque[192];
    } _rwlock;
    NSObject<OS_dispatch_queue> *_queue;
    struct __CFDictionary *_concreteEntitiesByDataProviderEntityClass;
    NSMutableArray *_entityTemporaryReferences;
}

- (void).cxx_destruct;
- (void)_clearSomeGlobalEntityTemporaryReferences;
- (map_2a6257c2 *)_entityMapForDataProviderEntityClass:(Class)arg1;
- (id)_entityWithIdentifier:(long long)arg1 mediaEntityType:(long long)arg2 collectionGroupingType:(long long)arg3 loadEntityBlock:(CDUnknownBlockType)arg4;
- (void)_performWithExclusiveAccessForDataProviderEntityClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (void)_performWithSharedAccessForDataProviderEntityClass:(Class)arg1 block:(CDUnknownBlockType)arg2;
- (id)collectionWithIdentifier:(long long)arg1 grouping:(long long)arg2 loadEntityBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithMediaLibraryDataProvider:(id)arg1;
- (id)itemWithIdentifier:(long long)arg1;
- (id)itemWithIdentifier:(long long)arg1 loadEntityBlock:(CDUnknownBlockType)arg2;
- (void)removeEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2;
- (void)updatePropertyValuesInEntityWithIdentifier:(long long)arg1 dataProviderEntityClass:(Class)arg2 deleted:(BOOL)arg3;

@end

