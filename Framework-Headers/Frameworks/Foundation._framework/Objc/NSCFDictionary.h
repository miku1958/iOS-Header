//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

__attribute__((visibility("hidden")))
@interface NSCFDictionary : NSMutableDictionary
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (Class)classForCoder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)finalize;
- (void)getObjects:(id *)arg1 andKeys:(id *)arg2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)keyEnumerator;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectForKey:(id)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)retain;
- (unsigned long long)retainCount;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObservationInfo:(void *)arg1;

@end

