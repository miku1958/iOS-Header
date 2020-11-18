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
    NSMutableDictionary *_messageLoadTime;
    MSDiagnosticManager *_diagnosticManager;
    NSObject<OS_dispatch_queue> *_serialMessageLoadingTimerQueue;
}

@property (strong, nonatomic) MSDiagnosticManager *diagnosticManager; // @synthesize diagnosticManager=_diagnosticManager;
@property (readonly, copy, nonatomic) NSDictionary *messageLoadTime; // @synthesize messageLoadTime=_messageLoadTime;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *serialMessageLoadingTimerQueue; // @synthesize serialMessageLoadingTimerQueue=_serialMessageLoadingTimerQueue;

- (void).cxx_destruct;
- (void)_calculateAndSubmitTimeForLoadingInfo:(id)arg1;
- (void)_endRecordingForMessage:(id)arg1;
- (id)_retrieveAndRemoveMessageLoadingInfoForMessage:(id)arg1;
- (void)_startTimeoutForMessage:(id)arg1;
- (void)endAllRecording;
- (void)endRecordingForMessage:(id)arg1;
- (id)initWithDiagnosticManager:(id)arg1;
- (void)startRecordingForMessage:(id)arg1;

@end

