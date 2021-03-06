//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SSPromise;
@protocol OS_dispatch_queue;

@interface SSUniqueExecutionQueue : NSObject
{
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_queue> *_callBlockQueue;
    NSObject<OS_dispatch_queue> *_executeBlockQueue;
    SSPromise *_promise;
    NSObject<OS_dispatch_queue> *_promiseAccessQueue;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *callBlockQueue; // @synthesize callBlockQueue=_callBlockQueue;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *executeBlockQueue; // @synthesize executeBlockQueue=_executeBlockQueue;
@property (strong, nonatomic) SSPromise *promise; // @synthesize promise=_promise;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *promiseAccessQueue; // @synthesize promiseAccessQueue=_promiseAccessQueue;

- (void).cxx_destruct;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end

