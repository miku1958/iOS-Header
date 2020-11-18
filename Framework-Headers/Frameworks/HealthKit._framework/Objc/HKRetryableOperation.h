//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HKRetryableOperation : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    long long _retryCount;
    NSMutableArray *_pendingOperations;
}

@property (readonly, copy, nonatomic) NSMutableArray *pendingOperations;

- (void).cxx_destruct;
- (void)_queue_performPendingOperation:(id)arg1;
- (void)_queue_performRetryableOperation:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithQueue:(id)arg1 retryCount:(int)arg2;

@end
