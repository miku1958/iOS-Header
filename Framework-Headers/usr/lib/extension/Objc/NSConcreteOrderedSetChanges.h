//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOrderedSetChanges.h>

__attribute__((visibility("hidden")))
@interface NSConcreteOrderedSetChanges : NSOrderedSetChanges
{
    CDStruct_29daef6c _changes;
}

- (void)_enumerateChanges:(unsigned long long)arg1 stop:(BOOL *)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)addChange:(id)arg1;
- (unsigned long long)changeCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (void)enumerateChanges:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateChangesUsingBlock:(CDUnknownBlockType)arg1;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)init;
- (id)initWithObjects:(const id *)arg1 count:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)sortRange:(struct _NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(CDUnknownBlockType)arg3;

@end

