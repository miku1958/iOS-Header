//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MSDiagnosticManager, NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface MSMessageLoadingAnalyticController : NSObject
{
    NSMutableDictionary *_messageLoadTimes;
    MSDiagnosticManager *_diagnosticManager;
    NSObject<OS_dispatch_queue> *_serialMessageLoadingTimerQueue;
    unsigned long long _maxLoadingTimeSeconds;
    CDUnknownBlockType _startedRecordingHandler;
    CDUnknownBlockType _endedRecordingHandler;
}

@property (strong, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
@property (copy, nonatomic) CDUnknownBlockType endedRecordingHandler; // @synthesize endedRecordingHandler=_endedRecordingHandler;
@property (nonatomic) unsigned long long maxLoadingTimeSeconds; // @synthesize maxLoadingTimeSeconds=_maxLoadingTimeSeconds;
@property (readonly, copy, nonatomic) NSDictionary *messageLoadTimes; // @synthesize messageLoadTimes=_messageLoadTimes;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue; // @synthesize serialMessageLoadingTimerQueue=_serialMessageLoadingTimerQueue;
@property (copy, nonatomic) CDUnknownBlockType startedRecordingHandler; // @synthesize startedRecordingHandler=_startedRecordingHandler;

- (void).cxx_destruct;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;
- (void)_commonInitWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;
- (void)_endRecordingForMessage:(id)arg1;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;
- (void)_startTimeoutForMessage:(id)arg1;
- (void)endAllRecording;
- (void)endRecordingForMessage:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1 maxLoadingTimeSeconds:(unsigned long long)arg2;
- (void)startRecordingForMessage:(id)arg1;

@end

