//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOAnalyticsPipelineReportOperation.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface GEOAnalyticsPipelineReportEventOperation : GEOAnalyticsPipelineReportOperation
{
    int _logMsgType;
    int _logMsgEventType;
    NSData *_logMsg;
}

- (void).cxx_destruct;
- (id)initWithType:(int)arg1 eventType:(int)arg2 logMsg:(id)arg3 remoteProxy:(id)arg4 runQueue:(id)arg5 completionQueue:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)main;

@end
