//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TPBGLayoutState, TPDocumentRoot, TSUDelayTimer;
@protocol OS_dispatch_queue, TPBackgroundLayoutControllerDelegate;

__attribute__((visibility("hidden")))
@interface TPBackgroundLayoutController : NSObject
{
    BOOL _isTornDown;
    NSObject<OS_dispatch_queue> *_queue;
    double _fullDelay;
    double _shortDelay;
    double _batchProcessingTime;
    TSUDelayTimer *_interruptTimer;
    TPBGLayoutState *_protectedState;
    TPDocumentRoot *_documentRoot;
    id<TPBackgroundLayoutControllerDelegate> _delegate;
}

@property (readonly, nonatomic, getter=isBackgroundLayoutSuspended) BOOL backgroundLayoutSuspended;
@property (weak) id<TPBackgroundLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak) TPDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (readonly, nonatomic) BOOL isBackgroundLayoutPending;

- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)arg1 delegate:(id)arg2;
- (void)interruptAndScheduleAfterDelay;
- (void)p_performBackgroundLayout;
- (void)p_scheduleTimerAfterDelay:(double)arg1;
- (void)resume;
- (void)scheduleNow;
- (void)suspend;
- (void)teardown;

@end
