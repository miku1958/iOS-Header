//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

@interface CNQueue : NSObject
{
    NSMutableArray *_buffer;
    id<CNQueueingStrategy> _strategy;
}

@property (readonly) NSArray *allObjects;
@property (readonly) unsigned long long count;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)drain;
- (void)enqueue:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;

@end

