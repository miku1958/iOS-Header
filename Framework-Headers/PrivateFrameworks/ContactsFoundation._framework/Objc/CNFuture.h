//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNFuture-Protocol.h>
#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFutureCompletionBlocks, CNFutureResult, NSConditionLock, NSString;

@interface CNFuture : NSObject <CNFuture, CNPromise>
{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)chain:(id)arg1;
+ (void)finishPromise:(id)arg1 withFuture:(id)arg2;
+ (id)flatMap:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)future;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1;
+ (id)futureWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
+ (id)futureWithError:(id)arg1;
+ (id)futureWithResult:(id)arg1;
+ (id)join:(id)arg1;
+ (id)lazyFutureWithBlock:(CDUnknownBlockType)arg1;
+ (id)promiseFuture;
+ (id)recover:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (id)sequence:(id)arg1;
- (void)_flushCompletionBlocks;
- (BOOL)_nts_isFinished;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (CDUnknownBlockType)boolErrorCompletionHandlerAdapter;
- (BOOL)cancel;
- (CDUnknownBlockType)completionHandlerAdapter;
- (CDUnknownBlockType)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (void)dealloc;
- (void)didCancel;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)futureResult;
- (id)init;
- (BOOL)nts_isFinished;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)result:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;

@end
