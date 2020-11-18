//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableArray.h>

@interface NSMutableArray (TSUAdditions)
- (void)addNonNilObject:(id)arg1;
- (void)addObjects:(id)arg1;
- (void)addObjectsFromNonNilArray:(id)arg1;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 onObjectsFromArray:(id)arg2;
- (id)initWithResultsOfPerformingSelector:(SEL)arg1 withObject:(id)arg2 onObjectsFromArray:(id)arg3;
- (id)pop_tsu;
- (void)push_tsu:(id)arg1;
- (void)removeObjectsIdenticalToObjectsInArray:(id)arg1;
- (void)removeObjectsIdenticalToObjectsInSet:(id)arg1;
- (void)trimObjectsFromIndex:(unsigned long long)arg1;
@end

