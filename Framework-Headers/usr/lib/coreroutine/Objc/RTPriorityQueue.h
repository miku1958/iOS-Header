//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RTPriorityQueue : NSObject
{
    struct __CFBinaryHeap *_heap;
}

@property (readonly, nonatomic) unsigned long long count;

- (void)dealloc;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)initWithObjects:(id)arg1;
- (id)peek;

@end

