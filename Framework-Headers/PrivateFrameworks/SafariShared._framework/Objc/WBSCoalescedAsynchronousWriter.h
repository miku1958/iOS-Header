//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source, WBSCoalescedAsynchronousWriterDelegate;

@interface WBSCoalescedAsynchronousWriter : NSObject
{
    NSObject<OS_dispatch_queue> *_diskAccessQueue;
    NSURL *_fileURL;
    CDUnknownBlockType _writerBlock;
    CDUnknownBlockType _dataSourceBlock;
    NSObject<OS_dispatch_queue> *_dataSourceQueue;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSObject<OS_dispatch_source> *_timer;
    double _writeDelayInterval;
    NSObject<OS_dispatch_group> *_writeGroup;
    struct unique_ptr<SafariShared::SuddenTerminationDisabler, std::__1::default_delete<SafariShared::SuddenTerminationDisabler>> _suddenTerminationDisabler;
    BOOL _done;
    NSString *_name;
    id<WBSCoalescedAsynchronousWriterDelegate> _delegate;
}

@property (weak, nonatomic) id<WBSCoalescedAsynchronousWriterDelegate> delegate; // @synthesize delegate=_delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_cancelPendingWriteSynchronouslyLeavingSuddenTerminationIntact;
- (id)_dataFromDataSource;
- (id)_initWithName:(id)arg1 fileURL:(id)arg2 writerBlock:(CDUnknownBlockType)arg3 dataSourceQueue:(id)arg4 dataSourceBlock:(CDUnknownBlockType)arg5;
- (void)_invalidateTimer;
- (void)_scheduleTimer;
- (void)_timerFired;
- (void)_waitForWriteCompletion;
- (void)_writeData:(id)arg1;
- (void)_writeDataAsynchronously:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelPendingWriteSynchronously;
- (void)completePendingWriteSynchronously;
- (void)dealloc;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 fileURL:(id)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceBlock:(CDUnknownBlockType)arg3;
- (id)initWithName:(id)arg1 writerBlock:(CDUnknownBlockType)arg2 dataSourceQueue:(id)arg3 dataSourceBlock:(CDUnknownBlockType)arg4;
- (void)performScheduledWriteSynchronously;
- (void)scheduleWrite;
- (void)startScheduledWriteNow;
- (void)startScheduledWriteNowWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

