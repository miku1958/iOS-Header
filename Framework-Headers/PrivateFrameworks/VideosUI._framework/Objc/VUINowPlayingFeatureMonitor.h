//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideosUI/TVMediaPlaybackManagerDelegate-Protocol.h>

@class NSArray, NSMapTable, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, TVMediaPlaybackManager;
@protocol OS_dispatch_queue, TVPAVFPlayback, VUINowPlayingFeature, VUINowPlayingFeatureMonitorDelegate;

__attribute__((visibility("hidden")))
@interface VUINowPlayingFeatureMonitor : NSObject <TVMediaPlaybackManagerDelegate>
{
    struct {
        BOOL respondsToFeatureDidChangeState;
        BOOL respondsToActiveFeatureChangedFrom;
    } _delegateFlags;
    BOOL _observingElapsedTime;
    id<VUINowPlayingFeatureMonitorDelegate> _delegate;
    NSObject<TVPAVFPlayback> *_player;
    TVMediaPlaybackManager *_playbackManager;
    NSMutableSet *_features;
    NSMapTable *_featureDependencies;
    NSMapTable *_featureTokens;
    NSMapTable *_featureBoundaryInfos;
    NSMapTable *_featureTimers;
    id<VUINowPlayingFeature> _featureLastRequestedUI;
    NSMutableArray *_enabledUIModes;
    double _lastProcessedElapsedTime;
    NSMutableDictionary *_boundaryTimeObserverInfos;
    id _elapsedTimeObserverToken;
    NSObject<OS_dispatch_queue> *_elapsedTimeProcessingQueue;
    NSMutableArray *_elapsedTimes;
}

@property (readonly, nonatomic) NSArray *allFeatures;
@property (strong, nonatomic) NSMutableDictionary *boundaryTimeObserverInfos; // @synthesize boundaryTimeObserverInfos=_boundaryTimeObserverInfos;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUINowPlayingFeatureMonitorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) id elapsedTimeObserverToken; // @synthesize elapsedTimeObserverToken=_elapsedTimeObserverToken;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *elapsedTimeProcessingQueue; // @synthesize elapsedTimeProcessingQueue=_elapsedTimeProcessingQueue;
@property (strong, nonatomic) NSMutableArray *elapsedTimes; // @synthesize elapsedTimes=_elapsedTimes;
@property (strong, nonatomic) NSMutableArray *enabledUIModes; // @synthesize enabledUIModes=_enabledUIModes;
@property (strong, nonatomic) NSMapTable *featureBoundaryInfos; // @synthesize featureBoundaryInfos=_featureBoundaryInfos;
@property (strong, nonatomic) NSMapTable *featureDependencies; // @synthesize featureDependencies=_featureDependencies;
@property (strong, nonatomic) id<VUINowPlayingFeature> featureLastRequestedUI; // @synthesize featureLastRequestedUI=_featureLastRequestedUI;
@property (strong, nonatomic) NSMapTable *featureTimers; // @synthesize featureTimers=_featureTimers;
@property (strong, nonatomic) NSMapTable *featureTokens; // @synthesize featureTokens=_featureTokens;
@property (strong, nonatomic) NSMutableSet *features; // @synthesize features=_features;
@property (readonly) unsigned long long hash;
@property (nonatomic) double lastProcessedElapsedTime; // @synthesize lastProcessedElapsedTime=_lastProcessedElapsedTime;
@property (nonatomic) BOOL observingElapsedTime; // @synthesize observingElapsedTime=_observingElapsedTime;
@property (strong, nonatomic) TVMediaPlaybackManager *playbackManager; // @synthesize playbackManager=_playbackManager;
@property (strong, nonatomic) NSObject<TVPAVFPlayback> *player; // @synthesize player=_player;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activateFeature:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_activeFeature;
- (id)_activeFeatures;
- (void)_addObservedToken:(id)arg1 forFeature:(id)arg2;
- (void)_addTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2 andHandler:(CDUnknownBlockType)arg3;
- (void)_cancelFeatureTimersIfNeeded;
- (void)_cancelTimerForFeature:(id)arg1;
- (void)_cleanUpEverything;
- (void)_cleanupFeature:(id)arg1;
- (void)_deactivateFeature:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)_hasActiveFeaturesInArray:(id)arg1;
- (BOOL)_hasAnyActiveFeature;
- (BOOL)_isElapsedTimeWithinFeatureTimeWindow:(id)arg1;
- (BOOL)_isHybridFeature:(id)arg1;
- (BOOL)_isTVAdvisoryFeature:(id)arg1;
- (BOOL)_isTimeBoundFeature:(id)arg1;
- (BOOL)_isTimerTriggeredFeature:(id)arg1;
- (BOOL)_isUserTriggeredFeature:(id)arg1;
- (BOOL)_needsUIForFeature:(id)arg1;
- (id)_observerInfoForFeature:(id)arg1 matchingTime:(double)arg2;
- (void)_playbackStateChangedNottificaiton:(id)arg1;
- (void)_processAnyTimeBoundFeatures;
- (void)_processElapsedTime:(double)arg1;
- (void)_processElapsedTimeOnInternalQueue:(double)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_processFeature:(id)arg1;
- (void)_processLastElapsedTime;
- (void)_processTimeBoundFeature:(id)arg1;
- (void)_processTimerTriggeredFeature:(id)arg1;
- (void)_processUserTriggeredFeature:(id)arg1 activate:(BOOL)arg2 animated:(BOOL)arg3;
- (void)_registerPlaybackStateChangeNotification;
- (void)_removeAllObservedTokensForFeature:(id)arg1;
- (void)_removeTimeObservingForFeature:(id)arg1 withStartTime:(double)arg2;
- (void)_scheduleDeactivationOfTimeBoundFeature:(id)arg1;
- (BOOL)_shouldActivateTimeBoundFeatureInitially:(id)arg1;
- (BOOL)_shouldAnimateFeature:(id)arg1;
- (void)_startObservingElapsedTime;
- (id)_timeBoundFeatures;
- (void)_unregisterPlaybackStateNotification;
- (id)activeFeatureForType:(unsigned long long)arg1;
- (void)addFeature:(id)arg1;
- (void)addFeature:(id)arg1 withDependencyToPreferredFeatures:(id)arg2;
- (void)dealloc;
- (void)enableUIMode:(long long)arg1 enabled:(BOOL)arg2;
- (void)evaluateFeature:(id)arg1;
- (id)featuresForType:(unsigned long long)arg1;
- (id)init;
- (BOOL)mediaPlaybackManager:(id)arg1 shouldEnableUIModeImplicitly:(long long)arg2;
- (void)mediaPlaybackManager:(id)arg1 shouldHideUI:(BOOL)arg2 animated:(BOOL)arg3 animations:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)removeFeature:(id)arg1;
- (void)removeFeaturesMatching:(id)arg1;

@end

