//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraStreamControlManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDCameraResidentMessageHandler, HMDCameraStreamManagerSession, HMDCameraStreamSnapshotHandler, HMDCameraSupportedConfigurationCache, HMDDeviceCapabilities, HMDDynamicActivityAttributionPublisher, HMDHAPAccessory, HMDPhoneCallObserver, HMDService, HMFMessageDispatcher, HMFNetMonitor, NSObject, NSString, NSUUID;
@protocol HMDCameraStreamControlMessageHandlerDataSource, OS_dispatch_queue;

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging>
{
    HMDCameraStreamManagerSession *_streamSession;
    HMDService *_streamManagementService;
    HMDPhoneCallObserver *_phoneCallObserver;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHAPAccessory *_accessory;
    NSUUID *_uniqueIdentifier;
    NSUUID *_profileUniqueIdentifier;
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMFNetMonitor *_networkMonitor;
    HMFMessageDispatcher *_messageDispatcher;
    HMDDynamicActivityAttributionPublisher *_dynamicActivityAttributionPublisher;
    id<HMDCameraStreamControlMessageHandlerDataSource> _dataSource;
    HMDDeviceCapabilities *_deviceCapabilities;
}

@property (readonly, weak) HMDHAPAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly) id<HMDCameraStreamControlMessageHandlerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDDeviceCapabilities *deviceCapabilities; // @synthesize deviceCapabilities=_deviceCapabilities;
@property (readonly) HMDDynamicActivityAttributionPublisher *dynamicActivityAttributionPublisher; // @synthesize dynamicActivityAttributionPublisher=_dynamicActivityAttributionPublisher;
@property (readonly) unsigned long long hash;
@property (strong) HMFMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (readonly) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property (readonly) HMDPhoneCallObserver *phoneCallObserver; // @synthesize phoneCallObserver=_phoneCallObserver;
@property (readonly) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property (readonly) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property (readonly) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property (strong) HMDCameraStreamManagerSession *streamSession; // @synthesize streamSession=_streamSession;
@property (readonly, copy) NSString *streamSessionID;
@property (readonly) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property (readonly, getter=isStreamingSessionInProgress) BOOL streamingSessionInProgress;
@property (readonly) Class superclass;
@property (readonly) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property (readonly) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_handleNegotiateMessage:(id)arg1;
- (void)_handleReconfigureMessage:(id)arg1;
- (void)_handleRemoteSetupMessage:(id)arg1;
- (void)_handleSetAudioState:(id)arg1;
- (void)_handleSetAudioVolume:(id)arg1;
- (void)_handleStartMessage:(id)arg1;
- (void)_handleStopMessage:(id)arg1;
- (BOOL)_isNegotiateMessage:(id)arg1;
- (BOOL)_isReconfigureMessage:(id)arg1;
- (BOOL)_isRemoteSetupMessage:(id)arg1;
- (BOOL)_isSetAudioStreamSettingMessage:(id)arg1;
- (BOOL)_isSetAudioVolumeMessage:(id)arg1;
- (BOOL)_isStartMessage:(id)arg1;
- (BOOL)_isStopMessage:(id)arg1;
- (void)_resetStreamSession:(id)arg1;
- (void)_sendStreamStoppedNotification:(id)arg1;
- (BOOL)_shouldHandleNegotiateMessage:(id)arg1 accessoryReachable:(BOOL)arg2;
- (BOOL)_shouldStopStreamSessionForProcessInfo:(id)arg1;
- (void)_stopStreamWithError:(id)arg1;
- (void)configureWithMessageDispatcher:(id)arg1;
- (void)dealloc;
- (void)handleAccessoryDisconnected:(id)arg1;
- (void)handleActivePhoneCallEstablishedNotification:(id)arg1;
- (void)handleCameraSettingsDidChangeNotification:(id)arg1;
- (void)handleMessage:(id)arg1;
- (void)handleProcessStateChange:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 accessory:(id)arg3 streamManagementService:(id)arg4 profileUniqueIdentifier:(id)arg5 networkMonitor:(id)arg6;
- (id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 accessory:(id)arg3 streamManagementService:(id)arg4 profileUniqueIdentifier:(id)arg5 networkMonitor:(id)arg6 residentMessageHandler:(id)arg7 phoneCallObserver:(id)arg8 deviceCapabilities:(id)arg9 dataSource:(id)arg10;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)setAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)streamControlManager:(id)arg1 didFail:(id)arg2;
- (void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2;
- (void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
- (void)streamControlManagerDidReconfigureStream:(id)arg1;
- (void)streamControlManagerDidSetupRemoteConnection:(id)arg1;
- (void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2;
- (void)timerDidFire:(id)arg1;

@end

