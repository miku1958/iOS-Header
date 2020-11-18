//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSObject;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VSDelayOperation : VSAsyncOperation
{
    NSObject<OS_dispatch_source> *_timerSource;
    double _delay;
    double _tolerance;
}

@property (readonly, nonatomic) double delay; // @synthesize delay=_delay;
@property (readonly, nonatomic) double tolerance; // @synthesize tolerance=_tolerance;

+ (id)delayOperationWithDelay:(double)arg1;
- (void).cxx_destruct;
- (void)_cancelTimer;
- (void)cancel;
- (void)dealloc;
- (void)executionDidBegin;
- (id)init;
- (id)initWithDelay:(double)arg1 tolerance:(double)arg2;

@end

