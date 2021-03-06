//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RunningBoard/NSCopying-Protocol.h>

@class NSMutableDictionary;

@interface RBProcessMap : NSObject <NSCopying>
{
    struct os_unfair_lock_s _lock;
    NSMutableDictionary *_valueMap;
}

- (void).cxx_destruct;
- (void)addIdentity:(id)arg1;
- (id)allIdentities;
- (id)allValue;
- (BOOL)containsIdentity:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (id)dictionary;
- (void)enumerateWithBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (void)removeAllObjects;
- (void)removeIdentity:(id)arg1;
- (id)removeValueForIdentity:(id)arg1;
- (id)removeValueForIdentity:(id)arg1 withPredicate:(CDUnknownBlockType)arg2;
- (id)setValue:(id)arg1 forIdentity:(id)arg2;
- (id)valueForIdentity:(id)arg1;

@end

