//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NEAgentSession, NSObject, NSString;
@protocol OS_xpc_object;

@protocol NEAgentSessionDelegate
- (void)handleCancel;
- (void)handleDisposeWithCompletionHandler:(void (^)(void))arg1;
- (void)handleInitWithCompletionHandler:(void (^)(BOOL))arg1;
- (void)handleMessage:(NSObject<OS_xpc_object> *)arg1 withOuterMessage:(NSObject<OS_xpc_object> *)arg2;
- (id)initWithSession:(NEAgentSession *)arg1 pluginType:(NSString *)arg2 primaryPluginType:(NSString *)arg3 pluginBundle:(struct __CFBundle *)arg4 applicationPath:(NSString *)arg5;
@end

