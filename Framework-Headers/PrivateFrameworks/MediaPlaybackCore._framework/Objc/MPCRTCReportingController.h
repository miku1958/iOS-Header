//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/MPCReportingController.h>

@class NSMutableArray, NSObject, RTCReporting;
@protocol OS_dispatch_queue;

@interface MPCRTCReportingController : MPCReportingController
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    unsigned long long _reportingState;
    NSMutableArray *_reportingStateLoadCompletionHandlers;
    RTCReporting *_rtcReporting;
    BOOL _shouldDeferEventFlushing;
}

@property (nonatomic) BOOL shouldDeferEventFlushing;

- (void).cxx_destruct;
- (BOOL)_getMethod:(unsigned short *)arg1 respCode:(unsigned short *)arg2 infoDictionary:(id *)arg3 fromReportingEvent:(id)arg4;
- (void)_recordReportingEvents:(id)arg1;
- (id)init;

@end

