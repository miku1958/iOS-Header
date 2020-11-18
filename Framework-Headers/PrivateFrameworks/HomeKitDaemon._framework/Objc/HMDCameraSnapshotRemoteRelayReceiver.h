//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotReceiver.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotIDSRelayReceiverDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraSnapshotReceiverProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraSnapshotIDSRelayReceiver, NSString;
@protocol HMDCameraSnapshotRemoteRelayReceiverDelegate;

@interface HMDCameraSnapshotRemoteRelayReceiver : HMDCameraSnapshotReceiver <HMDCameraGetSnapshotProtocol, HMDCameraSnapshotReceiverProtocol, HMDCameraSnapshotIDSRelayReceiverDelegate, HMFLogging>
{
    id<HMDCameraSnapshotRemoteRelayReceiverDelegate> _delegate;
    HMDCameraSnapshotIDSRelayReceiver *_relayReceiver;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HMDCameraSnapshotRemoteRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDCameraSnapshotIDSRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callDidSaveImageDelegateWithError:(id)arg1;
- (void)_callGettingImageDelegate:(id)arg1;
- (void)_getSnapshot;
- (void)dealloc;
- (void)getSnapshot;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8;
- (id)logIdentifier;
- (void)relayReceiver:(id)arg1 didReceiveFile:(id)arg2;
- (void)snapShotSendFailed;

@end

