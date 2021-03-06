//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CUTWeakReference, NSArray, NSData, NSMutableArray, NSMutableDictionary, NSString;
@protocol APSConnectionDelegate, OS_dispatch_queue, OS_dispatch_source, OS_xpc_object;

@interface APSConnection : NSObject
{
    CUTWeakReference *_delegateReference;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSString *_environmentName;
    NSData *_publicToken;
    unsigned long long _messageSize;
    unsigned long long _largeMessageSize;
    NSString *_connectionPortName;
    unsigned int _connectionPort;
    BOOL _enableCriticalReliability;
    BOOL _enableStatusNotifications;
    BOOL _isConnected;
    BOOL _usesAppLaunchStats;
    NSMutableDictionary *_idsToOutgoingMessages;
    unsigned long long _nextOutgoingMessageID;
    NSObject<OS_dispatch_queue> *_machQueue;
    NSObject<OS_dispatch_source> *_mach_source;
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    BOOL _everHadDelegate;
    NSMutableArray *_queuedDelegateBlocks;
    NSString *_processName;
    double _reconnectDelay;
    BOOL _isReconnectScheduled;
    BOOL _isDisconnected;
    BOOL _isShutdown;
    BOOL _isDeallocing;
    NSArray *_enabledTopics;
    NSArray *_ignoredTopics;
    NSArray *_opportunisticTopics;
    NSArray *_nonWakingTopics;
}

@property (nonatomic) id<APSConnectionDelegate> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (strong, nonatomic, setter=_setEnabledTopics:) NSArray *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property (strong, nonatomic, setter=_setIgnoredTopics:) NSArray *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property (readonly, nonatomic) BOOL isShutdown; // @synthesize isShutdown=_isShutdown;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *ivarQueue; // @synthesize ivarQueue=_ivarQueue;
@property (nonatomic) unsigned long long largeMessageSize;
@property (nonatomic) unsigned long long messageSize;
@property (strong, nonatomic, setter=_setNonWakingTopics:) NSArray *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property (strong, nonatomic, setter=_setOpportunisticTopics:) NSArray *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property (readonly, strong, nonatomic) NSData *publicToken;
@property (nonatomic) BOOL usesAppLaunchStats;

+ (void)_blockingXPCCallWithArgumentBlock:(CDUnknownBlockType)arg1 resultHandler:(CDUnknownBlockType)arg2;
+ (id)_createXPCConnectionWithQueueName:(const char *)arg1;
+ (void)_flushIdentityCache;
+ (void)_safelyCancelAndReleaseConnection:(id)arg1;
+ (void)_setTokenState;
+ (id)connectionsDebuggingState;
+ (struct __SecIdentity *)copyIdentity;
+ (id)geoRegion;
+ (void)invalidateDeviceIdentity;
+ (BOOL)isValidEnvironment:(id)arg1;
+ (double)keepAliveIntervalForEnvironmentName:(id)arg1;
+ (void)notifySafeToSendFilter;
+ (void)requestCourierConnection;
+ (double)serverTime;
- (void).cxx_destruct;
- (void)_addEnableCriticalReliabilityToXPCMessage:(id)arg1;
- (void)_addEnableStatusNotificationsToXPCMessage:(id)arg1;
- (void)_addUsesAppLaunchStatsToXPCMessage:(id)arg1;
- (void)_asyncOnDelegateQueueWithBlock:(CDUnknownBlockType)arg1;
- (void)_cancelConnection;
- (void)_cancelConnectionOnIvarQueue;
- (void)_connectIfNecessary;
- (void)_connectIfNecessaryOnIvarQueue;
- (void)_deliverConnectionStatusChange:(BOOL)arg1;
- (void)_deliverConnectionStatusFromDealloc:(BOOL)arg1;
- (void)_deliverDidReconnectOnIvarQueue;
- (void)_deliverMessage:(id)arg1;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 checkpointTraceData:(id)arg2 error:(id)arg3 sendRTT:(unsigned long long)arg4 ackTimestamp:(unsigned long long)arg5;
- (void)_deliverOutgoingMessageResultWithID:(unsigned long long)arg1 error:(id)arg2 sendRTT:(unsigned long long)arg3;
- (void)_deliverPublicToken:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_deliverPublicTokenOnIvarQueue:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_deliverToken:(id)arg1 forTopic:(id)arg2 identifier:(id)arg3;
- (void)_disconnect;
- (void)_disconnectFromDealloc;
- (void)_disconnectOnIvarQueue;
- (void)_dispatch_async_to_ivarQueue:(CDUnknownBlockType)arg1;
- (void)_handleEvent:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (id)_initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 enablePushDuringSleep:(BOOL)arg3 queue:(id)arg4;
- (id)_listForIdentifierOnIvarQueue:(unsigned long long)arg1;
- (void)_noteDisconnectedFromDaemonOnIvarQueue;
- (void)_onIvarQueue_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 sendToDaemon:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_reconnectIfNecessaryOnIvarQueueAfterDelay;
- (void)_sendOutgoingMessage:(id)arg1 fake:(BOOL)arg2;
- (void)_setEnableCriticalReliability:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setEnableStatusNotifications:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 sendToDaemon:(BOOL)arg5 completion:(CDUnknownBlockType)arg6;
- (void)_setUsesAppLaunchStats:(BOOL)arg1 sendToDaemon:(BOOL)arg2;
- (void)_shutdownFromDealloc;
- (void)_shutdownOnIvarQueue;
- (id)_topicListNameForLogging:(unsigned long long)arg1;
- (void)cancelOutgoingMessage:(id)arg1;
- (void)confirmReceiptForMessage:(id)arg1;
- (void)dealloc;
- (BOOL)hasIdentity;
- (id)initWithEnvironmentName:(id)arg1;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2;
- (id)initWithEnvironmentName:(id)arg1 namedDelegatePort:(id)arg2 queue:(id)arg3;
- (id)initWithEnvironmentName:(id)arg1 queue:(id)arg2;
- (void)invalidateTokenForTopic:(id)arg1 identifier:(id)arg2;
- (BOOL)isConnected;
- (void)moveTopic:(id)arg1 fromList:(unsigned long long)arg2 toList:(unsigned long long)arg3;
- (void)removeFromRunLoop;
- (void)requestKeepAlive;
- (void)requestTokenForTopic:(id)arg1 identifier:(id)arg2;
- (void)scheduleInRunLoop:(id)arg1;
- (void)sendFakeMessage:(id)arg1;
- (void)sendOutgoingMessage:(id)arg1;
- (void)setEnableCriticalReliability:(BOOL)arg1;
- (void)setEnableStatusNotifications:(BOOL)arg1;
- (void)setEnabledTopics:(id)arg1;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)setIgnoredTopics:(id)arg1;
- (void)setNonWakingTopics:(id)arg1;
- (void)setOpportunisticTopics:(id)arg1;
- (void)shutdown;

@end

