//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOBaseLogAdaptor.h>

@class NSLock, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface GEOXPCClientLogAdaptor : GEOBaseLogAdaptor
{
    NSObject<OS_dispatch_queue> *_serverConnectionQueue;
    CDUnknownBlockType _xpcConnectionEstablishedCallback;
    BOOL _flushLogsFailed;
    NSMutableArray *_failedLogMessages;
    NSLock *_failedLogMessagesLock;
}

- (void)_createAndSendXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_handleFailedXPCMessageWithName:(id)arg1 userInfo:(id)arg2;
- (void)_resendFailedXPCMessages;
- (void)dealloc;
- (void)disableLogMsgInstrumentation;
- (void)enableLogMsgInstrumentation;
- (void)flushLogs;
- (id)init;
- (void)queueLogMessage:(id)arg1;
- (void)registerLogMsgState:(id)arg1;
- (void)setupXPCRemoteAdatorsWithOptions:(id)arg1 connectionEstablishedCallback:(CDUnknownBlockType)arg2;
- (void)unregisterLogMsgStateOfType:(int)arg1;

@end

