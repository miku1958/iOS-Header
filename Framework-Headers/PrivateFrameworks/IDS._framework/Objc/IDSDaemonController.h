//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IDS/IDSDaemonProtocol-Protocol.h>

@class IDSDaemonControllerForwarder, IDSDaemonListener, IMLocalObject, IMRemoteObject, NSMutableDictionary, NSMutableSet, NSProtocolChecker, NSSet, NSString;
@protocol IDSDaemonProtocol, OS_dispatch_group, OS_dispatch_queue;

@interface IDSDaemonController : NSObject <IDSDaemonProtocol>
{
    id _delegate;
    IMRemoteObject<IDSDaemonProtocol> *_remoteObject;
    IDSDaemonControllerForwarder *_forwarder;
    IMLocalObject *_localObject;
    IDSDaemonListener *_daemonListener;
    NSProtocolChecker *_protocol;
    NSString *_listenerID;
    NSObject<OS_dispatch_queue> *_ivarQueue;
    NSObject<OS_dispatch_group> *_daemonConnectedGroup;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    unsigned long long _connectionID;
    NSMutableDictionary *_listenerServices;
    NSSet *_services;
    NSSet *_cachedServices;
    NSMutableDictionary *_listenerCommands;
    NSSet *_commands;
    NSSet *_cachedCommands;
    NSMutableDictionary *_listenerCapabilities;
    unsigned int _cachedCapabilities;
    unsigned int _lastUpdateCaps;
    BOOL _hasCheckedForDaemon;
    BOOL _preventReconnect;
    BOOL _acquiringDaemonConnection;
    BOOL _autoReconnect;
    BOOL _hasBeenSuspended;
    BOOL _fatalErrorOccured;
    int _curXPCMessagePriority;
    NSMutableSet *_notificationServices;
}

@property (setter=_setAutoReconnect:) BOOL _autoReconnect; // @synthesize _autoReconnect;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_remoteMessageQueue; // @synthesize _remoteMessageQueue;
@property (nonatomic) int curXPCMessagePriority; // @synthesize curXPCMessagePriority=_curXPCMessagePriority;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL isConnecting;
@property (readonly, nonatomic) IDSDaemonListener *listener; // @synthesize listener=_daemonListener;
@property (readonly, nonatomic) NSString *listenerID; // @synthesize listenerID=_listenerID;
@property (strong, nonatomic) IMRemoteObject<IDSDaemonProtocol> *remoteObject; // @synthesize remoteObject=_remoteObject;
@property (readonly) Class superclass;

+ (BOOL)_applicationWillTerminate;
+ (void)_blockUntilSendQueueIsEmpty;
+ (void)_setApplicationWillTerminate;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_agentDidLaunchNotification:(id)arg1;
- (void)_blockUntilSendQueueIsEmpty;
- (void)_connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)_disconnectFromDaemonWithForce:(BOOL)arg1;
- (void)_handleDaemonException:(id)arg1;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (BOOL)_makeConnectionWithLaunch:(BOOL)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_noteDisconnected;
- (void)_noteSetupComplete;
- (void)_performBlock:(CDUnknownBlockType)arg1;
- (void)_performBlock:(CDUnknownBlockType)arg1 wait:(BOOL)arg2;
- (void)_remoteObjectCleanup;
- (BOOL)_setCapabilities:(unsigned int)arg1;
- (BOOL)_setCommands:(id)arg1;
- (BOOL)_setServices:(id)arg1;
- (void)_setServices:(id)arg1 commands:(id)arg2 capabilities:(unsigned int)arg3;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2;
- (BOOL)addListenerID:(id)arg1 services:(id)arg2 commands:(id)arg3;
- (void)addedDelegateForService:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)blockUntilConnected;
- (unsigned int)capabilities;
- (unsigned int)capabilitiesForListenerID:(id)arg1;
- (id)commands;
- (id)commandsForListenerID:(id)arg1;
- (BOOL)connectToDaemon;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1;
- (BOOL)connectToDaemonWithLaunch:(BOOL)arg1 services:(id)arg2 commands:(id)arg3 capabilities:(unsigned int)arg4;
- (void)dealloc;
- (void)disconnectFromDaemon;
- (id)forwarderWithCompletion:(CDUnknownBlockType)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (id)init;
- (BOOL)isConnected;
- (id)localObject;
- (void)localObjectDiedNotification:(id)arg1;
- (BOOL)localObjectExists;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (void)removeListenerID:(id)arg1;
- (void)sendXPCObject:(id)arg1 objectContext:(id)arg2;
- (id)services;
- (id)servicesForListenerID:(id)arg1;
- (BOOL)setCapabilities:(unsigned int)arg1 forListenerID:(id)arg2 shouldLog:(BOOL)arg3;
- (BOOL)setCommands:(id)arg1 forListenerID:(id)arg2;
- (BOOL)setServices:(id)arg1 forListenerID:(id)arg2;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;

@end

