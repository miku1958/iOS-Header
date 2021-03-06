//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperationQueue.h>

@class NSOperation;

@interface AVOperationQueueWithFundamentalDependency : NSOperationQueue
{
    NSOperation *_fundamentalOperation;
}

- (void)addOperation:(id)arg1;
- (void)addOperations:(id)arg1 waitUntilFinished:(BOOL)arg2;
- (void)dealloc;
- (id)initWithFundamentalOperation:(id)arg1;

@end

