//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotSender.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSStreamInitiatorDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotLocalDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotSenderProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSStreamInitiator, HMDCameraSnapshotLocal, NSString;
@protocol HMDCameraSnapshotRemoteStreamSenderDelegate;

@interface HMDCameraSnapshotRemoteStreamSender : HMDCameraSnapshotSender <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotSenderProtocol, HMDCameraSnapshotLocalDelegate, HMDCameraSnapshotIDSStreamInitiatorDelegate, HMFLogging>
{
    HMDCameraSnapshotLocal *_snapshotLocal;
    id<HMDCameraSnapshotRemoteStreamSenderDelegate> _delegate;
    HMDCameraSnapshotIDSStreamInitiator *_streamInitiator;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotRemoteStreamSenderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
@property (readonly, nonatomic) HMDCameraSnapshotIDSStreamInitiator *streamInitiator; // @synthesize streamInitiator=_streamInitiator;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callDidCompleteSendImageDelegate:(id)arg1;
- (void)_callDidStartCaptureImageDelegate:(id)arg1;
- (void)dealloc;
- (void)getSnapshot:(unsigned long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 device:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9;
- (id)logIdentifier;
- (void)sendSnapshotAtPath:(id)arg1;
- (void)snapShotTransferComplete;
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;
- (void)streamInitiator:(id)arg1 didFailToSendFile:(id)arg2;

@end

