//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <extension/NSKeyValueMutableSet.h>

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface NSKeyValueNotifyingMutableSet : NSKeyValueMutableSet
{
    NSMutableSet *_mutableSet;
}

+ (CDStruct_7c9a8e9f *)_proxyNonGCPoolPointer;
+ (id)_proxyShare;
- (id)_proxyInitWithContainer:(id)arg1 getter:(id)arg2;
- (void)_proxyNonGCFinalize;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (unsigned long long)count;
- (void)intersectSet:(id)arg1;
- (id)member:(id)arg1;
- (void)minusSet:(id)arg1;
- (id)objectEnumerator;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (void)setSet:(id)arg1;
- (void)unionSet:(id)arg1;

@end
