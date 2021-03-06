//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosPlayer/ISBehavior.h>

@protocol ISLivePhotoVitalityBehaviorDelegate;

__attribute__((visibility("hidden")))
@interface ISLivePhotoVitalityBehavior : ISBehavior
{
    id _easeOutObserver;
    id _transitionToPhotoObserver;
    BOOL _pauseDuringTransition;
    BOOL _prepared;
    BOOL _playing;
    BOOL _playingBeyondPhoto;
    BOOL _preparing;
    BOOL __shouldPlayAfterPreparation;
    float _playRate;
    double _photoTransitionDuration;
    unsigned long long _assetOptions;
    CDStruct_1b6d18a9 _playbackEndTime;
    CDStruct_1b6d18a9 _playDuration;
}

@property (nonatomic, setter=_setShouldPlayAfterPreparation:) BOOL _shouldPlayAfterPreparation; // @synthesize _shouldPlayAfterPreparation=__shouldPlayAfterPreparation;
@property (readonly, nonatomic) unsigned long long assetOptions; // @synthesize assetOptions=_assetOptions;
@property (weak, nonatomic) id<ISLivePhotoVitalityBehaviorDelegate> delegate; // @dynamic delegate;
@property (readonly, nonatomic) BOOL pauseDuringTransition; // @synthesize pauseDuringTransition=_pauseDuringTransition;
@property (readonly, nonatomic) double photoTransitionDuration; // @synthesize photoTransitionDuration=_photoTransitionDuration;
@property (readonly, nonatomic) CDStruct_1b6d18a9 playDuration; // @synthesize playDuration=_playDuration;
@property (readonly, nonatomic) float playRate; // @synthesize playRate=_playRate;
@property (readonly, nonatomic) CDStruct_1b6d18a9 playbackEndTime; // @synthesize playbackEndTime=_playbackEndTime;
@property (readonly, nonatomic, getter=isPlaying) BOOL playing; // @synthesize playing=_playing;
@property (nonatomic, getter=isPlayingBeyondPhoto, setter=_setPlayingBeyondPhoto:) BOOL playingBeyondPhoto; // @synthesize playingBeyondPhoto=_playingBeyondPhoto;
@property (nonatomic, getter=isPrepared, setter=_setPrepared:) BOOL prepared; // @synthesize prepared=_prepared;
@property (nonatomic, getter=_isPreparing, setter=_setPreparing:) BOOL preparing; // @synthesize preparing=_preparing;

- (void).cxx_destruct;
- (void)_didReachTransitionTime;
- (void)_didReachTransitionToPhotoTime;
- (void)_handleDidFinishPreroll;
- (void)_handleDidSeekToStartTime;
- (void)_startObservingVideo;
- (void)_startVideoPlayback;
- (void)_stopObservingVideo;
- (void)activeDidChange;
- (long long)behaviorType;
- (void)cancelSettleToPhoto;
- (void)dealloc;
- (id)initWithInitialLayoutInfo:(id)arg1 playbackEndTime:(CDStruct_1b6d18a9)arg2 playDuration:(CDStruct_1b6d18a9)arg3 playRate:(float)arg4 photoTransitionDuration:(double)arg5 pauseDuringTransition:(BOOL)arg6 assetOptions:(unsigned long long)arg7;
- (void)playVitality;
- (void)prepareForVitality;
- (void)videoReadyForDisplayDidChange;

@end

