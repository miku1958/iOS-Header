//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MMCS/C2SessionTaskDelegate-Protocol.h>

@class C2RequestOptions, NSString, NSURLSessionDataTask;
@protocol C2RequestDelegate, C2SessionTaskDelegate;

@interface C2SessionTask : NSObject <C2SessionTaskDelegate>
{
    unsigned char _isComplete;
    unsigned int _attemptCount;
    C2RequestOptions *_options;
    id<C2RequestDelegate> _delegate;
    struct os_activity_s *_activity;
    CDUnknownBlockType _testBehavior_reportMetric;
    NSURLSessionDataTask *_task;
    id<C2SessionTaskDelegate> _sessionTaskDelegate;
    double _initTime;
    double _resetTime;
}

@property (readonly, nonatomic) struct os_activity_s *activity; // @synthesize activity=_activity;
@property (nonatomic) unsigned int attemptCount; // @synthesize attemptCount=_attemptCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<C2RequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initTime; // @synthesize initTime=_initTime;
@property (nonatomic) unsigned char isComplete; // @synthesize isComplete=_isComplete;
@property (readonly, copy, nonatomic) C2RequestOptions *options; // @synthesize options=_options;
@property (nonatomic) double resetTime; // @synthesize resetTime=_resetTime;
@property (strong, nonatomic) id<C2SessionTaskDelegate> sessionTaskDelegate; // @synthesize sessionTaskDelegate=_sessionTaskDelegate;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property (copy, nonatomic) CDUnknownBlockType testBehavior_reportMetric; // @synthesize testBehavior_reportMetric=_testBehavior_reportMetric;

+ (double)captureMetricDurationBetweenStart:(double)arg1 andEnd:(double)arg2;
+ (double)captureMetricsForTimingData:(id)arg1 withKey:(id)arg2;
- (void).cxx_destruct;
- (void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)captureMetricsWithError:(id)arg1 eventType:(long long)arg2;
- (void)dealloc;
- (void)handleCallbackForTask:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)initWithOptions:(id)arg1 delegate:(id)arg2 sessionTaskDelegate:(id)arg3;
- (void)invalidate;
- (id)taskDescription;

@end

