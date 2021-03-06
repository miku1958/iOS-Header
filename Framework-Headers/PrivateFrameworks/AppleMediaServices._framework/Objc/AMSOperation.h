//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class AMSBinaryPromise, NSError, NSLock, NSMutableSet;

@interface AMSOperation : NSOperation
{
    NSLock *_lock;
    NSMutableSet *_subOperations;
    BOOL _cancelled;
    BOOL _success;
    AMSOperation *_parentOperation;
    AMSBinaryPromise *_promise;
    NSError *_error;
}

@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (weak, nonatomic) AMSOperation *parentOperation; // @synthesize parentOperation=_parentOperation;
@property (readonly, nonatomic) AMSBinaryPromise *promise; // @synthesize promise=_promise;
@property (nonatomic) BOOL success; // @synthesize success=_success;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (BOOL)isCancelled;
- (void)lock;
- (void)main;
- (void)run;
- (void)runSubOperation:(id)arg1;
- (void)runSubOperation:(id)arg1 onQueue:(id)arg2;
- (void)unlock;

@end

