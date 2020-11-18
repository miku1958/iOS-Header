//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HAPRemoteSession, HMDAWDRemoteSessionMetric, HMDDevice, HMDRemoteIdentityRegistry, HMDUser, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSecureSession : HMFMessageTransport
{
    BOOL _clientMode;
    BOOL _supportsSharedIdentities;
    HMDDevice *_peerDevice;
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDUser *_peer;
    HAPRemoteSession *_hapRemoteSession;
    HMDRemoteIdentityRegistry *_identityRegistry;
    CDUnknownBlockType _stoppedNotificationHandler;
    HMDDevice *_currentDevice;
    HMDAWDRemoteSessionMetric *_metric;
}

@property (nonatomic) BOOL clientMode; // @synthesize clientMode=_clientMode;
@property (readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property (strong, nonatomic) HAPRemoteSession *hapRemoteSession; // @synthesize hapRemoteSession=_hapRemoteSession;
@property (strong, nonatomic) HMDRemoteIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property (readonly, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property (strong, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property (readonly, nonatomic) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property (copy, nonatomic) CDUnknownBlockType sessionStoppedNotificationHandler;
@property (copy, nonatomic) CDUnknownBlockType stoppedNotificationHandler; // @synthesize stoppedNotificationHandler=_stoppedNotificationHandler;
@property (nonatomic) BOOL supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)_configureAsClient:(BOOL)arg1 queue:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)closedWithError:(id)arg1;
- (void)dealloc;
- (void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 identityRegistry:(id)arg3 clientMode:(BOOL)arg4 sessionID:(id)arg5;
- (id)logIdentifier;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stop;

@end
