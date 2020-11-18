//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNFuture-Protocol.h>
#import <ContactsFoundation/CNPromise-Protocol.h>

@class CNFutureCompletionBlocks, CNFutureResult, CNTask, NSConditionLock, NSString;

__attribute__((visibility("hidden")))
@interface CNFutureTask : NSObject <CNFuture, CNPromise>
{
    NSConditionLock *_stateLock;
    CNFutureResult *_futureResult;
    CNTask *_task;
    CNFutureCompletionBlocks *_completionBlocks;
}

@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)_flushCompletionBlocks;
- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (BOOL)cancel;
- (CDUnknownBlockType)completionHandlerAdapter;
- (void)dealloc;
- (void)didCancel;
- (CDUnknownBlockType)errorOnlyCompletionHandlerAdapter;
- (BOOL)finishWithError:(id)arg1;
- (BOOL)finishWithResult:(id)arg1;
- (BOOL)finishWithResult:(id)arg1 error:(id)arg2;
- (id)flatMap:(CDUnknownBlockType)arg1;
- (id)futureResult;
- (id)init;
- (id)initWithTask:(id)arg1;
- (BOOL)nts_isFinished;
- (id)recover:(CDUnknownBlockType)arg1;
- (id)result:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;
- (BOOL)run;

@end

