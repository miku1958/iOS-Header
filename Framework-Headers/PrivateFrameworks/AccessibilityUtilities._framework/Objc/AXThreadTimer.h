//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXAccessQueueTimer-Protocol.h>

@class AXThreadTimerTask, NSString, NSThread;

@interface AXThreadTimer : NSObject <AXAccessQueueTimer>
{
    NSThread *_thread;
    CDUnknownBlockType _cancelBlock;
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    AXThreadTimerTask *_task;
}

@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (readonly) Class superclass;
@property (strong, nonatomic) AXThreadTimerTask *task; // @synthesize task=_task;

- (void).cxx_destruct;
- (void)_runAfterDelay:(id)arg1;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 cancelBlock:(CDUnknownBlockType)arg3;
- (void)cancel;
- (id)initWithThread:(id)arg1;

@end

