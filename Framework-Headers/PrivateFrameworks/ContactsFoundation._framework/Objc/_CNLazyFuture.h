//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsFoundation/CNFuture.h>

@class CNFutureTask;

__attribute__((visibility("hidden")))
@interface _CNLazyFuture : CNFuture
{
    CNFutureTask *_futureTask;
}

- (void)addFailureBlock:(CDUnknownBlockType)arg1;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1;
- (BOOL)cancel;
- (void)dealloc;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isCancelled;
- (BOOL)isFinished;
- (id)result:(id *)arg1;
- (id)resultBeforeDate:(id)arg1 error:(id *)arg2;
- (id)resultWithTimeout:(double)arg1 error:(id *)arg2;

@end

