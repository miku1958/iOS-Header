//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class NSMutableArray;
@protocol MTEventRecorderDelegate;

@interface MTEventRecorder : MTObject
{
    id<MTEventRecorderDelegate> _delegate;
    NSMutableArray *_eventListeners;
}

@property (weak, nonatomic) id<MTEventRecorderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSMutableArray *eventListeners; // @synthesize eventListeners=_eventListeners;
@property (nonatomic) BOOL monitorsLifecycleEvents;

+ (id)_compositePromiseWithPromises:(id)arg1 resolvingResultFromPromise:(id)arg2;
+ (id)_metricsDataApplyingWhitelisting:(id)arg1 usingRecorder:(id)arg2;
- (void).cxx_destruct;
- (id)_amsDelegate;
- (id)_flushUnreportedEventsUsingRecorder:(id)arg1;
- (id)_recordEvent:(id)arg1 toTopic:(id)arg2 usingRecorder:(id)arg3;
- (id)_recordEvent:(id)arg1 usingRecorder:(id)arg2;
- (void)addEventListener:(id)arg1;
- (void)dealloc;
- (id)flushUnreportedEvents;
- (id)init;
- (id)initWithMetricsKit:(id)arg1;
- (void)maybeSubscribeToFlushNotification;
- (id)recordEvent:(id)arg1;
- (id)recordEvent:(id)arg1 shouldSkipValidation:(BOOL)arg2;
- (id)recordEvent:(id)arg1 toTopic:(id)arg2;
- (void)removeEventListener:(id)arg1;
- (id)sendMethod;

@end

