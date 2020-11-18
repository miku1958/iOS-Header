//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface _HKExpiringCompletionTimer : NSObject
{
    NSObject<OS_dispatch_source> *_timerSource;
    double _expirationTime;
    double _timeout;
    CDUnknownBlockType _timeoutHandler;
    BOOL _invalidated;
    CDUnknownBlockType _completion;
    NSDate *_startDate;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)_invalidateAndInvokeCompletion:(BOOL)arg1 error:(id)arg2;
- (void)_start;
- (void)dealloc;
- (id)initWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)invalidateAndInvokeCompletionWithError:(id)arg1;
- (void)restart;
- (void)startWithTimeoutInterval:(double)arg1 handler:(CDUnknownBlockType)arg2;

@end

