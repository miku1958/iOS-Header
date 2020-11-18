//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraStreamControlManager.h>

#import <HomeKitDaemon/HMDCameraIDSDeviceConnectionSenderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraIDSSessionInitiatorDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamControlManagerProtocol-Protocol.h>
#import <HomeKitDaemon/HMDStreamingManagerDelegate-Protocol.h>

@class HMDCameraMediaConfigGenerator, HMDCameraSupportedConfigurationCache, HMDLocalStreamSession, NSString;

@interface HMDCameraLocalStreamControlManager : HMDCameraStreamControlManager <HMDStreamingManagerDelegate, HMDCameraIDSSessionInitiatorDelegate, HMDCameraIDSDeviceConnectionSenderDelegate, HMDCameraStreamControlManagerProtocol>
{
    HMDLocalStreamSession *_streamSession;
    HMDCameraMediaConfigGenerator *_configGenerator;
    HMDCameraSupportedConfigurationCache *_supportedConfigCache;
}

@property (strong, nonatomic) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) HMDLocalStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property (readonly) Class superclass;
@property (strong, nonatomic) HMDCameraSupportedConfigurationCache *supportedConfigCache; // @synthesize supportedConfigCache=_supportedConfigCache;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)_calculateMTU;
- (void)_cleanUpStreamSession;
- (void)_getSupportedConfigurations;
- (void)_handleSetupEndPointRead:(id)arg1;
- (void)_handleSupportedParameters:(id)arg1;
- (void)_negotiateStream;
- (void)_reconfigureStream:(id)arg1;
- (void)_reconfigureStreams;
- (void)_sendSetupEndPointRead;
- (void)_sendUpdatedConfiguration;
- (void)_startStream:(id)arg1;
- (void)_startStreamingManager;
- (void)_stopCurrentStreamSession;
- (void)_streamStarted;
- (void)_writeReselectConfig;
- (void)_writeSelectConfig:(id)arg1 reconfigure:(BOOL)arg2;
- (void)_writeSetupEndPoint;
- (void)_writeStartConfig;
- (void)_writeStopConfig;
- (void)dealloc;
- (void)deviceConnectionSender:(id)arg1 didEndSession:(id)arg2;
- (void)deviceConnectionSender:(id)arg1 didSetup:(id)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 destinationID:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 supportedConfigCache:(id)arg11;
- (void)negotiateStream;
- (void)reconfigureStream:(id)arg1;
- (void)remoteSetup:(id)arg1;
- (void)sessionInitiator:(id)arg1 didEndSession:(id)arg2;
- (void)sessionInitiator:(id)arg1 didSetup:(id)arg2;
- (void)startStream:(id)arg1;
- (void)stopStream;
- (void)streamingManager:(id)arg1 didStartRelay:(id)arg2;
- (void)streamingManager:(id)arg1 didStartStream:(id)arg2 slotIdentifier:(id)arg3;
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;
- (void)streamingManagerDidNetworkImprove:(id)arg1;
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1 audioStreamSetting:(unsigned long long)arg2;
- (void)streamingManagerDidStopStream:(id)arg1;
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;
- (void)updateAudioSetting:(unsigned long long)arg1;

@end

