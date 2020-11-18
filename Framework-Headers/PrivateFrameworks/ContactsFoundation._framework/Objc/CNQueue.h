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
@property (readonly, nonatomic) NSMutableArray *buffer; // @synthesize buffer=_buffer;
@property (readonly) unsigned long long count;
@property (readonly, nonatomic) id<CNQueueingStrategy> strategy; // @synthesize strategy=_strategy;

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)dequeue;
- (void)dequeueObject:(id)arg1;
- (id)drain;
- (void)enqueue:(id)arg1;
- (void)enqueueObjectsFromArray:(id)arg1;
- (id)init;
- (id)initWithStrategy:(id)arg1;
- (id)peek;

@end
