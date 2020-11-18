//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraSettingsControlManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccessory, HMDCameraResidentMessageHandler, HMDCameraSettingsControlManager, HMDCameraStreamManagerSession, HMDCameraStreamSnapshotHandler, HMDCameraSupportedConfigurationCache, HMDNotificationRegistration, HMDService, HMFMessageDispatcher, HMFNetMonitor, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamControlMessageHandler : HMFObject <HMFTimerDelegate, HMDCameraSettingsControlManagerDelegate, HMDCameraStreamControlManagerDelegate, HMFLogging>
{
    HMDCameraStreamManagerSession *_streamSession;
    HMDService *_streamManagementService;
    HMDCameraSettingsControlManager *_streamStatusManager;
    HMDNotificationRegistration *_notificationRegistration;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDAccessory *_accessory;
    CDUnknownBlockType _messageSender;
    NSUUID *_uniqueIdentifier;
    NSUUID *_profileUniqueIdentifier;
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    HMDCameraSettingsControlManager *_settingsControlManager;
    HMFNetMonitor *_networkMonitor;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CDUnknownBlockType messageSender; // @synthesize messageSender=_messageSender;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property (readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property (readonly, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property (readonly, nonatomic) HMDCameraSettingsControlManager *settingsControlManager; // @synthesize settingsControlManager=_settingsControlManager;
@property (readonly, nonatomic) HMDService *streamManagementService; // @synthesize streamManagementService=_streamManagementService;
@property (strong, nonatomic) HMDCameraStreamManagerSession *streamSession; // @synthesize streamSession=_streamSession;
@property (readonly, copy, nonatomic) NSString *streamSessionID;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property (readonly, nonatomic) HMDCameraSettingsControlManager *streamStatusManager; // @synthesize streamStatusManager=_streamStatusManager;
@property (readonly, nonatomic) unsigned long long streamingStatus;
@property (readonly) Class superclass;
@property (strong, nonatomic) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_handleNegotiateMessage:(id)arg1;
- (void)_handleReconfigureMessage:(id)arg1;
- (void)_handleRemoteSetupMessage:(id)arg1;
- (void)_handleSetAudioState:(id)arg1;
- (void)_handleStartMessage:(id)arg1;
- (void)_handleStopMessage:(id)arg1;
- (BOOL)_isNegotiateMessage:(id)arg1;
- (BOOL)_isReconfigureMessage:(id)arg1;
- (BOOL)_isRemoteSetupMessage:(id)arg1;
- (BOOL)_isSetAudioStreamSettingMessage:(id)arg1;
- (BOOL)_isStartMessage:(id)arg1;
- (BOOL)_isStopMessage:(id)arg1;
- (void)_resetCurrentStreamState:(id)arg1;
- (void)_sendStreamStoppedNotification:(id)arg1;
- (void)_stopStream:(id)arg1;
- (void)dealloc;
- (void)handleAccessoryIsNotReachable:(id)arg1;
- (void)handleActivePhoneCallEstablishedNotification:(id)arg1;
- (void)handleForegroundAppsNotification:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)initWithWorkQueue:(id)arg1 streamSnapshotHandler:(id)arg2 messageSender:(CDUnknownBlockType)arg3 accessory:(id)arg4 streamManagementService:(id)arg5 msgDispatcher:(id)arg6 profileUniqueIdentifier:(id)arg7 networkMonitor:(id)arg8 residentMessageHandler:(id)arg9;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)registerForMessages;
- (void)streamControlManager:(id)arg1 didFail:(id)arg2;
- (void)streamControlManagerDidNegotiateStream:(id)arg1 selectedParameters:(id)arg2;
- (void)streamControlManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2 aspectRatio:(id)arg3 slotIdentifier:(id)arg4;
- (void)streamControlManagerDidReconfigureStream:(id)arg1;
- (void)streamControlManagerDidSetupRemoteConnection:(id)arg1;
- (void)streamControlManagerDidStartStream:(id)arg1 slotIdentifier:(id)arg2;
- (void)streamControlManagerDidStopStreamForSessionID:(id)arg1 error:(id)arg2;
- (void)timerDidFire:(id)arg1;

@end

