//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface BSSerializedRequestQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    CDUnknownBlockType _conditionBlock;
}

@property (readonly, strong, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;

- (void)_enqueueSerialConditionalRequest:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)enqueueAsyncRequest:(CDUnknownBlockType)arg1;
- (void)enqueueRequest:(CDUnknownBlockType)arg1;
- (id)initWithSerialQueue:(id)arg1 workQueue:(id)arg2 executionCondition:(CDUnknownBlockType)arg3;

@end

