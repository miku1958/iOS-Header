//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFObject-Protocol.h>

@class HMDAWDRemoteSessionMetric, HMDDevice, HMDSecureRemoteStreamInternal, HMDUser, HMFPairingIdentity, NSArray, NSDate, NSNumber, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDSecureRemoteStream : HMFMessageTransport <HMFLogging, HMFObject>
{
    BOOL _open;
    BOOL _idle;
    BOOL _supportsSharedIdentities;
    long long _qualityOfService;
    NSNumber *_maximumRemoteStreams;
    NSDate *_lastActivity;
    HMDDevice *_peerDevice;
    long long _role;
    NSUUID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMDUser *_peer;
    HMFPairingIdentity *_peerIdentity;
    HMDSecureRemoteStreamInternal *_remoteSession;
    HMDDevice *_currentDevice;
    HMDAWDRemoteSessionMetric *_metric;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, getter=isAuthenticated) BOOL authenticated;
@property (readonly, nonatomic) HMDDevice *currentDevice; // @synthesize currentDevice=_currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isIdle) BOOL idle; // @synthesize idle=_idle;
@property (readonly, copy) NSDate *lastActivity; // @synthesize lastActivity=_lastActivity;
@property (readonly, copy) NSNumber *maximumRemoteStreams; // @synthesize maximumRemoteStreams=_maximumRemoteStreams;
@property (readonly, nonatomic) HMDAWDRemoteSessionMetric *metric; // @synthesize metric=_metric;
@property (readonly, getter=isOpen) BOOL open; // @synthesize open=_open;
@property (strong, nonatomic) HMDUser *peer; // @synthesize peer=_peer;
@property (strong, nonatomic) HMDDevice *peerDevice; // @synthesize peerDevice=_peerDevice;
@property (strong, nonatomic) HMFPairingIdentity *peerIdentity; // @synthesize peerIdentity=_peerIdentity;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property (strong, nonatomic) HMDSecureRemoteStreamInternal *remoteSession; // @synthesize remoteSession=_remoteSession;
@property (readonly) long long role; // @synthesize role=_role;
@property (readonly, copy, nonatomic) NSUUID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;
@property (nonatomic) BOOL supportsSharedIdentities; // @synthesize supportsSharedIdentities=_supportsSharedIdentities;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)__handleAccountRemovedFromRegistry:(id)arg1;
- (void)__handleDeviceRemovedFromAccount:(id)arg1;
- (void)__handleRemovedIdentity:(id)arg1;
- (void)_closeWithError:(id)arg1;
- (void)_configureWithCompletionQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)closedWithError:(id)arg1;
- (void)dealloc;
- (void)handleCompletedMessage:(id)arg1 options:(id)arg2 responsePayload:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)handleSecureMessage:(id)arg1 fromTransport:(id)arg2;
- (id)initWithCurrentDevice:(id)arg1 peerDevice:(id)arg2 clientMode:(BOOL)arg3 sessionID:(id)arg4;
- (id)logIdentifier;
- (void)notifyClientsUpdatedIdle:(BOOL)arg1;
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)setIdle:(BOOL)arg1;
- (void)setMaximumRemoteStreams:(id)arg1;
- (void)setOpen:(BOOL)arg1;
- (void)startAndInvokeOnQueue:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)stop;

@end

