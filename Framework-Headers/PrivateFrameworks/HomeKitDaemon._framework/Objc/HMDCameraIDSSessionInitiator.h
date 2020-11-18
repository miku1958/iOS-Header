//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraIDSSessionHandler.h>

#import <HomeKitDaemon/HMDCameraPowerAssertionProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraRemoteStreamSenderProtocol-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class AVCPacketRelay, HMDCameraNetworkConfig, HMDCameraSessionID, HMDDevice, HMFOSTransaction, NSNumber, NSObject, NSString;
@protocol HMDCameraIDSSessionInitiatorDelegate, OS_dispatch_queue;

@interface HMDCameraIDSSessionInitiator : HMDCameraIDSSessionHandler <IDSServiceDelegate, IDSSessionDelegate, HMDCameraRemoteStreamSenderProtocol, HMDCameraPowerAssertionProtocol>
{
    id<HMDCameraIDSSessionInitiatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDDevice *_device;
    HMDCameraNetworkConfig *_localNetworkConfig;
    AVCPacketRelay *_packetRelay;
    HMFOSTransaction *_packetRelayTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDCameraIDSSessionInitiatorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property (readonly, nonatomic) NSNumber *mtu;
@property (strong, nonatomic) AVCPacketRelay *packetRelay; // @synthesize packetRelay=_packetRelay;
@property (strong, nonatomic) HMFOSTransaction *packetRelayTransaction; // @synthesize packetRelayTransaction=_packetRelayTransaction;
@property (readonly, nonatomic) HMDCameraSessionID *sessionID;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callSessionEnded:(id)arg1;
- (void)_callSessionStarted:(id)arg1;
- (void)_sendInvitation;
- (void)_startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 localNetworkConfig:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)logIdentifier;
- (void)openRelaySession;
- (void)session:(id)arg1 receivedInvitationAcceptFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationCancelFromID:(id)arg2;
- (void)session:(id)arg1 receivedInvitationDeclineFromID:(id)arg2;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;
- (void)startPacketRelayWithVideoSocket:(int)arg1 videoNetworkConfig:(id)arg2 cameraVideoSSRC:(unsigned int)arg3 audioSocket:(int)arg4 audioNetworkConfig:(id)arg5 cameraAudioSSRC:(unsigned int)arg6;

@end

