//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDMPCSessionDataMediaProfileSource-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>

@class HMDHome, HMDMPCSessionController, HMDResidentDevice, NSObject, NSString, NSUUID;
@protocol HMDMediaActionRouterDataSource, OS_dispatch_queue;

@interface HMDMediaActionRouter : HMFObject <HMDMPCSessionDataMediaProfileSource, HMFMessageReceiver>
{
    BOOL _shouldExecuteOnCurrentDevice;
    id<HMDMediaActionRouterDataSource> _dataSource;
    HMDResidentDevice *_targetResidentDeviceOverride;
    HMDMPCSessionController *_mpcSessionController;
}

@property (readonly, weak, nonatomic) id<HMDMediaActionRouterDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) HMDMPCSessionController *mpcSessionController; // @synthesize mpcSessionController=_mpcSessionController;
@property (readonly, nonatomic) BOOL shouldExecuteOnCurrentDevice; // @synthesize shouldExecuteOnCurrentDevice=_shouldExecuteOnCurrentDevice;
@property (readonly) Class superclass;
@property (weak, nonatomic) HMDResidentDevice *targetResidentDeviceOverride; // @synthesize targetResidentDeviceOverride=_targetResidentDeviceOverride;

- (void).cxx_destruct;
- (void)_registerForMessages;
- (void)dealloc;
- (void)executeMediaActionWithSessionData:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleNonResidentMediaActionExecutionWithSessionData:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithDataSource:(id)arg1;
- (id)mediaProfileWithUUID:(id)arg1;
- (void)routeMediaActionForExecution:(id)arg1 source:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)routeMessage:(id)arg1;
- (void)routeSessionDataForExecution:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMediaActionMessageToCompanionWithSessionData:(id)arg1 encodePlaybackArchive:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendMediaActionMessageToDevice:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 canForwardMessage:(BOOL)arg4 completion:(CDUnknownBlockType)arg5;
- (void)sendMediaActionMessageToResident:(id)arg1 sessionData:(id)arg2 encodePlaybackArchive:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (id)targetResidentDeviceForExecutingMediaActionWithProfiles:(id)arg1;

@end

