//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface CNFutureCompletionBlocks : NSObject
{
    NSMutableArray *_completionBlocks;
    BOOL _shouldCallImmediately;
}

- (void).cxx_destruct;
- (void)addCompletionBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addFailureBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)addSuccessBlock:(CDUnknownBlockType)arg1 orCallWithFutureResult:(id)arg2;
- (void)flushCompletionBlocksWithFutureResult:(id)arg1;
- (id)init;
- (void)setShouldCallImmediately:(BOOL)arg1;
- (BOOL)shouldCallImmediately;

@end

