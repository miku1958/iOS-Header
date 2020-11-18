//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDaemonConnection-Protocol.h>

@class HMDApplicationRegistry, HMDProcessInfo, HMMessageDispatcher, NSDictionary, NSMutableSet, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface HMDConnectionProxy : NSObject <HMDaemonConnection>
{
    BOOL _entitledForAPIAccess;
    BOOL _entitledForSPIAccess;
    BOOL _entitledForBackgroundMode;
    BOOL _ready;
    BOOL _activated;
    NSXPCConnection *_xpcConnection;
    HMDProcessInfo *_processInfo;
    NSString *_clientName;
    HMMessageDispatcher *_recvDispatcher;
    NSMutableSet *_pendingRequests;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_group> *_activeMessageTracker;
    unsigned long long _activeMessageCount;
    NSDictionary *_privateAccessEntitlement;
    HMDApplicationRegistry *_appRegistry;
}

@property (nonatomic) BOOL activated; // @synthesize activated=_activated;
@property (nonatomic) unsigned long long activeMessageCount; // @synthesize activeMessageCount=_activeMessageCount;
@property (strong, nonatomic) NSObject<OS_dispatch_group> *activeMessageTracker; // @synthesize activeMessageTracker=_activeMessageTracker;
@property (readonly, nonatomic) NSSet *activeRequests;
@property (weak, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property (strong, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *effectiveLocationBundleIdentifier;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess; // @synthesize entitledForSPIAccess=_entitledForSPIAccess;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (strong, nonatomic) NSMutableSet *pendingRequests; // @synthesize pendingRequests=_pendingRequests;
@property (strong, nonatomic) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property (weak, nonatomic) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property (nonatomic) BOOL ready; // @synthesize ready=_ready;
@property (strong, nonatomic) HMMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property (readonly, nonatomic) id remoteProxy;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

- (void).cxx_destruct;
- (id)_displayName;
- (void)activate;
- (void)checkinWithName:(id)arg1 handleMessageWithName:(id)arg2 messageIdentifier:(id)arg3 messagePayload:(id)arg4 target:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)deactivate;
- (void)dealloc;
- (id)extractTeamIdentifier;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4;
- (void)handleMessageWithName:(id)arg1 messageIdentifier:(id)arg2 messagePayload:(id)arg3 target:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 recvDispatcher:(id)arg4 appRegistry:(id)arg5;
- (void)recheckinWithName:(id)arg1;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)arg1;

@end

