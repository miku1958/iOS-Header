//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PXScheduler : NSObject
{
    NSMutableArray *_pendingBlocks;
    BOOL _hasPendingPerformInDefaultRunLoopMode;
    BOOL _isPerformingPendingBlocks;
}

+ (id)sharedScheduler;
- (void).cxx_destruct;
- (void)_enteredDefaultRunLoopMode;
- (void)_performPendingBlocks;
- (void)_performPendingBlocksIfNeeded;
- (void)dispatchInMainTransaction:(CDUnknownBlockType)arg1;
- (void)dispatchInMainTransactionAfterDelay:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)init;
- (void)scrollViewDidScroll;
- (void)scrollViewWillLayoutSubviews;

@end

