//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@interface PUBrowsingVideoPlayerChange : PUViewModelChange
{
    BOOL _playStateDidChange;
    BOOL _desiredPlayStateDidChange;
    BOOL _isPlayingAllowedDidChange;
    BOOL _isActivatedDidChange;
    BOOL _isPlayerLoadingAllowedDidChange;
    BOOL _avPlayerDidChange;
    BOOL _playerItemDidChange;
    BOOL _errorDidChange;
    BOOL _isAtBeginningDidChange;
    BOOL _isAtEndDidChange;
    BOOL _isStalledDidChange;
    BOOL _alwaysRespectsMuteSwitchDidChange;
    BOOL _isPlayableDidChange;
    BOOL _isMutedDidChange;
    BOOL _audioStatusDidChange;
    BOOL _audioSessionVolumeIncreaseDidOccur;
}

@property (nonatomic, setter=_setAlwaysRespectsMuteSwitchDidChange:) BOOL alwaysRespectsMuteSwitchDidChange; // @synthesize alwaysRespectsMuteSwitchDidChange=_alwaysRespectsMuteSwitchDidChange;
@property (nonatomic, setter=_setAudioSessionVolumeIncreaseDidOccur:) BOOL audioSessionVolumeIncreaseDidOccur; // @synthesize audioSessionVolumeIncreaseDidOccur=_audioSessionVolumeIncreaseDidOccur;
@property (nonatomic, setter=_setAudioStatusDidChange:) BOOL audioStatusDidChange; // @synthesize audioStatusDidChange=_audioStatusDidChange;
@property (nonatomic, setter=_setAVPlayerDidChange:) BOOL avPlayerDidChange; // @synthesize avPlayerDidChange=_avPlayerDidChange;
@property (nonatomic, setter=_setDesiredPlayStateDidChange:) BOOL desiredPlayStateDidChange; // @synthesize desiredPlayStateDidChange=_desiredPlayStateDidChange;
@property (nonatomic, setter=_setErrorDidChange:) BOOL errorDidChange; // @synthesize errorDidChange=_errorDidChange;
@property (nonatomic, setter=_setActivatedDidChange:) BOOL isActivatedDidChange; // @synthesize isActivatedDidChange=_isActivatedDidChange;
@property (nonatomic, setter=_setAtBeginningDidChange:) BOOL isAtBeginningDidChange; // @synthesize isAtBeginningDidChange=_isAtBeginningDidChange;
@property (nonatomic, setter=_setAtEndDidChange:) BOOL isAtEndDidChange; // @synthesize isAtEndDidChange=_isAtEndDidChange;
@property (nonatomic, setter=_setIsMutedDidChange:) BOOL isMutedDidChange; // @synthesize isMutedDidChange=_isMutedDidChange;
@property (nonatomic, setter=_setPlayableDidChange:) BOOL isPlayableDidChange; // @synthesize isPlayableDidChange=_isPlayableDidChange;
@property (nonatomic, setter=_setPlayerLoadingAllowedDidChange:) BOOL isPlayerLoadingAllowedDidChange; // @synthesize isPlayerLoadingAllowedDidChange=_isPlayerLoadingAllowedDidChange;
@property (nonatomic, setter=_setPlayingAllowedDidChange:) BOOL isPlayingAllowedDidChange; // @synthesize isPlayingAllowedDidChange=_isPlayingAllowedDidChange;
@property (nonatomic, setter=_setStalledDidChange:) BOOL isStalledDidChange; // @synthesize isStalledDidChange=_isStalledDidChange;
@property (nonatomic, setter=_setPlayStateDidChange:) BOOL playStateDidChange; // @synthesize playStateDidChange=_playStateDidChange;
@property (nonatomic, setter=_setPlayerItemDidChange:) BOOL playerItemDidChange; // @synthesize playerItemDidChange=_playerItemDidChange;

- (BOOL)hasChanges;

@end
