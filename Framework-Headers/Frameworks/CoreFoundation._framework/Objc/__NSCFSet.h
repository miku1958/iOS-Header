//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableSet.h>

__attribute__((visibility("hidden")))
@interface __NSCFSet : NSMutableSet
{
    unsigned char _cfinfo[4];
    unsigned int _rc;
    unsigned int _bits[4];
    void *_callbacks;
    id *_values;
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (BOOL)_isDeallocating;
- (unsigned long long)_trueCount;
- (BOOL)_tryRetain;
- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_58648341 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)member:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectEnumerator;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObject:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;

@end

