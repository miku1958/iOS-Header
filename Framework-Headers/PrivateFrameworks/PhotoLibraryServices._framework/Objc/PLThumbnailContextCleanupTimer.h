//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface PLThumbnailContextCleanupTimer : NSObject
{
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    struct os_unfair_lock_s _transactionLock;
    NSObject<OS_os_transaction> *_transaction;
}

- (void).cxx_destruct;
- (void)_timerFired;
- (void)activate;
- (id)initWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)startOrRestartTimer;

@end
