//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDAccessoryProfile.h>

#import <HomeKitDaemon/HMDCameraSettingProactiveReaderDelegate-Protocol.h>

@class HMDCameraResidentMessageHandler, HMDCameraSnapshotManager, HMDCameraStreamSnapshotHandler, HMFNetMonitor, NSMutableArray, NSSet, NSString;

@interface HMDCameraProfile : HMDAccessoryProfile <HMDCameraSettingProactiveReaderDelegate>
{
    BOOL _microphonePresent;
    BOOL _speakerPresent;
    NSSet *_cameraStreamManagers;
    HMDCameraSnapshotManager *_snapshotManager;
    HMDCameraStreamSnapshotHandler *_streamSnapshotHandler;
    NSMutableArray *_settingProactiveReaders;
    HMFNetMonitor *_networkMonitor;
    HMDCameraResidentMessageHandler *_residentMessageHandler;
}

@property (readonly, nonatomic) NSSet *cameraStreamManagers; // @synthesize cameraStreamManagers=_cameraStreamManagers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isMicrophonePresent) BOOL microphonePresent; // @synthesize microphonePresent=_microphonePresent;
@property (strong, nonatomic) HMFNetMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property (readonly, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property (readonly, nonatomic) NSMutableArray *settingProactiveReaders; // @synthesize settingProactiveReaders=_settingProactiveReaders;
@property (readonly, nonatomic) HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property (readonly, nonatomic, getter=isSpeakerPresent) BOOL speakerPresent; // @synthesize speakerPresent=_speakerPresent;
@property (readonly, nonatomic) HMDCameraStreamSnapshotHandler *streamSnapshotHandler; // @synthesize streamSnapshotHandler=_streamSnapshotHandler;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_createCameraManagers:(id)arg1;
- (void)_handleNegotiateStreamRequest:(id)arg1;
- (void)_handleStreamControlRequest:(id)arg1;
- (void)_setControlSupport;
- (void)cameraSettingProactiveReaderDidCompleteRead:(id)arg1;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAccessory:(id)arg1 services:(id)arg2 msgDispatcher:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (void)monitorForEventsForServices:(id)arg1;
- (void)registerForMessages;

@end

