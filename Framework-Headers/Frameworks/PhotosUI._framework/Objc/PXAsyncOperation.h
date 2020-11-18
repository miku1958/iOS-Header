//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSLock;

@interface PXAsyncOperation : NSOperation
{
    NSLock *_stateLock;
    int _operationState;
}

- (void).cxx_destruct;
- (id)init;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)px_finishIfPossible;
- (void)px_start;
- (void)start;

@end
