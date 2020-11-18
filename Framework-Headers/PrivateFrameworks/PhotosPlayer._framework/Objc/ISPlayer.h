//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosPlayer/ISInputControllerDelegate-Protocol.h>
#import <PhotosPlayer/ISPlaybackControllerObserver-Protocol.h>
#import <PhotosPlayer/ISPlaybackSpecObserver-Protocol.h>
#import <PhotosPlayer/ISPlayerItemObserver-Protocol.h>

@class AVPlayer, ISInputController, ISPlaybackController, ISPlaybackSpec, ISPlayerItem, ISVitalityInput, NSError, NSHashTable, NSSet, NSString;
@protocol OS_dispatch_queue;

@interface ISPlayer : NSObject <ISInputControllerDelegate, ISPlaybackSpecObserver, ISPlaybackControllerObserver, ISPlayerItemObserver>
{
    BOOL _photoVisible;
    ISPlaybackSpec *_playbackSpec;
    NSObject<OS_dispatch_queue> *_audioSessionConfigurationQueue;
    NSObject<OS_dispatch_queue> *_observerQueue;
    AVPlayer *_videoPlayer;
    BOOL _managesAudioSession;
    BOOL _forcesPhotoHidden;
    BOOL _shouldManagePlayerItemLoading;
    BOOL __needsUpdateContent;
    BOOL __needsUpdateStatus;
    BOOL __needsUpdatePlayers;
    BOOL __hasPendingVitalityHint;
    ISPlayerItem *_playerItem;
    long long _status;
    NSError *_error;
    long long _playbackState;
    NSHashTable *__outputs;
    ISInputController *__inputController;
    ISPlaybackController *__playbackController;
    ISVitalityInput *__vitalityHintInput;
    NSString *__defaultAudioCategory;
    long long __defaultAudioCategoryOptions;
    long long __currentMediaServicesResetID;
    NSHashTable *__changeObservers;
    CDStruct_1b6d18a9 _photoTime;
}

@property (readonly, nonatomic) NSHashTable *_changeObservers; // @synthesize _changeObservers=__changeObservers;
@property (nonatomic, setter=_setCurrentMediaServicesResetID:) long long _currentMediaServicesResetID; // @synthesize _currentMediaServicesResetID=__currentMediaServicesResetID;
@property (strong, nonatomic, setter=_setDefaultAudioCategory:) NSString *_defaultAudioCategory; // @synthesize _defaultAudioCategory=__defaultAudioCategory;
@property (nonatomic, setter=_setDefaultAudioCategoryOptions:) long long _defaultAudioCategoryOptions; // @synthesize _defaultAudioCategoryOptions=__defaultAudioCategoryOptions;
@property (nonatomic, setter=_setHasPendingHint:) BOOL _hasPendingVitalityHint; // @synthesize _hasPendingVitalityHint=__hasPendingVitalityHint;
@property (strong, nonatomic, setter=_inputController:) ISInputController *_inputController; // @synthesize _inputController=__inputController;
@property (nonatomic, setter=_setNeedsUpdateContent:) BOOL _needsUpdateContent; // @synthesize _needsUpdateContent=__needsUpdateContent;
@property (nonatomic, setter=_setNeedsUpdatePlayers:) BOOL _needsUpdatePlayers; // @synthesize _needsUpdatePlayers=__needsUpdatePlayers;
@property (nonatomic, setter=_setNeedsUpdateStatus:) BOOL _needsUpdateStatus; // @synthesize _needsUpdateStatus=__needsUpdateStatus;
@property (strong, nonatomic, setter=_setOutputs:) NSHashTable *_outputs; // @synthesize _outputs=__outputs;
@property (strong, nonatomic, setter=_setPlaybackController:) ISPlaybackController *_playbackController; // @synthesize _playbackController=__playbackController;
@property (readonly, nonatomic) ISVitalityInput *_vitalityHintInput; // @synthesize _vitalityHintInput=__vitalityHintInput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (nonatomic) BOOL forcesPhotoHidden; // @synthesize forcesPhotoHidden=_forcesPhotoHidden;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSSet *inputs;
@property (readonly, nonatomic) BOOL managesAudioSession; // @synthesize managesAudioSession=_managesAudioSession;
@property (readonly, nonatomic) CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property (nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property (strong, nonatomic) ISPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property (nonatomic) BOOL shouldManagePlayerItemLoading; // @synthesize shouldManagePlayerItemLoading=_shouldManagePlayerItemLoading;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_audioSessionCategoryDidChange;
- (void)_configurePlayerItemWithPlaybackSpec;
- (void)_enumerateObserversWithBlock:(CDUnknownBlockType)arg1;
- (void)_handleMediaServicesResetIfNecessaryForError:(id)arg1;
- (void)_invalidateContent;
- (void)_invalidatePlayers;
- (void)_invalidateStatus;
- (void)_notifyVitalityEndHandler;
- (void)_resetMediaObjectsWithResetID:(long long)arg1;
- (void)_seekForVitalityHintIsScrubbing:(BOOL)arg1;
- (void)_setError:(id)arg1;
- (void)_setPlaybackState:(long long)arg1;
- (void)_setStatus:(long long)arg1;
- (void)_setupAVObjects;
- (void)_triggerVitalyHintPlayback;
- (void)_updateAudioCategory;
- (void)_updateContentIfNeeded;
- (void)_updateIfNeeded;
- (BOOL)_updateNeeded;
- (void)_updatePlayback;
- (void)_updatePlayersIfNeeded;
- (void)_updateStatusIfNeeded;
- (void)addInput:(id)arg1;
- (void)addOutput:(id)arg1;
- (CDStruct_1b6d18a9)currentTime;
- (void)dealloc;
- (CDStruct_1b6d18a9)duration;
- (id)init;
- (id)initWithManagesAudioSession:(BOOL)arg1;
- (id)initWithManagesAudioSession:(BOOL)arg1 videoPlayer:(id)arg2;
- (id)initWithVideoPlayer:(id)arg1;
- (void)inputControllerDidChange:(id)arg1;
- (BOOL)isPhotoVisible;
- (BOOL)isPlayingVitalityHint;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)playVitalityHint;
- (void)playbackControllerPlaybackStateDidChange:(id)arg1;
- (void)playbackControllerPlayerStatusDidChange:(id)arg1;
- (id)playbackSpec;
- (void)playbackSpecDidChange:(id)arg1;
- (void)playerItemStatusDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)removeAllInputs;
- (void)removeInput:(id)arg1;
- (void)removeOutput:(id)arg1;
- (void)seekForVitalityHintIfNeeded;
- (void)setPlaybackSpec:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end

