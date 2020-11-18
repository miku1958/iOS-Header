//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetAppsUtilities/NAFuture.h>

@class NSObject;
@protocol NAScheduler, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _NALazyFuture : NAFuture
{
    BOOL _started;
    CDUnknownBlockType _block;
    id<NAScheduler> _scheduler;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (strong, nonatomic) id<NAScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property (nonatomic) BOOL started; // @synthesize started=_started;

- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1 scheduler:(id)arg2;
- (void)willAddCompletionBlock;

@end

