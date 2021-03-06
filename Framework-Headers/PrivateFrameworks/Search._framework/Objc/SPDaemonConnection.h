//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SPXPCConnection;
@protocol OS_dispatch_queue;

@interface SPDaemonConnection : NSObject
{
    SPXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSString *_daemonName;
    struct __CFDictionary *_runningQueries;
}

@property (strong, nonatomic) NSString *daemonName; // @synthesize daemonName=_daemonName;
@property (nonatomic) struct __CFDictionary *runningQueries; // @synthesize runningQueries=_runningQueries;

+ (id)sharedBackgroundConnection;
+ (id)sharedConnection;
- (void).cxx_destruct;
- (id)_connection;
- (void)_resetConnection;
- (void)_sendFeedbackMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)_sendMessage:(id)arg1 object:(id)arg2 info:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)activate;
- (void)activate:(CDUnknownBlockType)arg1;
- (void)barrierOnXPC:(CDUnknownBlockType)arg1;
- (void)cancelQuery:(id)arg1;
- (void)clearInput:(id)arg1;
- (id)connectionQueue;
- (void)deactivate;
- (void)dealloc;
- (id)init;
- (id)initWithDaemonName:(id)arg1 qos:(unsigned int)arg2;
- (void)preheat;
- (void)requestParsecParametersWithReply:(CDUnknownBlockType)arg1;
- (void)retrieveFirstTimeExperienceTextWithReply:(CDUnknownBlockType)arg1;
- (void)sendApps:(id)arg1;
- (void)sendMessageForToken:(id)arg1;
- (void)sendSFFeedback:(id)arg1 type:(long long)arg2 queryId:(unsigned long long)arg3;
- (id)startQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;

@end

