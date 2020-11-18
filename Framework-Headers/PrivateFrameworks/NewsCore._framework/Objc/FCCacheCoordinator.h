//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCOperationThrottlerDelegate-Protocol.h>

@class FCCacheCoordinatorFlushPolicy, FCMutexLock, FCReadWriteLock, FCThreadSafeMutableDictionary, NSCountedSet, NSMutableSet, NSString;
@protocol FCCacheCoordinatorDelegate, FCOperationThrottler;

@interface FCCacheCoordinator : NSObject <FCOperationThrottlerDelegate>
{
    BOOL _flushingEnabled;
    id<FCCacheCoordinatorDelegate> _delegate;
    NSMutableSet *_storedKeys;
    NSCountedSet *_interestedKeys;
    FCThreadSafeMutableDictionary *_cacheHintsByKey;
    FCMutexLock *_interestLock;
    FCReadWriteLock *_dataLock;
    id<FCOperationThrottler> _flushThrottler;
    FCCacheCoordinatorFlushPolicy *_flushPolicy;
}

@property (strong, nonatomic) FCThreadSafeMutableDictionary *cacheHintsByKey; // @synthesize cacheHintsByKey=_cacheHintsByKey;
@property (strong, nonatomic) FCReadWriteLock *dataLock; // @synthesize dataLock=_dataLock;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FCCacheCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FCCacheCoordinatorFlushPolicy *flushPolicy; // @synthesize flushPolicy=_flushPolicy;
@property (strong, nonatomic) id<FCOperationThrottler> flushThrottler; // @synthesize flushThrottler=_flushThrottler;
@property (getter=isFlushingEnabled) BOOL flushingEnabled; // @synthesize flushingEnabled=_flushingEnabled;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FCMutexLock *interestLock; // @synthesize interestLock=_interestLock;
@property (strong, nonatomic) NSCountedSet *interestedKeys; // @synthesize interestedKeys=_interestedKeys;
@property (strong, nonatomic) NSMutableSet *storedKeys; // @synthesize storedKeys=_storedKeys;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_modifyCacheHintForKeys:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)addInterestInKeys:(id)arg1;
- (BOOL)cacheContainsKey:(id)arg1;
- (void)didAccessKeys:(id)arg1;
- (void)didInsertKeyIntoCache:(id)arg1 withLifetimeHint:(long long)arg2;
- (void)didInsertKeysIntoCache:(id)arg1 withLifetimeHints:(id)arg2;
- (void)enableFlushingWithPolicy:(id)arg1;
- (id)filterKeysForPreemptiveFlush:(id)arg1 cacheHints:(id)arg2;
- (id)holdTokenForKey:(id)arg1;
- (id)holdTokenForKeys:(id)arg1;
- (id)holdTokensForKeys:(id)arg1;
- (id)init;
- (void)operationThrottlerPerformOperation:(id)arg1;
- (void)performCacheRead:(CDUnknownBlockType)arg1;
- (void)performCacheWrite:(CDUnknownBlockType)arg1;
- (id)persistableHints;
- (void)removeInterestInKeys:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1;
- (void)setupWithInitialKeys:(id)arg1 persistedHints:(id)arg2;

@end

