//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPCPlaybackIntent, MPProtocolProxy, NSString, UIView, _MPCAVController, _MPCLeaseManager, _MPCMediaRemotePublisher, _MPCReportingController;
@protocol MPCPlaybackEngineDelegate, MPCPlaybackEngineEventObserving;

@interface MPCPlaybackEngine : NSObject
{
    BOOL _pictureInPictureSupported;
    BOOL _videoSupported;
    BOOL _stateRestorationSupported;
    BOOL _scheduledPlaybackStatePreservation;
    BOOL _systemMusicApplication;
    NSString *_playerID;
    id<MPCPlaybackEngineDelegate> _delegate;
    MPCPlaybackIntent *_fallbackPlaybackIntent;
    MPProtocolProxy<MPCPlaybackEngineEventObserving> *_eventObserver;
    _MPCAVController *_implementation;
    _MPCMediaRemotePublisher *_mediaRemotePublisher;
    _MPCReportingController *_reportingController;
    _MPCLeaseManager *_leaseManager;
}

@property (weak, nonatomic) id<MPCPlaybackEngineDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) MPProtocolProxy<MPCPlaybackEngineEventObserving> *eventObserver; // @synthesize eventObserver=_eventObserver;
@property (strong, nonatomic) MPCPlaybackIntent *fallbackPlaybackIntent; // @synthesize fallbackPlaybackIntent=_fallbackPlaybackIntent;
@property (readonly, nonatomic) _MPCAVController *implementation; // @synthesize implementation=_implementation;
@property (readonly, nonatomic) _MPCLeaseManager *leaseManager; // @synthesize leaseManager=_leaseManager;
@property (readonly, nonatomic) _MPCMediaRemotePublisher *mediaRemotePublisher; // @synthesize mediaRemotePublisher=_mediaRemotePublisher;
@property (nonatomic, getter=isPictureInPictureSupported) BOOL pictureInPictureSupported; // @synthesize pictureInPictureSupported=_pictureInPictureSupported;
@property (readonly, copy, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property (readonly, nonatomic) _MPCReportingController *reportingController; // @synthesize reportingController=_reportingController;
@property (nonatomic, getter=hasScheduledPlaybackStatePreservation) BOOL scheduledPlaybackStatePreservation; // @synthesize scheduledPlaybackStatePreservation=_scheduledPlaybackStatePreservation;
@property (nonatomic, getter=isStateRestorationSupported) BOOL stateRestorationSupported; // @synthesize stateRestorationSupported=_stateRestorationSupported;
@property (nonatomic, getter=isSystemMusicApplication) BOOL systemMusicApplication; // @synthesize systemMusicApplication=_systemMusicApplication;
@property (nonatomic, getter=isVideoSupported) BOOL videoSupported; // @synthesize videoSupported=_videoSupported;
@property (readonly, nonatomic) UIView *videoView;

+ (void)preheatPlayback;
- (void).cxx_destruct;
- (id)_playerForMusicPlayerServer;
- (void)_preservePlaybackStateImmediately;
- (void)_restorePlaybackStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)addEngineObserver:(id)arg1;
- (void)addSupportedSpecializedQueueIdentifier:(id)arg1 localizedName:(id)arg2 queueType:(long long)arg3 queueParameters:(id)arg4;
- (void)becomeActive;
- (id)initWithPlayerID:(id)arg1;
- (void)removeEngineObserver:(id)arg1;
- (void)removeSupportedSpecializedQueueIdentifier:(id)arg1;
- (void)reportUserSeekFromTime:(double)arg1 toTime:(double)arg2;
- (void)restoreStateWithCompletion:(CDUnknownBlockType)arg1;
- (void)schedulePlaybackStatePreservation;
- (void)start;

@end

