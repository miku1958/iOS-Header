//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults, RMAudioListenerPoseManager, RMDummyData, RMDummyDataManager;
@protocol OS_dispatch_queue;

@interface RMRelativeMotionManager : NSObject
{
    RMDummyData *_dummyDataBuffer[2];
    int _dummyDataBufferIndex;
    struct os_unfair_lock_s _dummyDataBufferLock;
    int _currentDummyDataBufferIndex;
    struct {
        CDStruct_91d2e2b9 quaternion;
        double timestamp;
        long long error;
        double consumedAuxTimestamp;
        double receivedAuxTimestamp;
        double machAbsTimestamp;
    } _audioListenerPoseBuffer[2];
    long long _audioListenerPoseErrorBuffer[2];
    int _audioListenerPoseBufferIndex;
    struct os_unfair_lock_s _audioListenerPoseBufferLock;
    BOOL _shouldReceiveDummyData;
    BOOL _shouldReceiveAudioListenerPose;
    BOOL _verboseLatencyAnalysisLogging;
    int _currentAudioListenerPoseBufferIndex;
    NSObject<OS_dispatch_queue> *_queue;
    RMDummyDataManager *_dummyDataManager;
    NSUserDefaults *_defaults;
    RMAudioListenerPoseManager *_audioListenerPoseManager;
}

+ (BOOL)isAudioListenerPoseAvailable;
- (void).cxx_destruct;
- (void)dealloc;
- (long long)getCurrentAudioListenerPose:(CDStruct_91d2e2b9 *)arg1 timestamp:(double *)arg2;
- (id)getCurrentAudioListenerPoseWithError:(long long *)arg1;
- (id)getCurrentDummyData;
- (id)initWithQueue:(id)arg1 options:(id)arg2;
- (void)resetAudioListenerPoseTrackingForAllClients;
- (void)startReceivingAudioListenerPose;
- (void)startReceivingDummyData;
- (void)stopReceivingAudioListenerPose;
- (void)stopReceivingDummyData;

@end

