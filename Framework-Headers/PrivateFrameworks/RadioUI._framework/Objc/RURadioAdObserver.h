//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RadioUI/ADBannerViewDelegate-Protocol.h>
#import <RadioUI/ISDialogOperationDelegate-Protocol.h>

@class ISDialogOperation, MPAVController, MPUJinglePlayActivityReportingController, MPUReportingPlaybackObserver, NSString, RUJingleTiltReportingController, RURTCReportingController;
@protocol OS_dispatch_queue;

@interface RURadioAdObserver : NSObject <ADBannerViewDelegate, ISDialogOperationDelegate>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BOOL _hasDirtyVisualEngagement;
    BOOL _isSlotAcquisitionInProgress;
    long long _lastApplicationState;
    MPUJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
    RUJingleTiltReportingController *_jingleTiltReportingController;
    double _minDurationToCountAsPlayed;
    long long _policyEngineEnabledCount;
    RURTCReportingController *_RTCReportingController;
    double _skipThreshold;
    ISDialogOperation *_slotAcquisitionDialogOperation;
    long long _visualEngagementCount;
    BOOL _visuallyEngaged;
    MPAVController *_player;
    MPUReportingPlaybackObserver *_reportingPlaybackObserver;
    unsigned long long _numberOfSkippedTracks;
}

@property (strong, nonatomic) RURTCReportingController *RTCReportingController; // @synthesize RTCReportingController=_RTCReportingController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MPUJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
@property (strong, nonatomic) RUJingleTiltReportingController *jingleTiltReportingController; // @synthesize jingleTiltReportingController=_jingleTiltReportingController;
@property (readonly, nonatomic) unsigned long long numberOfSkippedTracks; // @synthesize numberOfSkippedTracks=_numberOfSkippedTracks;
@property (strong, nonatomic) MPAVController *player; // @synthesize player=_player;
@property (strong, nonatomic) MPUReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isVisuallyEngaged) BOOL visuallyEngaged; // @synthesize visuallyEngaged=_visuallyEngaged;

+ (id)sharedAdObserver;
- (void).cxx_destruct;
- (void)__scheduleUpdateVisualEngagement;
- (id)_adPolicyEngine;
- (void)_applicationDidBecomeActiveNotification:(id)arg1;
- (void)_applicationWillResignActiveNotification:(id)arg1;
- (void)_attemptSlotAcquisitionWithAdditionalBodyParameters:(id)arg1;
- (void)_beginEnablingPolicyEngine;
- (void)_bufferingStateDidChangeNotification:(id)arg1;
- (void)_clearAssetCacheForItem:(id)arg1;
- (void)_getCurrentTime:(double *)arg1 duration:(double *)arg2 wasSkipped:(BOOL *)arg3 didAssetFailToLoad:(BOOL *)arg4 forItem:(id)arg5;
- (void)_handleSkipForChangedItem:(id)arg1 didChangeStation:(BOOL)arg2;
- (void)_heartbeatChangedNotification:(id)arg1;
- (BOOL)_isPolicyEngineEnabled;
- (void)_itemAssetLoadedDidChangeNotification:(id)arg1;
- (void)_itemChangedNotification:(id)arg1;
- (void)_itemDidFinishLoadingNotification:(id)arg1;
- (void)_itemWillChangeNotification:(id)arg1;
- (void)_loadMinDurationToCountAsPlayedFromURLBag;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_radioStreamTrackAVItemDidReceiveTimedMetadataPingsNotification:(id)arg1;
- (void)_registerForPlayerNotifications;
- (void)_reportPlaybackEndedForAdTrack:(id)arg1 withItem:(id)arg2;
- (void)_scheduleUpdateVisualEngagement;
- (void)_storeBagDidLoadNotification:(id)arg1;
- (void)_unregisterForPlayerNotifications;
- (void)_updateVisualEngagement;
- (void)_updateWithStoreBag:(id)arg1;
- (void)attemptSlotAcquisition;
- (void)beginEnablingPolicyEngine;
- (void)beginVisualEngagement;
- (void)dealloc;
- (void)didTransitionItemForBan:(id)arg1;
- (void)endEnablingPolicyEngine;
- (void)endVisualEngagement;
- (void)getHistoryWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)getTracksWithRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)heartbeatTokenReturningError:(id *)arg1;
- (void)historyDidBeginPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (void)historyDidEndPlayingAdTrack:(id)arg1 withItem:(id)arg2;
- (id)init;
- (void)noteDidEnterStation:(id)arg1;
- (void)operation:(id)arg1 selectedButton:(id)arg2;
- (void)optimalTransmissionWindowDidOpen;
- (void)requestAdsForSlot:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)willTransitionItemForBan:(id)arg1;

@end

