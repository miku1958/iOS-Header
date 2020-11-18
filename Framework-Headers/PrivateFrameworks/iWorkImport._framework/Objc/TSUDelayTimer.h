//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface TSUDelayTimer : NSObject
{
    BOOL _automaticallyCancelPendingBlockUponSchedulingNewBlock;
    BOOL _cancelled;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_source> *_dispatchTimer;
}

@property (nonatomic, getter=_isCancelled, setter=_setCancelled:) BOOL _cancelled; // @synthesize _cancelled;
@property (strong, nonatomic, setter=_setDispatchQueue:) NSObject<OS_dispatch_queue> *_dispatchQueue; // @synthesize _dispatchQueue;
@property (strong, nonatomic, setter=_setDispatchTimer:) NSObject<OS_dispatch_source> *_dispatchTimer; // @synthesize _dispatchTimer;
@property (nonatomic) BOOL automaticallyCancelPendingBlockUponSchedulingNewBlock; // @synthesize automaticallyCancelPendingBlockUponSchedulingNewBlock=_automaticallyCancelPendingBlockUponSchedulingNewBlock;

- (void)_reallyCancel;
- (void)afterDelay:(double)arg1 processBlock:(CDUnknownBlockType)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithTargetSerialQueue:(id)arg1;

@end

