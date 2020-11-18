//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MetricsKit/MTObject.h>

@class MTEnvironment, MTEventRecorder;
@protocol MTEventFilter;

@interface MTSystem : MTObject
{
    MTEnvironment *_environment;
    MTEventRecorder *_eventRecorder;
    id<MTEventFilter> _eventFilter;
    id<MTEventFilter> _treatmentFilter;
}

@property (strong, nonatomic) MTEnvironment *environment; // @synthesize environment=_environment;
@property (strong, nonatomic) id<MTEventFilter> eventFilter; // @synthesize eventFilter=_eventFilter;
@property (strong, nonatomic) MTEventRecorder *eventRecorder; // @synthesize eventRecorder=_eventRecorder;
@property (strong, nonatomic) id<MTEventFilter> treatmentFilter; // @synthesize treatmentFilter=_treatmentFilter;

- (void).cxx_destruct;
- (id)initWithMetricsKit:(id)arg1;
- (void)setEventFilterWithJavaScriptFunction:(id)arg1 context:(id)arg2 operationQueue:(id)arg3;

@end
