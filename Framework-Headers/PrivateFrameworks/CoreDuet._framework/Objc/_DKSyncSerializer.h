//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperation, NSOperationQueue;
@protocol OS_dispatch_queue;

@interface _DKSyncSerializer : NSObject
{
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_underlyingQueue;
    NSOperation *_previousOperation;
}

@property (readonly) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (weak) NSOperation *previousOperation; // @synthesize previousOperation=_previousOperation;
@property (readonly) NSObject<OS_dispatch_queue> *underlyingQueue; // @synthesize underlyingQueue=_underlyingQueue;

+ (void)addDependentOperation:(id)arg1;
+ (void)addDependentOperationWithBlock:(CDUnknownBlockType)arg1;
+ (void)addOperation:(id)arg1;
+ (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
+ (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
+ (id)operationQueue;
+ (void)performAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
+ (void)performAsyncBlock:(CDUnknownBlockType)arg1;
+ (void)performSyncBlock:(CDUnknownBlockType)arg1;
+ (id)sharedInstance;
+ (id)underlyingQueue;
- (void).cxx_destruct;
- (void)addDependentOperation:(id)arg1;
- (void)addDependentOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (id)debugDescription;
- (id)description;
- (id)init;
- (void)performAfter:(double)arg1 block:(CDUnknownBlockType)arg2;
- (void)performAsyncBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;

@end

