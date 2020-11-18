//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CKStatefulViewReusePool : NSObject
{
    struct unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> _pool;
    struct unordered_map<std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem, PoolKeyHasher, std::__1::equal_to<std::__1::pair<__unsafe_unretained Class, id>>, std::__1::allocator<std::__1::pair<const std::__1::pair<__unsafe_unretained Class, id>, FBStatefulReusePoolItem>>> _pendingPool;
    BOOL _enqueuedPendingPurge;
    BOOL _pendingReusePoolEnabled;
}

@property (nonatomic) BOOL pendingReusePoolEnabled; // @synthesize pendingReusePoolEnabled=_pendingReusePoolEnabled;

+ (id)sharedPool;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)dequeueStatefulViewForControllerClass:(Class)arg1 preferredSuperview:(id)arg2 context:(id)arg3;
- (void)enqueueStatefulView:(id)arg1 forControllerClass:(Class)arg2 context:(id)arg3 mayRelinquishBlock:(CDUnknownBlockType)arg4;
- (void)purgePendingPool;

@end
