//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class NSObject;
@protocol OS_dispatch_queue;

@interface TROperationQueue : NSOperationQueue
{
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_cancellationQ;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *cancellationQ; // @synthesize cancellationQ=_cancellationQ;
@property (getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;

- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperationWithBlock:(CDUnknownBlockType)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (id)init;
- (void)invalidate;

@end

