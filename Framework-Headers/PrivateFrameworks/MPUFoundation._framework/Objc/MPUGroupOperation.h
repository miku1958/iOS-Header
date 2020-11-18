//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MPUFoundation/MPUOperation.h>

#import <MPUFoundation/MPUOperationQueueDelegate-Protocol.h>

@class MPUOperationQueue, NSBlockOperation, NSMutableArray, NSString;

@interface MPUGroupOperation : MPUOperation <MPUOperationQueueDelegate>
{
    MPUOperationQueue *_internalQueue;
    NSBlockOperation *_startingOperation;
    NSBlockOperation *_finishingOperation;
    NSMutableArray *_errors;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)operationWithOperations:(id)arg1;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)cancel;
- (void)execute;
- (id)initWithOperations:(id)arg1;
- (void)operationDidFinish:(id)arg1 withErrors:(id)arg2;
- (void)operationQueue:(id)arg1 operationDidFinish:(id)arg2 withErrors:(id)arg3;
- (void)operationQueue:(id)arg1 willAddOperation:(id)arg2;

@end

