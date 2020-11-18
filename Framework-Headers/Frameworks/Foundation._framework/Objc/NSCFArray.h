//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

__attribute__((visibility("hidden")))
@interface NSCFArray : NSMutableArray
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)addObject:(id)arg1;
- (Class)classForCoder;
- (BOOL)containsObject:(id)arg1 inRange:(struct _NSRange)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2;
- (void)finalize;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)hash;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (oneway void)release;
- (void)removeAllObjects;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)replaceObjectsInRange:(struct _NSRange)arg1 withObjects:(id *)arg2 count:(unsigned long long)arg3;
- (id)retain;
- (unsigned long long)retainCount;
- (void)sortUsingFunction:(CDUnknownFunctionPointerType)arg1 context:(void *)arg2;

@end
