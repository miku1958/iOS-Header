//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <ViceroyTrace/RTCReportingMessageSentNotifier-Protocol.h>
#import <ViceroyTrace/VCAggregatorDelegate-Protocol.h>

@class NSArray, NSString, RTCReporting, VCAggregator;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RTCReportingAgent : NSObject <VCAggregatorDelegate, RTCReportingMessageSentNotifier>
{
    unsigned int _callID;
    RTCReporting *_reportingObject;
    void *_symptomReporter;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSArray *_backends;
    VCAggregator *_aggregator;
    int _clientType;
}

@property (strong) VCAggregator *aggregator; // @synthesize aggregator=_aggregator;
@property (copy) NSArray *backends; // @synthesize backends=_backends;
@property int clientType; // @synthesize clientType=_clientType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) RTCReporting *reportingObject; // @synthesize reportingObject=_reportingObject;
@property (readonly) NSObject<OS_dispatch_queue> *reportingQueue; // @synthesize reportingQueue=_reportingQueue;
@property (readonly) Class superclass;

- (void)dealloc;
- (void)didSendMessageForReportingClient:(id)arg1 event:(id)arg2;
- (void)initAdaptiveLearningWithParameters:(id)arg1;
- (id)initWithCallID:(unsigned int)arg1 clientType:(int)arg2;
- (int)learntBitrateForSegment:(id)arg1 defaultValue:(int)arg2;
- (void)releaseReportingObject;
- (void)report:(id)arg1;
- (void)reportQR:(id)arg1;
- (void)reportingSymptom:(unsigned int)arg1 withOptionalDict:(struct __CFDictionary *)arg2;
- (void)sendAggregatedReport;

@end

