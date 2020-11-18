//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMDaemonConnection-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDApplicationRegistry, HMDProcessInfo, HMDXPCRequestTracker, NSObject, NSSet, NSString, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface HMDXPCClientConnection : HMFMessageTransport <HMDaemonConnection, HMFLogging>
{
    BOOL _activated;
    BOOL _entitledForAPIAccess;
    BOOL _entitledForBackgroundMode;
    BOOL _entitledForCameraClipsAccess;
    BOOL _entitledForMultiUserSetupAccess;
    NSXPCConnection *_xpcConnection;
    HMDProcessInfo *_processInfo;
    unsigned long long _entitlements;
    NSString *_clientName;
    HMDXPCRequestTracker *_requestTracker;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDApplicationRegistry *_appRegistry;
}

@property (nonatomic, getter=isActivated) BOOL activated; // @synthesize activated=_activated;
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
@property (readonly, nonatomic, getter=isEntitledForAPIAccess) BOOL entitledForAPIAccess; // @synthesize entitledForAPIAccess=_entitledForAPIAccess;
@property (readonly, nonatomic, getter=isEntitledForBackgroundMode) BOOL entitledForBackgroundMode; // @synthesize entitledForBackgroundMode=_entitledForBackgroundMode;
@property (readonly, nonatomic, getter=isEntitledForCameraClipsAccess) BOOL entitledForCameraClipsAccess; // @synthesize entitledForCameraClipsAccess=_entitledForCameraClipsAccess;
@property (readonly, nonatomic, getter=isEntitledForHomeLocationAccess) BOOL entitledForHomeLocationAccess;
@property (readonly, nonatomic, getter=isEntitledForMultiUserSetupAccess) BOOL entitledForMultiUserSetupAccess; // @synthesize entitledForMultiUserSetupAccess=_entitledForMultiUserSetupAccess;
@property (readonly, getter=isEntitledForSPIAccess) BOOL entitledForSPIAccess;
@property (readonly, nonatomic, getter=isEntitledForShortcutsAutomationAccess) BOOL entitledForShortcutsAutomationAccess;
@property (readonly, nonatomic, getter=isEntitledToProvideAccessorySetupPayload) BOOL entitledToProvideAccessorySetupPayload;
@property (readonly) unsigned long long entitlements; // @synthesize entitlements=_entitlements;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *name;
@property (readonly, getter=isPlatformBinary) BOOL platformBinary;
@property (weak, nonatomic) HMDProcessInfo *processInfo; // @synthesize processInfo=_processInfo;
@property (readonly, nonatomic) id remoteProxy;
@property (readonly, nonatomic) HMDXPCRequestTracker *requestTracker; // @synthesize requestTracker=_requestTracker;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *teamIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (weak, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;

+ (unsigned long long)entitlementsForConnection:(id)arg1;
+ (id)logCategory;
- (void).cxx_destruct;
- (id)_displayName;
- (id)_extractBundleIdentifier;
- (void)_notifyOfNewIncomingClientMessage;
- (void)activate;
- (BOOL)canSendMessage:(id)arg1;
- (void)checkinWithName:(id)arg1;
- (void)deactivate;
- (void)dealloc;
- (id)extractTeamIdentifier;
- (void)handleMessage:(id)arg1;
- (void)handleMessage:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;
- (id)initWithConnection:(id)arg1 queue:(id)arg2 activeMessageTracker:(id)arg3 appRegistry:(id)arg4;
- (id)logIdentifier;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldSendResponseForMessageIdentifier:(id)arg1;

@end
