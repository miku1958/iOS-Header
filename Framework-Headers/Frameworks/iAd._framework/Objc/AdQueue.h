//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

@interface AdQueue : NSObject
{
    NSMutableArray *_array;
    NSObject<OS_dispatch_queue> *_concurrentQueue;
}

@property (strong, nonatomic) NSMutableArray *array; // @synthesize array=_array;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *concurrentQueue; // @synthesize concurrentQueue=_concurrentQueue;

- (unsigned long long)count;
- (id)dequeue;
- (void)enqueue:(id)arg1;
- (id)init;

@end
