//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCoreLite/FMPromise-Protocol.h>

@class NSError, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface FMFuture : NSObject <FMPromise>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _finished;
    NSMutableArray *_completionBlocks;
    id _resultValue;
    NSError *_resultError;
    NSString *_descriptor;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *descriptor; // @synthesize descriptor=_descriptor;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_chainFuturesWithFutureStack:(id)arg1;
+ (id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3;
+ (id)chainFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1;
+ (id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3;
+ (id)combineAllFutures:(id)arg1 scheduler:(id)arg2;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithCompletionHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithErrorOnlyHandlerAdapterBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithNoResult;
+ (id)futureWithResult:(id)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void).cxx_destruct;
- (void)_flushCompletionBlocks;
- (BOOL)_queue_isCancelled;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (BOOL)cancel;
- (CDUnknownBlockType)completionHandlerAdapter;
- (void)didCancel;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)init;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)recoverIgnoringError;
- (id)reschedule:(id)arg1;

@end

