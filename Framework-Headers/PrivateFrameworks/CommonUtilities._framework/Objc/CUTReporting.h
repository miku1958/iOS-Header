//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTPromise;

@interface CUTReporting : NSObject
{
    struct os_unfair_lock_s _promiseLock;
    CUTPromise *_promise;
}

@property (strong, nonatomic) CUTPromise *promise; // @synthesize promise=_promise;
@property (readonly) struct os_unfair_lock_s promiseLock; // @synthesize promiseLock=_promiseLock;

+ (id)RTCSessionPromiseWithBatchingInterval:(double)arg1;
+ (id)_rtcReportingSession;
+ (id)reportingSession;
+ (void)startRTCReportingSessionWithCompletion:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)_RTCSessionPromiseWithBatchingInterval:(double)arg1;
- (void)_beginPromiseTimeoutWithInterval:(long long)arg1;
- (void)_failSeal:(id)arg1 withError:(id)arg2;
- (void)_fullfillSeal:(id)arg1 withSession:(id)arg2;
- (void)_startConfigurationOfSession:(id)arg1 withPromiseSeal:(id)arg2;
- (id)init;

@end

