//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@protocol CATOperationQueueDelegate;

@interface CATOperationQueue : NSOperationQueue
{
    id<CATOperationQueueDelegate> _delegate;
}

@property (weak, nonatomic) id<CATOperationQueueDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)backgroundQueue;
+ (id)currentQueue;
+ (id)mainQueue;
- (void).cxx_destruct;
- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)delegateOperationDidFinish:(id)arg1;
- (void)delegateWillAddOperation:(id)arg1;
- (id)description;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setUnderlyingQueue:(id)arg1;
- (void)startObserving:(id)arg1;
- (void)stopObserving:(id)arg1;

@end

