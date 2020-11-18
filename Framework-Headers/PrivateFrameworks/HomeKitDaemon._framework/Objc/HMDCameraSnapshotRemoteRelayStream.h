//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotRemoteRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotRemoteStreamSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotSenderProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotRemoteStreamSender, NSObject, NSString;
@protocol HMDCameraSnapshotRemoteRelayStreamDelegate, OS_dispatch_queue;

@interface HMDCameraSnapshotRemoteRelayStream : HMFObject <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotRemoteStreamSenderDelegate, HMDCameraSnapshotRemoteRelayReceiverDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSnapshotRemoteStreamSender *_streamSender;
    HMDCameraSnapshotRemoteRelayReceiver *_relayReceiver;
    id<HMDCameraSnapshotRemoteRelayStreamDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteRelayStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property (readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender; // @synthesize streamSender=_streamSender;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)_sendImageSendFailure:(id)arg1;
- (void)dealloc;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9 residentMessageHandler:(id)arg10;
- (id)logIdentifier;
- (void)snapShotSendFailed:(id)arg1;
- (void)snapShotTransferComplete;
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;

@end

