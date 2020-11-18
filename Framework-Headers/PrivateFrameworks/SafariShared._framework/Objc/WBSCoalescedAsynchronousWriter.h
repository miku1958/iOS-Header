//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSTimer, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface WBSCoalescedAsynchronousWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    CDUnknownBlockType _writerBlock;
    CDUnknownBlockType _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSTimer *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _done;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)_dataFromDataSource;
- (void)_invalidateTimer;
- (void)_scheduleTimer;
- (void)_timerFired:(id)arg1;
- (void)_waitForWriteCompletion;
- (void)_writeData:(id)arg1;
- (void)_writeDataAsynchronously:(id)arg1;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)dealloc;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (void)scheduleWrite;
- (void)startScheduledWriteNow;

@end

