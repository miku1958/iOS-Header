//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBoostableOperationThrottlerDelegate-Protocol.h>

@class FCBoostableOperationThrottler, NFMutexLock, NSCountedSet, NSHashTable, NSMapTable, NSString;
@protocol FCFetchCoordinatorDelegate;

@interface FCFetchCoordinator : NSObject <FCBoostableOperationThrottlerDelegate>
{
    id<FCFetchCoordinatorDelegate> _delegate;
    unsigned long long _maxConcurrentFetchCount;
    NSHashTable *_fetchGroups;
    NSCountedSet *_allKeys;
    NSMapTable *_fetchOperationsByGroup;
    NFMutexLock *_accessLock;
    FCBoostableOperationThrottler *_fetchThrottler;
}

@property (strong, nonatomic) NFMutexLock *accessLock; // @synthesize accessLock=_accessLock;
@property (strong, nonatomic) NSCountedSet *allKeys; // @synthesize allKeys=_allKeys;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCFetchCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSHashTable *fetchGroups; // @synthesize fetchGroups=_fetchGroups;
@property (strong, nonatomic) NSMapTable *fetchOperationsByGroup; // @synthesize fetchOperationsByGroup=_fetchOperationsByGroup;
@property (strong, nonatomic) FCBoostableOperationThrottler *fetchThrottler; // @synthesize fetchThrottler=_fetchThrottler;
@property (readonly) unsigned long long hash;
@property unsigned long long maxConcurrentFetchCount; // @synthesize maxConcurrentFetchCount=_maxConcurrentFetchCount;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFetchGroup:(id)arg1;
- (void)beginFetchesIfNeededWithLock;
- (void)cancelFetchesIfNeededWithLock;
- (id)fetchKey:(id)arg1 qualityOfService:(long long)arg2 completionQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)fetchKeys:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)fetchKeysUnconditionally:(id)arg1 context:(id)arg2 qualityOfService:(long long)arg3 relativePriority:(long long)arg4 completionQueue:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (id)init;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)removeFetchGroup:(id)arg1;

@end

