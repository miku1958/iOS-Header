//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDAWDRemoteSessionMetric, HMDDevice, HMDRemoteIdentityRegistry, HMDSecureRemoteStreamInternal, HMDUser, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject>
{
    BOOL _open;
    BOOL _idle;
    BOOL _supportsSharedIdentities;
    long long _qualityOfService;
    NSNumber *_maximumRemoteStreams;
    NSDate *_lastActivity;
    long long _role;
    HMDDevice *_peerDevice;
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDUser *_peer;
    HMDSecureRemoteStreamInternal *_remoteSession;
    HMDRemoteIdentityRegistry *_identityRegistry;
    HMDDevice *_currentDevice;
    HMDAWDRemoteSessionMetric *_metric;
}

@property (readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDRemoteIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property (getter=isIdle) BOOL idle; // @synthesize idle=_idle;
@property (readonly, copy) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
@property (readonly, copy) NSNumber *maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property (readonly, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property (getter=isOpen) BOOL open; // @synthesize open=_open;
@property (strong, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property (readonly, nonatomic) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // @synthesize remoteSession=_remoteSession;
@property (readonly) long long role; // @synthesize role=_role;
@property (readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_closeWithError:(id)arg1;
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closedWithError:(id)arg1;
- (void)dealloc;
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 identityRegistry:(id)arg3 clientMode:(BOOL)arg4 sessionID:(id)arg5;
- (id)logIdentifier;
- (void)notifyClientsUpdatedIdle:(BOOL)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setMaximumRemoteStreams:(id)arg1;
- (id)shortDescription;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stop;

@end
