//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSSet.h>

__attribute__((visibility("hidden")))
@interface __NSSetI : NSSet
{
    unsigned int _used:58;
    unsigned int _szidx:6;
}

+ (id)__new:(const id *)arg1:(unsigned long long)arg2:(BOOL)arg3;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (double)clumpingFactor;
- (double)clumpingInterestingThreshold;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)getObjects:(id *)arg1 count:(unsigned long long)arg2;
- (id)member:(id)arg1;
- (id)objectEnumerator;

@end

