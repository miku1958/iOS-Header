//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Parsec/NSCacheDelegate-Protocol.h>
#import <Parsec/NSFastEnumeration-Protocol.h>

@class NSMutableOrderedSet, NSMutableSet, NSString;

@interface PRSCache : NSObject <NSCacheDelegate, NSFastEnumeration>
{
    NSMutableOrderedSet *_cache;
    NSMutableSet *_observers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)cachedResultSetForQuery:(id)arg1;
- (id)copyCachedResult:(id)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getCachedQueries:(id *)arg1 results:(id *)arg2;
- (id)init;
- (void)prune;
- (void)removeObject:(id)arg1;
- (void)removeObjects:(id)arg1;
- (void)removeObserver:(id)arg1;
- (long long)resultSet:(id)arg1 isMatchForQuery:(id)arg2;
- (void)shrink;

@end

