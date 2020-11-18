//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDCameraSessionID, HMDCameraStreamMetrics, HMDCameraStreamSnapshotHandler, HMDService, NSNumber, NSObject, NSString;
@protocol HMDCameraStreamControlManagerDelegate, OS_dispatch_queue;

@interface HMDCameraStreamControlManager : HMFObject <HMFLogging>
{
    id<HMDCameraStreamControlManagerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDAccessory *_accessory;
    HMDService *_streamManagementService;
    NSNumber *_slotIdentifier;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSessionID *_sessionID;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMDCameraStreamMetrics *_streamMetrics;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDCameraStreamControlManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) NSNumber *slotIdentifier; // @synthesize slotIdentifier=_slotIdentifier;
@property (readonly, nonatomic) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property (readonly, nonatomic) HMDCameraStreamMetrics *streamMetrics; // @synthesize streamMetrics=_streamMetrics;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callStreamFirstFrameReceived:(unsigned long long)arg1 aspectRatio:(id)arg2 slotIdentifier:(id)arg3;
- (void)_callStreamNegotiated:(id)arg1;
- (void)_callStreamReconfigured;
- (void)_callStreamRemoteConnectionSetup;
- (void)_callStreamStarted;
- (void)_callStreamStopped:(id)arg1;
- (void)_cleanUpStreamSession:(id)arg1;
- (void)_reportError:(id)arg1;
- (void)_reportErrorCode:(long long)arg1;
- (void)_reportInternalErrorCode:(long long)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 isLocal:(BOOL)arg8;
- (id)logIdentifier;
- (id)managerProtocol;

@end

