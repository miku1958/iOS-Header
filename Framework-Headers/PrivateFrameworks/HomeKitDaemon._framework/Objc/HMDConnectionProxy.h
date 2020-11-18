//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDaemonConnection-Protocol.h>

@class HMDApplicationRegistry, HMDProcessInfo, HMDXPCRequestTracker, HMFMessageDispatcher, NSDictionary, NSObject, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface HMDConnectionProxy : HMFObject <HMDaemonConnection>
{
    BOOL _entitledForAPIAccess;
    BOOL _entitledForSPIAccess;
    BOOL _entitledForBackgroundMode;
    BOOL _activated;
    NSXPCConnection *_xpcConnection;
    HMDProcessInfo *_processInfo;
    unsigned long long _entitlements;
    NSString *_clientName;
    HMFMessageDispatcher *_recvDispatcher;
    HMDXPCRequestTracker *_requestTracker;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSDictionary *_privateAccessEntitlement;
    HMDApplicationRegistry *_appRegistry;
}

@property (nonatomic) BOOL activated; // @synthesize activated=_activated;
@property (readonly, nonatomic) NSSet *activeRequests;
@property (weak, nonatomic) HMDApplicationRegistry *appRegistry; // @synthesize appRegistry=_appRegistry;
@property (readonly, nonatomic) NSString *applicationBundleIdentifier;
@property (readonly, nonatomic, getter=isAuthorizedForHomeDataAccess) BOOL authorizedForHomeDataAccess;
@property (readonly, nonatomic, getter=isAuthorizedForLocationAccess) BOOL authorizedForLocationAccess;
@property (readonly, nonatomic, getter=isAuthorizedForMicrophoneAccess) BOOL authorizedForMicrophoneAccess;
@property (strong, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property (readonly, nonatomic) int clientPid;
@property (readonly, nonatomic) NSString *companionAppBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *effectiveLocationBundleIdentifier;
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess; // @synthesize entitledForSPIAccess=_entitledForSPIAccess;
@property (readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (strong, nonatomic) NSDictionary *privateAccessEntitlement; // @synthesize privateAccessEntitlement=_privateAccessEntitlement;
@property (weak, nonatomic) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property (strong, nonatomic) HMFMessageDispatcher *recvDispatcher; // @synthesize recvDispatcher=_recvDispatcher;
@property (readonly, nonatomic) id remoteProxy;
@property (readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (unsigned long long)entitlementsForConnection:(id)arg1;
- (void).cxx_destruct;
- (id)_displayName;
- (void)_notifyOfNewIncomingClientMessage;
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

