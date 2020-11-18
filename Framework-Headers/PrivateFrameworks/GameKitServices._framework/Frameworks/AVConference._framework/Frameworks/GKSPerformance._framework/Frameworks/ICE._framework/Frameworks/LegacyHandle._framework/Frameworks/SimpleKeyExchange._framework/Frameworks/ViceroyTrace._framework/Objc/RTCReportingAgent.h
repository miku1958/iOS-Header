//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, RTCReporting;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface RTCReportingAgent : NSObject
{
    RTCReporting *_reportingObject;
    int _client;
    NSObject<OS_dispatch_queue> *_reportingQueue;
    NSArray *_backends;
}

@property (copy) NSArray *backends; // @synthesize backends=_backends;
@property int client; // @synthesize client=_client;
@property (strong) RTCReporting *reportingObject; // @synthesize reportingObject=_reportingObject;
@property NSObject<OS_dispatch_queue> *reportingQueue; // @synthesize reportingQueue=_reportingQueue;

- (void)dealloc;
- (id)initWithCallID:(unsigned int)arg1 clientType:(int)arg2;
- (void)releaseReportingObject;

@end
