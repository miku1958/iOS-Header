//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFAnalyticsService-Protocol.h>
#import <AssistantServices/AFAnalyticsServiceDelegate-Protocol.h>

@class NSString, NSXPCConnection;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AFAnalyticsConnection : NSObject <AFAnalyticsServiceDelegate, AFAnalyticsService>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _numberOfEventsBeingSent;
    BOOL _needsCleanUpConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL needsCleanUpConnection; // @synthesize needsCleanUpConnection=_needsCleanUpConnection;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cleanUpConnection;
- (void)_cleanUpConnectionIfNeeded;
- (id)_connection;
- (void)_connectionInterrupted;
- (void)_connectionInvalidated;
- (void)_didFinishSendingEvents:(id)arg1;
- (void)_handleFailureCallbackForEvents:(id)arg1 error:(id)arg2 numberOfRetries:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_handleSuccessCallbackForEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_idleTimerFired;
- (void)_sendEvents:(id)arg1 numberOfRetries:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_startIdleTimer;
- (void)_stopIdleTimer;
- (void)_willStartSendingEvents:(id)arg1;
- (void)dealloc;
- (oneway void)flushStagedEventsWithReply:(CDUnknownBlockType)arg1;
- (id)init;
- (oneway void)stageEvent:(id)arg1;
- (oneway void)stageEvents:(id)arg1;
- (oneway void)stageEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

