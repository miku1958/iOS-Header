//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSMutableSet;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface AWSampleLogger : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_powerLogQueue;
    NSMutableDictionary *_clientLogData;
    NSMutableSet *_outstandingClientLogData;
    NSMutableSet *_addedClientLogData;
    NSObject<OS_dispatch_source> *_timer;
    unsigned long long _samplingStartTime;
    unsigned long long _cumulativeSamplingTime;
    unsigned long long _samplesRequested;
    unsigned long long _pollsRequested;
    unsigned long long _samplesSucceeded;
}

+ (void)client:(id)arg1 attentionStateChange:(BOOL)arg2;
+ (void)client:(id)arg1 event:(id)arg2;
+ (void)client:(id)arg1 pollEventType:(unsigned long long)arg2 event:(id)arg3;
+ (id)sharedLogger;
- (void).cxx_destruct;
- (void)_outputPowerLog;
- (id)init;
- (void)outputPowerLog;
- (void)powerLogName:(id)arg1 event:(id)arg2;
- (void)sampleStartedWithDeadline:(unsigned long long)arg1;
- (void)sampleSucceeded;
- (void)shouldSample:(BOOL)arg1;
- (void)startUpdate;
- (void)updateDataForClient:(id)arg1 deadline:(unsigned long long)arg2;

@end
