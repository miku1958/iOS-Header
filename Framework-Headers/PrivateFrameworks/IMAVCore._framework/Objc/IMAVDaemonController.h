//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IMAVDaemonListener, IMLocalObject, IMRemoteObject, NSLock, NSMutableArray, NSString;
@protocol IMAVDaemonProtocol, OS_dispatch_queue;

@interface IMAVDaemonController : NSObject
{
    IMRemoteObject<IMAVDaemonProtocol> *_remoteObject;
    IMLocalObject *_localObject;
    IMAVDaemonListener *_daemonListener;
    NSString *_listenerID;
    NSMutableArray *_listeners;
    NSLock *_connectionLock;
    NSObject<OS_dispatch_queue> *_listenerLockQueue;
    NSObject<OS_dispatch_queue> *_remoteDaemonLockQueue;
    NSObject<OS_dispatch_queue> *_remoteMessageQueue;
    NSObject<OS_dispatch_queue> *_localObjectLockQueue;
    struct __CFRunLoopSource *_runLoopSource;
    BOOL _hasCheckedForDaemon;
    BOOL _acquiringDaemonConnection;
}

@property (readonly, nonatomic) IMAVDaemonListener *listener;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)__isLocalObjectValidOnQueue:(id)arg1;
- (BOOL)__isRemoteObjectValidOnQueue:(id)arg1;
- (void)_cleanUpConnection;
- (void)_connectToDaemon;
- (void)_disconnectFromDaemon;
- (void)_listenerSetUpdated;
- (void)_localObjectCleanup;
- (void)_localObjectDiedNotification:(id)arg1;
- (BOOL)_makeConnectionWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_noteSetupComplete;
- (void)_remoteObjectCleanup;
- (void)_remoteObjectDiedNotification:(id)arg1;
- (BOOL)addListenerID:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (BOOL)hasListenerForID:(id)arg1;
- (id)init;
- (BOOL)isConnected;
- (BOOL)isConnecting;
- (void)localObjectDiedNotification:(id)arg1;
- (BOOL)localObjectExists;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)remoteObjectDiedNotification:(id)arg1;
- (BOOL)remoteObjectExists;
- (BOOL)removeListenerID:(id)arg1;

@end

