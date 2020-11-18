//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMDaemonListener, IMLocalObject, IMRemoteObject, NSArray, NSLock, NSMutableArray, NSMutableDictionary, NSProtocolChecker, NSRecursiveLock, NSString;
@protocol IMRemoteDaemonProtocol, OS_dispatch_queue;

@interface IMDaemonController : NSObject
{
    id _delegate;
    IMRemoteObject<IMRemoteDaemonProtocol> *_remoteObject;
    NSMutableDictionary *_listenerMap;
    IMLocalObject *_localObject;
    IMDaemonListener *_daemonListener;
    NSMutableArray *_services;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSRecursiveLock *_connectionLock;
    NSArray *_servicesToAllow;
    NSArray *_servicesToDeny;
    struct __CFRunLoopSource *_runLoopSource;
    NSLock *_blockingLock;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _inBlockingConnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _blocksConnectionAtResume;
    BOOL _hasBeenSuspended;
    unsigned int _gMyFZListenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdatedCapabilities;
    BOOL _requestingConnection;
    NSMutableDictionary *_requestQOSClassCompletionBlocks;
    CDUnknownBlockType _prewarmingBlock;
}

@property (setter=_setAutoReconnect:) BOOL _autoReconnect; // @synthesize _autoReconnect;
@property (nonatomic, setter=_setBlocksConnectionAtResume:) BOOL _blocksConnectionAtResume; // @synthesize _blocksConnectionAtResume;
@property (setter=__setCapabilities:) unsigned int _capabilities; // @synthesize _capabilities=_gMyFZListenerCapabilities;
@property (strong, nonatomic, setter=_setListenerID:) NSString *_listenerID; // @synthesize _listenerID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property (strong, setter=_setServicesToAllow:) NSArray *_servicesToAllow; // @synthesize _servicesToAllow;
@property (strong, setter=_setServicesToDeny:) NSArray *_servicesToDeny; // @synthesize _servicesToDeny;
@property (readonly, nonatomic) unsigned int capabilities;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL isConnected;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) IMDaemonListener *listener; // @synthesize listener=_daemonListener;
@property (copy, nonatomic) CDUnknownBlockType prewarmingBlock; // @synthesize prewarmingBlock=_prewarmingBlock;
@property (strong, nonatomic) NSMutableDictionary *requestQOSClassCompletionBlocks; // @synthesize requestQOSClassCompletionBlocks=_requestQOSClassCompletionBlocks;
@property (readonly, nonatomic, getter=isRequestingConnection) BOOL requestingConnection; // @synthesize requestingConnection=_requestingConnection;

+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (id)sharedController;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (BOOL)_acquiringDaemonConnection;
- (void)_addressBookChanged:(id)arg1;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2;
- (double)_connectionTimeout;
- (void)_disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_handleDaemonException:(id)arg1;
- (void)_handleReceivedQOSClassWhileServicingRequestsNotification:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_noteSetupComplete;
- (id)_remoteObject;
- (void)_remoteObjectCleanup;
- (void)_setCapabilities:(unsigned int)arg1;
- (BOOL)addListenerID:(id)arg1 capabilities:(unsigned int)arg2;
- (void)blockUntilConnected;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 capabilities:(unsigned int)arg2 blockUntilConnected:(BOOL)arg3;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (void)disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (id)init;
- (void)killDaemon;
- (void)listener:(id)arg1 setListenerCapabilities:(unsigned int)arg2;
- (void)listener:(id)arg1 setValue:(id)arg2 ofPersistentProperty:(id)arg3;
- (void)listener:(id)arg1 setValue:(id)arg2 ofProperty:(id)arg3;
- (void)localObjectDiedNotification:(id)arg1;
- (BOOL)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)removeListenerID:(id)arg1;
- (void)requestQOSClassOfAgentWhileServicingRequests:(CDUnknownBlockType)arg1;
- (void)sendABInformationToDaemon;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2;
- (void)setDaemonLogsOutWithoutStatusListeners:(BOOL)arg1;
- (void)setDaemonTerminatesWithoutListeners:(BOOL)arg1;
- (void)setMyPicture:(id)arg1 smallPictureData:(id)arg2;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2;
- (void)setMyStatus:(unsigned long long)arg1 message:(id)arg2 forAccount:(id)arg3;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;

@end

