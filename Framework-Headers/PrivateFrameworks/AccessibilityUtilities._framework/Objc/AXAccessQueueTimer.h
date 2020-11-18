//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AccessibilityUtilities/AXAccessQueueTimer-Protocol.h>

@class AXAccessQueue, NSString;
@protocol OS_dispatch_source;

@interface AXAccessQueueTimer : NSObject <AXAccessQueueTimer>
{
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _active;
    BOOL _accessQueueIsExternal;
    int _state;
    NSString *_label;
    AXAccessQueue *_accessQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property (strong, nonatomic) AXAccessQueue *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (nonatomic) BOOL accessQueueIsExternal; // @synthesize accessQueueIsExternal=_accessQueueIsExternal;
@property (nonatomic, getter=isActive) BOOL active; // @synthesize active=_active;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *dispatchTimer; // @synthesize dispatchTimer=_dispatchTimer;
@property (readonly) unsigned long long hash;
@property (copy) NSString *label; // @synthesize label=_label;
@property (readonly, nonatomic, getter=isPending) BOOL pending;
@property (nonatomic) int state; // @synthesize state=_state;
@property (readonly) Class superclass;

+ (id)timerTargettingMainAccessQueue;
- (void)_afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2 shouldTreatAsWritingBlock:(BOOL)arg3;
- (void)_didFinishProcessingBlock;
- (void)_performEnqueuedWritingBlock:(CDUnknownBlockType)arg1 asynchronousExecutionWarningHandler:(SEL)arg2;
- (void)_reallyCancel;
- (void)_warnAboutAsynchronousCancelling;
- (void)_warnAboutAsynchronousScheduling;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processReadingBlock:(CDUnknownBlockType)arg2;
- (void)afterDelay:(double)arg1 processWritingBlock:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithTargetAccessQueue:(id)arg1;

@end

