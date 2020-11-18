//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CacheDelete/CDService.h>

@class NSObject, NSXPCConnection;
@protocol OS_dispatch_source;

@interface CDXPCService : CDService
{
    BOOL _isConnected;
    BOOL _isInterrupted;
    BOOL _isInvalidated;
    NSXPCConnection *_xpcConnection;
    NSObject<OS_dispatch_source> *_watchdog_timer;
}

@property (nonatomic) BOOL isConnected; // @synthesize isConnected=_isConnected;
@property (nonatomic) BOOL isInterrupted; // @synthesize isInterrupted=_isInterrupted;
@property (nonatomic) BOOL isInvalidated; // @synthesize isInvalidated=_isInvalidated;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *watchdog_timer; // @synthesize watchdog_timer=_watchdog_timer;
@property (strong, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (void)_serviceCallback:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_serviceCancelPurge:(CDUnknownBlockType)arg1;
- (void)_serviceNotify:(id)arg1 replyBlock:(CDUnknownBlockType)arg2;
- (void)_servicePeriodic:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)_servicePurge:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)_servicePurgeable:(int)arg1 info:(id)arg2 replyBlock:(CDUnknownBlockType)arg3;
- (void)connectionWasInterrupted;
- (void)connectionWasInvalidated;
- (void)dealloc;
- (void)doWithProxy:(CDUnknownBlockType)arg1 failure:(CDUnknownBlockType)arg2;
- (id)initWithInfo:(id)arg1;
- (void)invalidateConnection;
- (void)obtainXPCConnection:(CDUnknownBlockType)arg1;
- (void)resetConnectionHandlers;
- (void)resumeConnection;
- (void)setCompletionBlock:(CDUnknownBlockType)arg1;
- (void)setInterruptionBlock:(CDUnknownBlockType)arg1;
- (void)setInvalidationBlock:(CDUnknownBlockType)arg1;

@end

