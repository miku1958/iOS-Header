//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDCameraClipUploaderDelegate-Protocol.h>
#import <HomeKitDaemon/HMDCameraRecordingSessionVideoAnalyzerDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraClipUploader, HMDCameraProfile, HMDCameraRecordingSessionSignificantEventManager, HMDCameraRecordingSessionTimelineManager, HMDCameraSignificantEventServer, HMDStreamData, HMFActivity, HMICameraVideoAnalyzerResult, HMICameraVideoFragment, NSData, NSDictionary, NSNumber, NSObject, NSString, NSUUID;
@protocol HMDCameraRecordingSessionDelegate, HMDCameraRecordingSessionFactory, HMDCameraRecordingSessionVideoAnalyzer, OS_dispatch_queue;

@interface HMDCameraRecordingSession : HMFObject <HMFLogging, HMDCameraRecordingSessionVideoAnalyzerDelegate, HMDCameraClipUploaderDelegate>
{
    BOOL _noMoreFragmentsAvailable;
    BOOL _active;
    NSDictionary *_homePresenceByPairingIdentity;
    HMDCameraRecordingSessionTimelineManager *_timelineManager;
    unsigned long long _currentFragmentNumber;
    NSUUID *_identifier;
    double _configuredFragmentDuration;
    id<HMDCameraRecordingSessionDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraProfile *_camera;
    NSString *_logIdentifier;
    id<HMDCameraRecordingSessionFactory> _factory;
    id<HMDCameraRecordingSessionVideoAnalyzer> _videoAnalyzer;
    HMFActivity *_sessionActivity;
    HMDCameraSignificantEventServer *_significantEventServer;
    HMDCameraRecordingSessionSignificantEventManager *_significantEventManager;
    unsigned long long _pendingFragmentsCount;
    double _cumulativeFragmentDuration;
    double _currentClipDuration;
    HMDCameraClipUploader *_clipUploader;
    HMDStreamData *_cameraVideoInitFragment;
    HMICameraVideoFragment *_introFragment;
    HMICameraVideoAnalyzerResult *_introAnalyzerResult;
    NSData *_analysisVideoInitData;
    NSNumber *_remainingRecordingExtensionDuration;
    NSString *_fragmentDirectoryPath;
}

@property (getter=isActive) BOOL active; // @synthesize active=_active;
@property (strong) NSData *analysisVideoInitData; // @synthesize analysisVideoInitData=_analysisVideoInitData;
@property (readonly) HMDCameraProfile *camera; // @synthesize camera=_camera;
@property (strong) HMDStreamData *cameraVideoInitFragment; // @synthesize cameraVideoInitFragment=_cameraVideoInitFragment;
@property (strong) HMDCameraClipUploader *clipUploader; // @synthesize clipUploader=_clipUploader;
@property (readonly) double configuredFragmentDuration; // @synthesize configuredFragmentDuration=_configuredFragmentDuration;
@property double cumulativeFragmentDuration; // @synthesize cumulativeFragmentDuration=_cumulativeFragmentDuration;
@property double currentClipDuration; // @synthesize currentClipDuration=_currentClipDuration;
@property unsigned long long currentFragmentNumber; // @synthesize currentFragmentNumber=_currentFragmentNumber;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMDCameraRecordingSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) id<HMDCameraRecordingSessionFactory> factory; // @synthesize factory=_factory;
@property (copy) NSString *fragmentDirectoryPath; // @synthesize fragmentDirectoryPath=_fragmentDirectoryPath;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *homePresenceByPairingIdentity; // @synthesize homePresenceByPairingIdentity=_homePresenceByPairingIdentity;
@property (readonly, copy) NSUUID *identifier; // @synthesize identifier=_identifier;
@property (strong) HMICameraVideoAnalyzerResult *introAnalyzerResult; // @synthesize introAnalyzerResult=_introAnalyzerResult;
@property (strong) HMICameraVideoFragment *introFragment; // @synthesize introFragment=_introFragment;
@property (readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
@property BOOL noMoreFragmentsAvailable; // @synthesize noMoreFragmentsAvailable=_noMoreFragmentsAvailable;
@property unsigned long long pendingFragmentsCount; // @synthesize pendingFragmentsCount=_pendingFragmentsCount;
@property (readonly) unsigned long long recordingEventTriggers;
@property (copy) NSNumber *remainingRecordingExtensionDuration; // @synthesize remainingRecordingExtensionDuration=_remainingRecordingExtensionDuration;
@property (readonly) HMFActivity *sessionActivity; // @synthesize sessionActivity=_sessionActivity;
@property (readonly) HMDCameraRecordingSessionSignificantEventManager *significantEventManager; // @synthesize significantEventManager=_significantEventManager;
@property (readonly) HMDCameraSignificantEventServer *significantEventServer; // @synthesize significantEventServer=_significantEventServer;
@property (readonly) Class superclass;
@property (readonly) HMDCameraRecordingSessionTimelineManager *timelineManager; // @synthesize timelineManager=_timelineManager;
@property (readonly) id<HMDCameraRecordingSessionVideoAnalyzer> videoAnalyzer; // @synthesize videoAnalyzer=_videoAnalyzer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_endSessionWithError:(id)arg1;
- (void)_finishCurrentClipUploader;
- (void)_handleDidFailAnalysisForFragment:(id)arg1 withError:(id)arg2;
- (void)_handleFragment:(id)arg1 withResult:(id)arg2;
- (BOOL)_isValidFirstSessionFragment:(id)arg1;
- (BOOL)_isValidNonFirstSessionFragment:(id)arg1;
- (void)_notifyForAnalyzerResult:(id)arg1 fragment:(id)arg2 dateOfOccurrence:(id)arg3 timeOffsetWithinClip:(double)arg4 recordingEventTriggers:(unsigned long long)arg5;
- (void)_notifyForSignificantEvent:(id)arg1 recordingEventTriggers:(unsigned long long)arg2 fragmentNumber:(unsigned long long)arg3;
- (BOOL)_shouldEndSession;
- (BOOL)_shouldRecordFragmentWithAnalyzerResult:(id)arg1 sequenceNumber:(unsigned long long)arg2 recordingEventTriggers:(unsigned long long)arg3 fragmentAnalyzedEvent:(id)arg4;
- (void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(unsigned long long)arg1 fragmentNumber:(unsigned long long)arg2;
- (void)_uploadFragment:(id)arg1 withDuration:(double)arg2 posterFrames:(id)arg3 clipFinalizedBecauseMaxDurationExceeded:(BOOL)arg4;
- (void)_writeFragment:(id)arg1;
- (id)activityZones;
- (BOOL)activityZonesIncludedForSignificantEventDetection;
- (void)analyzer:(id)arg1 didAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (void)analyzer:(id)arg1 didFailAnalysisForFragment:(id)arg2 withError:(id)arg3;
- (void)analyzer:(id)arg1 didNotAnalyzeFragment:(id)arg2 withResult:(id)arg3;
- (id)attributeDescriptions;
- (void)configure;
- (void)handleFragment:(id)arg1;
- (void)handleNoMoreFragmentsAvailable;
- (id)initWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 significantEventServer:(id)arg5 homePresenceByPairingIdentity:(id)arg6;
- (id)initWithWorkQueue:(id)arg1 camera:(id)arg2 configuredFragmentDuration:(double)arg3 timelineManager:(id)arg4 significantEventServer:(id)arg5 homePresenceByPairingIdentity:(id)arg6 factory:(id)arg7;
- (void)uploaderDidFailUpload:(id)arg1;

@end
